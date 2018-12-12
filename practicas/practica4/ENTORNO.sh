#!/bin/bash
export AXIS2_HOME=/opt/axis2/
export AXIS2_LIB=$AXIS2_HOME/lib
export AXIS2CLASSPATH=$AXIS2_LIB/axis2.jar:$AXIS2_LIB/commons-discovery-0.2.jar:$AXIS2_LIB/commons-logging-1.0.4.jar:$AXIS2_LIB/jaxrpc.jar:$AXIS2_LIB/saaj.jar:$AXIS2_LIB/log4j-1.2.8.jar:$AXIS2_LIB/wsdl4j-1.5.1.jar:$AXIS2_LIB/axis-ant.jar
export CLASSPATH=$AXIS2CLASSPATH:/opt/axis2/webapps/axis2-web:/opt/axis2/webapp/WEB-INF/classes
