import org.apache.axis.client.Call;
import org.apache.axis.client.Service;
import org.apache.axis.encoding.XMLType;

import javax.xml.rpc.ParameterMode;

public class ClientCalc
{
   public static void main(String [] args) throws Exception {

       String endpoint = "http://localhost:8081/axis/Calculadora.jws";

       if (args == null || args.length != 3) {
           System.err.println("Uso: ClienteCalc <sumar|restar|multiplicar|dividir> arg1 arg2");
           return;
       }

       String method = args[0];
       if (!(method.equals("sumar") || method.equals("restar") || method.equals("multiplicar") || method.equals("dividir"))) {
           System.err.println("Uso: ClienteCalc <sumar|restar|multiplicar|dividir> arg1 arg2");
           return;
       }
       if (method.equals("dividir") && (args[2].equals("0"))) {
           System.err.println("ERROR: no se puede dividir entre 0");
           return;
       }

       Integer i1 = new Integer(args[1]);
       Integer i2 = new Integer(args[2]);

       Service  service = new Service();
       Call     call    = (Call) service.createCall();

       call.setTargetEndpointAddress( new java.net.URL(endpoint) );
       call.setOperationName( method );
       call.addParameter( "op1", XMLType.XSD_INT, ParameterMode.IN );
       call.addParameter( "op2", XMLType.XSD_INT, ParameterMode.IN );
       call.setReturnType( XMLType.XSD_INT );

       Integer ret = (Integer) call.invoke( new Object [] { i1, i2 });

       System.out.println("Resultado : " + ret);
   }
}
