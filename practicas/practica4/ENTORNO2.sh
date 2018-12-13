#!/bin/bash
export JAVA_HOME=/usr/lib/jvm/java-8-openjdk-amd64

export AXIS_HOME=/opt/tomcat/apache-tomcat-9.0.13/webapps/axis/WEB-INF
export AXIS_LIB=$AXIS_HOME/lib
export AXISCLASSPATH=$AXIS_LIB/axis.jar:$AXIS_LIB/commons-discovery-0.2.jar:$AXIS_LIB/commons-logging-1.0.4.jar:$AXIS_LIB/jaxrpc.jar:$AXIS_LIB/saaj.jar:$AXIS_LIB/log4j-1.2.8.jar:$AXIS_LIB/wsdl4j-1.5.1.jar:$AXIS_LIB/axis-ant.jar
export CLASSPATH=$AXISCLASSPATH:/opt/tomcat/apache-tomcat-9.0.13/webapps/axis:/opt/tomcat/apache-tomcat-9.0.13/webapps/axis/WEB-INF/classes
