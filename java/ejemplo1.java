import java.io.*;

public class ejemplo1{

    public static void main(String[] args) {
        StringBuffer nombreTmp = new StringBuffer();
        int c;

        System.out.print("Escribe tu nobre: ");
        try{
            while((c = System.in.read()) != '\n'){
                nombreTmp.append((char)c);
            }
        }
        catch(IOException e){
            System.out.print("Se ha producido el error: " + e);
            return;
        }

        String nombre = new String(nombreTmp.toString());
        System.out.print("Tu nombre es: " + nombre + '\n');
    }
}
