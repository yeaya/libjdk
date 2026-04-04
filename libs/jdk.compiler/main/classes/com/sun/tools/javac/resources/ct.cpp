#include <com/sun/tools/javac/resources/ct.h>
#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace resources {

void ct::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* ct::getContents() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"apple.laf.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"apple.security.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.apple.eawt.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.apple.eawt.event.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.apple.eio.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.apple.laf.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.oracle.webservices.internal.api.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.oracle.webservices.internal.api.databinding.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.oracle.webservices.internal.api.message.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.oracle.webservices.internal.impl.encoding.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.oracle.webservices.internal.impl.internalspi.encoding.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.oracle.xmlns.internal.webservices.jaxws_databinding.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.accessibility.internal.resources.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"com.sun.activation.registries.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.awt.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"com.sun.beans.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"com.sun.beans.decoder.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.beans.editors.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.beans.finder.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.beans.infos.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.beans.introspect.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.beans.util.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.impl.activation.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.impl.copyobject.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.impl.corba.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.impl.dynamicany.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.impl.encoding.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.impl.interceptors.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.impl.io.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.impl.ior.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.impl.ior.iiop.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.impl.javax.rmi.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.impl.javax.rmi.CORBA.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.impl.legacy.connection.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.impl.logging.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.impl.monitoring.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.impl.naming.cosnaming.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.impl.naming.namingutil.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.impl.naming.pcosnaming.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.impl.oa.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.impl.oa.poa.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.impl.oa.toa.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.impl.orb.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.impl.orbutil.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.impl.orbutil.closure.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.impl.orbutil.concurrent.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.impl.orbutil.fsm.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.impl.orbutil.graph.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.impl.orbutil.threadpool.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.impl.presentation.rmi.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.impl.protocol.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.impl.protocol.giopmsgheaders.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.impl.resolver.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.impl.transport.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.impl.util.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.internal.CosNaming.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.internal.Interceptors.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.internal.POA.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.internal.corba.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.internal.iiop.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.org.omg.CORBA.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.pept.broker.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.pept.encoding.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.pept.protocol.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.pept.transport.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.spi.activation.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.spi.activation.InitialNameServicePackage.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.spi.activation.LocatorPackage.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.spi.activation.RepositoryPackage.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.spi.copyobject.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.spi.encoding.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.spi.extension.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.spi.ior.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.spi.ior.iiop.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.spi.legacy.connection.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.spi.legacy.interceptor.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.spi.logging.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.spi.monitoring.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.spi.oa.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.spi.orb.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.spi.orbutil.closure.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.spi.orbutil.fsm.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.spi.orbutil.proxy.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.spi.orbutil.threadpool.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.spi.presentation.rmi.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.spi.protocol.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.spi.resolver.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.spi.servicecontext.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.spi.transport.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"com.sun.demo.jvmti.hprof.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.imageio.plugins.bmp.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"com.sun.imageio.plugins.common.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"com.sun.imageio.plugins.gif.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"com.sun.imageio.plugins.jpeg.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"com.sun.imageio.plugins.png.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"com.sun.imageio.plugins.wbmp.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"com.sun.imageio.spi.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"com.sun.imageio.stream.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.istack.internal.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.istack.internal.localization.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.istack.internal.logging.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.java.swing.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"com.sun.java.swing.plaf.gtk.resources.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"com.sun.java.swing.plaf.motif.resources.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"com.sun.java.swing.plaf.nimbus.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"com.sun.java.swing.plaf.windows.resources.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"com.sun.java.util.jar.pack.*"_s,
			"proprietary compact1"_s
		}),
		$$new($ObjectArray, {
			"com.sun.java_cup.internal.runtime.*"_s,
			"proprietary compact2"_s
		}),
		$$new($ObjectArray, {
			"com.sun.jmx.defaults.*"_s,
			"proprietary compact3"_s
		}),
		$$new($ObjectArray, {
			"com.sun.jmx.interceptor.*"_s,
			"proprietary compact3"_s
		}),
		$$new($ObjectArray, {
			"com.sun.jmx.mbeanserver.*"_s,
			"proprietary compact3"_s
		}),
		$$new($ObjectArray, {
			"com.sun.jmx.remote.internal.*"_s,
			"proprietary compact3"_s
		}),
		$$new($ObjectArray, {
			"com.sun.jmx.remote.protocol.rmi.*"_s,
			"proprietary compact3"_s
		}),
		$$new($ObjectArray, {
			"com.sun.jmx.remote.security.*"_s,
			"proprietary compact3"_s
		}),
		$$new($ObjectArray, {
			"com.sun.jmx.remote.util.*"_s,
			"proprietary compact3"_s
		}),
		$$new($ObjectArray, {
			"com.sun.jndi.cosnaming.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"com.sun.jndi.dns.*"_s,
			"proprietary compact3"_s
		}),
		$$new($ObjectArray, {
			"com.sun.jndi.ldap.*"_s,
			"proprietary compact3"_s
		}),
		$$new($ObjectArray, {
			"com.sun.jndi.ldap.ext.*"_s,
			"proprietary compact3"_s
		}),
		$$new($ObjectArray, {
			"com.sun.jndi.ldap.pool.*"_s,
			"proprietary compact3"_s
		}),
		$$new($ObjectArray, {
			"com.sun.jndi.ldap.sasl.*"_s,
			"proprietary compact3"_s
		}),
		$$new($ObjectArray, {
			"com.sun.jndi.rmi.registry.*"_s,
			"proprietary compact3"_s
		}),
		$$new($ObjectArray, {
			"com.sun.jndi.toolkit.corba.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"com.sun.jndi.toolkit.ctx.*"_s,
			"proprietary compact3"_s
		}),
		$$new($ObjectArray, {
			"com.sun.jndi.toolkit.dir.*"_s,
			"proprietary compact3"_s
		}),
		$$new($ObjectArray, {
			"com.sun.jndi.toolkit.url.*"_s,
			"proprietary compact3"_s
		}),
		$$new($ObjectArray, {
			"com.sun.jndi.url.corbaname.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"com.sun.jndi.url.dns.*"_s,
			"proprietary compact3"_s
		}),
		$$new($ObjectArray, {
			"com.sun.jndi.url.iiop.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"com.sun.jndi.url.iiopname.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"com.sun.jndi.url.ldap.*"_s,
			"proprietary compact3"_s
		}),
		$$new($ObjectArray, {
			"com.sun.jndi.url.ldaps.*"_s,
			"proprietary compact3"_s
		}),
		$$new($ObjectArray, {
			"com.sun.jndi.url.rmi.*"_s,
			"proprietary compact3"_s
		}),
		$$new($ObjectArray, {
			"com.sun.management.*"_s,
			"compact3"_s
		}),
		$$new($ObjectArray, {
			"com.sun.media.sound.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"com.sun.naming.internal.*"_s,
			"proprietary compact3"_s
		}),
		$$new($ObjectArray, {
			"com.sun.net.httpserver.*"_s,
			"compact2"_s
		}),
		$$new($ObjectArray, {
			"com.sun.net.httpserver.spi.*"_s,
			"compact2"_s
		}),
		$$new($ObjectArray, {
			"com.sun.net.ssl.*"_s,
			"compact1"_s
		}),
		$$new($ObjectArray, {
			"com.sun.net.ssl.internal.www.protocol.https.*"_s,
			"proprietary compact1"_s
		}),
		$$new($ObjectArray, {
			"com.sun.nio.file.*"_s,
			"compact1"_s
		}),
		$$new($ObjectArray, {
			"com.sun.nio.sctp.*"_s,
			"compact3"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.bcel.internal.*"_s,
			"proprietary compact2"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.bcel.internal.classfile.*"_s,
			"proprietary compact2"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.bcel.internal.generic.*"_s,
			"proprietary compact2"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.bcel.internal.util.*"_s,
			"proprietary compact2"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.regexp.internal.*"_s,
			"proprietary compact2"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xalan.internal.*"_s,
			"proprietary compact2"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xalan.internal.extensions.*"_s,
			"proprietary compact2"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xalan.internal.lib.*"_s,
			"proprietary compact2"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xalan.internal.res.*"_s,
			"proprietary compact2"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xalan.internal.templates.*"_s,
			"proprietary compact2"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xalan.internal.utils.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xalan.internal.xslt.*"_s,
			"proprietary compact2"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xalan.internal.xsltc.*"_s,
			"proprietary compact2"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xalan.internal.xsltc.cmdline.*"_s,
			"proprietary compact2"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xalan.internal.xsltc.cmdline.getopt.*"_s,
			"proprietary compact2"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xalan.internal.xsltc.compiler.*"_s,
			"proprietary compact2"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xalan.internal.xsltc.compiler.util.*"_s,
			"proprietary compact2"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xalan.internal.xsltc.dom.*"_s,
			"proprietary compact2"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xalan.internal.xsltc.runtime.*"_s,
			"proprietary compact2"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xalan.internal.xsltc.runtime.output.*"_s,
			"proprietary compact2"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xalan.internal.xsltc.trax.*"_s,
			"proprietary compact2"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xalan.internal.xsltc.util.*"_s,
			"proprietary compact2"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xerces.internal.dom.*"_s,
			"proprietary compact2"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xerces.internal.dom.events.*"_s,
			"proprietary compact2"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xerces.internal.impl.*"_s,
			"proprietary compact2"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xerces.internal.impl.dtd.*"_s,
			"proprietary compact2"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xerces.internal.impl.dtd.models.*"_s,
			"proprietary compact2"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xerces.internal.impl.dv.*"_s,
			"proprietary compact2"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xerces.internal.impl.dv.dtd.*"_s,
			"proprietary compact2"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xerces.internal.impl.dv.util.*"_s,
			"proprietary compact2"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xerces.internal.impl.dv.xs.*"_s,
			"proprietary compact2"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xerces.internal.impl.io.*"_s,
			"proprietary compact2"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xerces.internal.impl.msg.*"_s,
			"proprietary compact2"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xerces.internal.impl.validation.*"_s,
			"proprietary compact2"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xerces.internal.impl.xpath.*"_s,
			"proprietary compact2"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xerces.internal.impl.xpath.regex.*"_s,
			"proprietary compact2"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xerces.internal.impl.xs.*"_s,
			"proprietary compact2"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xerces.internal.impl.xs.identity.*"_s,
			"proprietary compact2"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xerces.internal.impl.xs.models.*"_s,
			"proprietary compact2"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xerces.internal.impl.xs.opti.*"_s,
			"proprietary compact2"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xerces.internal.impl.xs.traversers.*"_s,
			"proprietary compact2"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xerces.internal.impl.xs.util.*"_s,
			"proprietary compact2"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xerces.internal.jaxp.*"_s,
			"proprietary compact2"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xerces.internal.jaxp.datatype.*"_s,
			"proprietary compact2"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xerces.internal.jaxp.validation.*"_s,
			"proprietary compact2"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xerces.internal.parsers.*"_s,
			"proprietary compact2"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xerces.internal.util.*"_s,
			"proprietary compact2"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xerces.internal.utils.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xerces.internal.xinclude.*"_s,
			"proprietary compact2"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xerces.internal.xni.*"_s,
			"proprietary compact2"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xerces.internal.xni.grammars.*"_s,
			"proprietary compact2"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xerces.internal.xni.parser.*"_s,
			"proprietary compact2"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xerces.internal.xpointer.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xerces.internal.xs.*"_s,
			"proprietary compact2"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xerces.internal.xs.datatypes.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xml.internal.dtm.*"_s,
			"proprietary compact2"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xml.internal.dtm.ref.*"_s,
			"proprietary compact2"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xml.internal.dtm.ref.dom2dtm.*"_s,
			"proprietary compact2"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.*"_s,
			"proprietary compact2"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xml.internal.res.*"_s,
			"proprietary compact2"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xml.internal.resolver.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xml.internal.resolver.helpers.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xml.internal.resolver.readers.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xml.internal.resolver.tools.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xml.internal.security.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xml.internal.security.algorithms.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xml.internal.security.algorithms.implementations.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xml.internal.security.c14n.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xml.internal.security.c14n.helper.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xml.internal.security.c14n.implementations.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xml.internal.security.encryption.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xml.internal.security.exceptions.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xml.internal.security.keys.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xml.internal.security.keys.content.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xml.internal.security.keys.content.keyvalues.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xml.internal.security.keys.content.x509.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xml.internal.security.keys.keyresolver.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xml.internal.security.keys.keyresolver.implementations.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xml.internal.security.keys.storage.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xml.internal.security.keys.storage.implementations.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xml.internal.security.signature.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xml.internal.security.signature.reference.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xml.internal.security.transforms.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xml.internal.security.transforms.implementations.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xml.internal.security.transforms.params.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xml.internal.security.utils.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xml.internal.security.utils.resolver.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xml.internal.security.utils.resolver.implementations.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xml.internal.serialize.*"_s,
			"proprietary compact2"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xml.internal.serializer.*"_s,
			"proprietary compact2"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xml.internal.serializer.dom3.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xml.internal.serializer.utils.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xml.internal.utils.*"_s,
			"proprietary compact2"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xml.internal.utils.res.*"_s,
			"proprietary compact2"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xpath.internal.*"_s,
			"proprietary compact2"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xpath.internal.axes.*"_s,
			"proprietary compact2"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xpath.internal.compiler.*"_s,
			"proprietary compact2"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xpath.internal.domapi.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xpath.internal.functions.*"_s,
			"proprietary compact2"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xpath.internal.jaxp.*"_s,
			"proprietary compact2"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xpath.internal.objects.*"_s,
			"proprietary compact2"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xpath.internal.operations.*"_s,
			"proprietary compact2"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xpath.internal.patterns.*"_s,
			"proprietary compact2"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xpath.internal.res.*"_s,
			"proprietary compact2"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.glassfish.external.amx.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.glassfish.external.arc.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.glassfish.external.probe.provider.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.glassfish.external.probe.provider.annotations.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.glassfish.external.statistics.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.glassfish.external.statistics.annotations.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.glassfish.external.statistics.impl.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.glassfish.gmbal.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.glassfish.gmbal.util.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.omg.CORBA.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.omg.CORBA.ValueDefPackage.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.omg.CORBA.portable.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.omg.SendingContext.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.omg.SendingContext.CodeBasePackage.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"com.sun.rmi.rmid.*"_s,
			"proprietary compact2"_s
		}),
		$$new($ObjectArray, {
			"com.sun.rowset.*"_s,
			"proprietary compact3"_s
		}),
		$$new($ObjectArray, {
			"com.sun.rowset.internal.*"_s,
			"proprietary compact3"_s
		}),
		$$new($ObjectArray, {
			"com.sun.rowset.providers.*"_s,
			"proprietary compact3"_s
		}),
		$$new($ObjectArray, {
			"com.sun.security.auth.*"_s,
			"compact3"_s
		}),
		$$new($ObjectArray, {
			"com.sun.security.auth.callback.*"_s,
			"compact3"_s
		}),
		$$new($ObjectArray, {
			"com.sun.security.auth.login.*"_s,
			"compact3"_s
		}),
		$$new($ObjectArray, {
			"com.sun.security.auth.module.*"_s,
			"compact3"_s
		}),
		$$new($ObjectArray, {
			"com.sun.security.cert.internal.x509.*"_s,
			"proprietary compact1"_s
		}),
		$$new($ObjectArray, {
			"com.sun.security.jgss.*"_s,
			"compact3"_s
		}),
		$$new($ObjectArray, {
			"com.sun.security.ntlm.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.security.sasl.*"_s,
			"proprietary compact3"_s
		}),
		$$new($ObjectArray, {
			"com.sun.security.sasl.digest.*"_s,
			"proprietary compact3"_s
		}),
		$$new($ObjectArray, {
			"com.sun.security.sasl.gsskerb.*"_s,
			"proprietary compact3"_s
		}),
		$$new($ObjectArray, {
			"com.sun.security.sasl.ntlm.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.security.sasl.util.*"_s,
			"proprietary compact3"_s
		}),
		$$new($ObjectArray, {
			"com.sun.swing.internal.plaf.basic.resources.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"com.sun.swing.internal.plaf.metal.resources.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"com.sun.swing.internal.plaf.synth.resources.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"com.sun.tracing.*"_s,
			"proprietary compact3"_s
		}),
		$$new($ObjectArray, {
			"com.sun.tracing.dtrace.*"_s,
			"proprietary compact3"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.bind.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.bind.annotation.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.bind.api.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.bind.api.impl.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.bind.marshaller.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.bind.unmarshaller.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.bind.util.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.bind.v2.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.bind.v2.bytecode.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.bind.v2.model.annotation.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.bind.v2.model.core.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.bind.v2.model.impl.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.bind.v2.model.nav.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.bind.v2.model.runtime.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.bind.v2.model.util.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.bind.v2.runtime.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.bind.v2.runtime.output.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.bind.v2.runtime.property.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.bind.v2.runtime.reflect.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.bind.v2.runtime.reflect.opt.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.bind.v2.runtime.unmarshaller.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.bind.v2.schemagen.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.bind.v2.schemagen.episode.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.bind.v2.schemagen.xmlschema.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.bind.v2.util.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.fastinfoset.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.fastinfoset.algorithm.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.fastinfoset.alphabet.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.fastinfoset.dom.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.fastinfoset.org.apache.xerces.util.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.fastinfoset.sax.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.fastinfoset.stax.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.fastinfoset.stax.events.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.fastinfoset.stax.factory.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.fastinfoset.stax.util.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.fastinfoset.tools.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.fastinfoset.util.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.fastinfoset.vocab.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.messaging.saaj.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.messaging.saaj.client.p2p.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.messaging.saaj.packaging.mime.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.messaging.saaj.packaging.mime.internet.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.messaging.saaj.packaging.mime.util.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.messaging.saaj.soap.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.messaging.saaj.soap.dynamic.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.messaging.saaj.soap.impl.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.messaging.saaj.soap.name.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.messaging.saaj.soap.ver1_1.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.messaging.saaj.soap.ver1_2.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.messaging.saaj.util.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.messaging.saaj.util.stax.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.messaging.saaj.util.transform.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.org.jvnet.fastinfoset.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.org.jvnet.fastinfoset.sax.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.org.jvnet.fastinfoset.sax.helpers.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.org.jvnet.fastinfoset.stax.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.org.jvnet.mimepull.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.org.jvnet.staxex.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.org.jvnet.staxex.util.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.stream.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.stream.buffer.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.stream.buffer.sax.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.stream.buffer.stax.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.stream.dtd.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.stream.dtd.nonvalidating.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.stream.events.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.stream.util.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.stream.writers.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.txw2.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.txw2.annotation.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.txw2.output.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.ws.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.ws.addressing.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.ws.addressing.model.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.ws.addressing.policy.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.ws.addressing.v200408.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.ws.api.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.ws.api.addressing.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.ws.api.client.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.ws.api.config.management.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.ws.api.config.management.policy.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.ws.api.databinding.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.ws.api.fastinfoset.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.ws.api.ha.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.ws.api.handler.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.ws.api.message.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.ws.api.message.saaj.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.ws.api.message.stream.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.ws.api.model.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.ws.api.model.soap.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.ws.api.model.wsdl.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.ws.api.model.wsdl.editable.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.ws.api.pipe.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.ws.api.pipe.helper.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.ws.api.policy.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.ws.api.policy.subject.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.ws.api.server.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.ws.api.streaming.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.ws.api.wsdl.parser.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.ws.api.wsdl.writer.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.ws.assembler.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.ws.assembler.dev.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.ws.assembler.jaxws.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.ws.binding.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.ws.client.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.ws.client.dispatch.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.ws.client.sei.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.ws.commons.xmlutil.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.ws.config.management.policy.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.ws.config.metro.dev.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.ws.config.metro.util.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.ws.db.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.ws.db.glassfish.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.ws.developer.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.ws.dump.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.ws.encoding.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.ws.encoding.fastinfoset.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.ws.encoding.policy.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.ws.encoding.soap.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.ws.encoding.soap.streaming.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.ws.encoding.xml.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.ws.fault.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.ws.handler.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.ws.message.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.ws.message.jaxb.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.ws.message.saaj.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.ws.message.source.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.ws.message.stream.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.ws.model.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.ws.model.soap.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.ws.model.wsdl.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.ws.org.objectweb.asm.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.ws.policy.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.ws.policy.jaxws.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.ws.policy.jaxws.spi.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.ws.policy.privateutil.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.ws.policy.sourcemodel.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.ws.policy.sourcemodel.attach.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.ws.policy.sourcemodel.wspolicy.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.ws.policy.spi.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.ws.policy.subject.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.ws.protocol.soap.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.ws.protocol.xml.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.ws.resources.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.ws.runtime.config.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.ws.server.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.ws.server.provider.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.ws.server.sei.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.ws.spi.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.ws.spi.db.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.ws.streaming.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.ws.transport.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.ws.transport.http.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.ws.transport.http.client.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.ws.transport.http.server.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.ws.util.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.ws.util.exception.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.ws.util.pipe.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.ws.util.xml.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.ws.wsdl.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.ws.wsdl.parser.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.ws.wsdl.writer.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.ws.wsdl.writer.document.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.ws.wsdl.writer.document.http.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.ws.wsdl.writer.document.soap.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.ws.wsdl.writer.document.soap12.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"com.sun.xml.internal.ws.wsdl.writer.document.xsd.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"java.awt.dnd.peer.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"java.awt.peer.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"java.desktop.macosx.classes.com.apple.laf.resources.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"java.desktop.macosx.classes.sun.awt.resources.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"java.desktop.windows.classes.sun.awt.windows.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"java.io.*"_s,
			"compact1"_s
		}),
		$$new($ObjectArray, {
			"java.lang.*"_s,
			"compact1"_s
		}),
		$$new($ObjectArray, {
			"java.lang.annotation.*"_s,
			"compact1"_s
		}),
		$$new($ObjectArray, {
			"java.lang.instrument.*"_s,
			"compact3"_s
		}),
		$$new($ObjectArray, {
			"java.lang.invoke.*"_s,
			"compact1"_s
		}),
		$$new($ObjectArray, {
			"java.lang.management.*"_s,
			"compact3"_s
		}),
		$$new($ObjectArray, {
			"java.lang.ref.*"_s,
			"compact1"_s
		}),
		$$new($ObjectArray, {
			"java.lang.reflect.*"_s,
			"compact1"_s
		}),
		$$new($ObjectArray, {
			"java.math.*"_s,
			"compact1"_s
		}),
		$$new($ObjectArray, {
			"java.net.*"_s,
			"compact1"_s
		}),
		$$new($ObjectArray, {
			"java.nio.*"_s,
			"compact1"_s
		}),
		$$new($ObjectArray, {
			"java.nio.channels.*"_s,
			"compact1"_s
		}),
		$$new($ObjectArray, {
			"java.nio.channels.spi.*"_s,
			"compact1"_s
		}),
		$$new($ObjectArray, {
			"java.nio.charset.*"_s,
			"compact1"_s
		}),
		$$new($ObjectArray, {
			"java.nio.charset.spi.*"_s,
			"compact1"_s
		}),
		$$new($ObjectArray, {
			"java.nio.file.*"_s,
			"compact1"_s
		}),
		$$new($ObjectArray, {
			"java.nio.file.attribute.*"_s,
			"compact1"_s
		}),
		$$new($ObjectArray, {
			"java.nio.file.spi.*"_s,
			"compact1"_s
		}),
		$$new($ObjectArray, {
			"java.rmi.*"_s,
			"compact2"_s
		}),
		$$new($ObjectArray, {
			"java.rmi.activation.*"_s,
			"compact2"_s
		}),
		$$new($ObjectArray, {
			"java.rmi.dgc.*"_s,
			"compact2"_s
		}),
		$$new($ObjectArray, {
			"java.rmi.registry.*"_s,
			"compact2"_s
		}),
		$$new($ObjectArray, {
			"java.rmi.server.*"_s,
			"compact2"_s
		}),
		$$new($ObjectArray, {
			"java.security.*"_s,
			"compact1"_s
		}),
		$$new($ObjectArray, {
			"java.security.cert.*"_s,
			"compact1"_s
		}),
		$$new($ObjectArray, {
			"java.security.interfaces.*"_s,
			"compact1"_s
		}),
		$$new($ObjectArray, {
			"java.security.spec.*"_s,
			"compact1"_s
		}),
		$$new($ObjectArray, {
			"java.sql.*"_s,
			"compact2"_s
		}),
		$$new($ObjectArray, {
			"java.text.*"_s,
			"compact1"_s
		}),
		$$new($ObjectArray, {
			"java.text.spi.*"_s,
			"compact1"_s
		}),
		$$new($ObjectArray, {
			"java.time.*"_s,
			"compact1"_s
		}),
		$$new($ObjectArray, {
			"java.time.chrono.*"_s,
			"compact1"_s
		}),
		$$new($ObjectArray, {
			"java.time.format.*"_s,
			"compact1"_s
		}),
		$$new($ObjectArray, {
			"java.time.temporal.*"_s,
			"compact1"_s
		}),
		$$new($ObjectArray, {
			"java.time.zone.*"_s,
			"compact1"_s
		}),
		$$new($ObjectArray, {
			"java.util.*"_s,
			"compact1"_s
		}),
		$$new($ObjectArray, {
			"java.util.concurrent.*"_s,
			"compact1"_s
		}),
		$$new($ObjectArray, {
			"java.util.concurrent.atomic.*"_s,
			"compact1"_s
		}),
		$$new($ObjectArray, {
			"java.util.concurrent.locks.*"_s,
			"compact1"_s
		}),
		$$new($ObjectArray, {
			"java.util.function.*"_s,
			"compact1"_s
		}),
		$$new($ObjectArray, {
			"java.util.jar.*"_s,
			"compact1"_s
		}),
		$$new($ObjectArray, {
			"java.util.logging.*"_s,
			"compact1"_s
		}),
		$$new($ObjectArray, {
			"java.util.prefs.*"_s,
			"compact3"_s
		}),
		$$new($ObjectArray, {
			"java.util.regex.*"_s,
			"compact1"_s
		}),
		$$new($ObjectArray, {
			"java.util.spi.*"_s,
			"compact1"_s
		}),
		$$new($ObjectArray, {
			"java.util.stream.*"_s,
			"compact1"_s
		}),
		$$new($ObjectArray, {
			"java.util.zip.*"_s,
			"compact1"_s
		}),
		$$new($ObjectArray, {
			"javax.annotation.processing.*"_s,
			"compact3"_s
		}),
		$$new($ObjectArray, {
			"javax.lang.model.*"_s,
			"compact3"_s
		}),
		$$new($ObjectArray, {
			"javax.lang.model.element.*"_s,
			"compact3"_s
		}),
		$$new($ObjectArray, {
			"javax.lang.model.type.*"_s,
			"compact3"_s
		}),
		$$new($ObjectArray, {
			"javax.lang.model.util.*"_s,
			"compact3"_s
		}),
		$$new($ObjectArray, {
			"javax.management.*"_s,
			"compact3"_s
		}),
		$$new($ObjectArray, {
			"javax.management.loading.*"_s,
			"compact3"_s
		}),
		$$new($ObjectArray, {
			"javax.management.modelmbean.*"_s,
			"compact3"_s
		}),
		$$new($ObjectArray, {
			"javax.management.monitor.*"_s,
			"compact3"_s
		}),
		$$new($ObjectArray, {
			"javax.management.openmbean.*"_s,
			"compact3"_s
		}),
		$$new($ObjectArray, {
			"javax.management.relation.*"_s,
			"compact3"_s
		}),
		$$new($ObjectArray, {
			"javax.management.remote.*"_s,
			"compact3"_s
		}),
		$$new($ObjectArray, {
			"javax.management.remote.rmi.*"_s,
			"compact3"_s
		}),
		$$new($ObjectArray, {
			"javax.management.timer.*"_s,
			"compact3"_s
		}),
		$$new($ObjectArray, {
			"javax.naming.*"_s,
			"compact3"_s
		}),
		$$new($ObjectArray, {
			"javax.naming.directory.*"_s,
			"compact3"_s
		}),
		$$new($ObjectArray, {
			"javax.naming.event.*"_s,
			"compact3"_s
		}),
		$$new($ObjectArray, {
			"javax.naming.ldap.*"_s,
			"compact3"_s
		}),
		$$new($ObjectArray, {
			"javax.naming.spi.*"_s,
			"compact3"_s
		}),
		$$new($ObjectArray, {
			"javax.net.*"_s,
			"compact1"_s
		}),
		$$new($ObjectArray, {
			"javax.net.ssl.*"_s,
			"compact1"_s
		}),
		$$new($ObjectArray, {
			"javax.rmi.ssl.*"_s,
			"compact2"_s
		}),
		$$new($ObjectArray, {
			"javax.script.*"_s,
			"compact1"_s
		}),
		$$new($ObjectArray, {
			"javax.security.auth.*"_s,
			"compact1"_s
		}),
		$$new($ObjectArray, {
			"javax.security.auth.callback.*"_s,
			"compact1"_s
		}),
		$$new($ObjectArray, {
			"javax.security.auth.kerberos.*"_s,
			"compact3"_s
		}),
		$$new($ObjectArray, {
			"javax.security.auth.login.*"_s,
			"compact1"_s
		}),
		$$new($ObjectArray, {
			"javax.security.auth.spi.*"_s,
			"compact1"_s
		}),
		$$new($ObjectArray, {
			"javax.security.auth.x500.*"_s,
			"compact1"_s
		}),
		$$new($ObjectArray, {
			"javax.security.cert.*"_s,
			"compact1"_s
		}),
		$$new($ObjectArray, {
			"javax.security.sasl.*"_s,
			"compact3"_s
		}),
		$$new($ObjectArray, {
			"javax.smartcardio.*"_s,
			"compact3"_s
		}),
		$$new($ObjectArray, {
			"javax.sql.*"_s,
			"compact2"_s
		}),
		$$new($ObjectArray, {
			"javax.sql.rowset.*"_s,
			"compact3"_s
		}),
		$$new($ObjectArray, {
			"javax.sql.rowset.serial.*"_s,
			"compact3"_s
		}),
		$$new($ObjectArray, {
			"javax.sql.rowset.spi.*"_s,
			"compact3"_s
		}),
		$$new($ObjectArray, {
			"javax.tools.*"_s,
			"compact3"_s
		}),
		$$new($ObjectArray, {
			"javax.transaction.xa.*"_s,
			"compact2"_s
		}),
		$$new($ObjectArray, {
			"javax.xml.*"_s,
			"compact2"_s
		}),
		$$new($ObjectArray, {
			"javax.xml.crypto.*"_s,
			"compact3"_s
		}),
		$$new($ObjectArray, {
			"javax.xml.crypto.dom.*"_s,
			"compact3"_s
		}),
		$$new($ObjectArray, {
			"javax.xml.crypto.dsig.*"_s,
			"compact3"_s
		}),
		$$new($ObjectArray, {
			"javax.xml.crypto.dsig.dom.*"_s,
			"compact3"_s
		}),
		$$new($ObjectArray, {
			"javax.xml.crypto.dsig.keyinfo.*"_s,
			"compact3"_s
		}),
		$$new($ObjectArray, {
			"javax.xml.crypto.dsig.spec.*"_s,
			"compact3"_s
		}),
		$$new($ObjectArray, {
			"javax.xml.datatype.*"_s,
			"compact2"_s
		}),
		$$new($ObjectArray, {
			"javax.xml.namespace.*"_s,
			"compact2"_s
		}),
		$$new($ObjectArray, {
			"javax.xml.parsers.*"_s,
			"compact2"_s
		}),
		$$new($ObjectArray, {
			"javax.xml.stream.*"_s,
			"compact2"_s
		}),
		$$new($ObjectArray, {
			"javax.xml.stream.events.*"_s,
			"compact2"_s
		}),
		$$new($ObjectArray, {
			"javax.xml.stream.util.*"_s,
			"compact2"_s
		}),
		$$new($ObjectArray, {
			"javax.xml.transform.*"_s,
			"compact2"_s
		}),
		$$new($ObjectArray, {
			"javax.xml.transform.dom.*"_s,
			"compact2"_s
		}),
		$$new($ObjectArray, {
			"javax.xml.transform.sax.*"_s,
			"compact2"_s
		}),
		$$new($ObjectArray, {
			"javax.xml.transform.stax.*"_s,
			"compact2"_s
		}),
		$$new($ObjectArray, {
			"javax.xml.transform.stream.*"_s,
			"compact2"_s
		}),
		$$new($ObjectArray, {
			"javax.xml.validation.*"_s,
			"compact2"_s
		}),
		$$new($ObjectArray, {
			"javax.xml.xpath.*"_s,
			"compact2"_s
		}),
		$$new($ObjectArray, {
			"jdk.*"_s,
			"compact1"_s
		}),
		$$new($ObjectArray, {
			"jdk.internal.org.objectweb.asm.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"jdk.internal.org.objectweb.asm.commons.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"jdk.internal.org.objectweb.asm.signature.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"jdk.internal.org.objectweb.asm.tree.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"jdk.internal.org.objectweb.asm.tree.analysis.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"jdk.internal.org.objectweb.asm.util.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"jdk.internal.org.xml.sax.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"jdk.internal.org.xml.sax.helpers.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"jdk.internal.util.xml.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"jdk.internal.util.xml.impl.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"jdk.net.*"_s,
			"compact1"_s
		}),
		$$new($ObjectArray, {
			"org.ietf.jgss.*"_s,
			"compact3"_s
		}),
		$$new($ObjectArray, {
			"org.jcp.xml.dsig.internal.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"org.jcp.xml.dsig.internal.dom.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"org.w3c.dom.*"_s,
			"compact2"_s
		}),
		$$new($ObjectArray, {
			"org.w3c.dom.bootstrap.*"_s,
			"compact2"_s
		}),
		$$new($ObjectArray, {
			"org.w3c.dom.css.*"_s,
			"compact2"_s
		}),
		$$new($ObjectArray, {
			"org.w3c.dom.events.*"_s,
			"compact2"_s
		}),
		$$new($ObjectArray, {
			"org.w3c.dom.html.*"_s,
			"compact2"_s
		}),
		$$new($ObjectArray, {
			"org.w3c.dom.ls.*"_s,
			"compact2"_s
		}),
		$$new($ObjectArray, {
			"org.w3c.dom.ranges.*"_s,
			"compact2"_s
		}),
		$$new($ObjectArray, {
			"org.w3c.dom.stylesheets.*"_s,
			"compact2"_s
		}),
		$$new($ObjectArray, {
			"org.w3c.dom.traversal.*"_s,
			"compact2"_s
		}),
		$$new($ObjectArray, {
			"org.w3c.dom.views.*"_s,
			"compact2"_s
		}),
		$$new($ObjectArray, {
			"org.w3c.dom.xpath.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"org.xml.sax.*"_s,
			"compact2"_s
		}),
		$$new($ObjectArray, {
			"org.xml.sax.ext.*"_s,
			"compact2"_s
		}),
		$$new($ObjectArray, {
			"org.xml.sax.helpers.*"_s,
			"compact2"_s
		}),
		$$new($ObjectArray, {
			"sun.applet.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"sun.applet.resources.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"sun.awt.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"sun.awt.X11.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"sun.awt.datatransfer.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"sun.awt.dnd.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"sun.awt.event.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"sun.awt.geom.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"sun.awt.im.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"sun.awt.image.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"sun.awt.motif.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"sun.awt.resources.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"sun.awt.shell.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"sun.awt.util.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"sun.awt.windows.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"sun.corba.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"sun.datatransfer.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"sun.font.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"sun.instrument.*"_s,
			"proprietary compact3"_s
		}),
		$$new($ObjectArray, {
			"sun.invoke.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"sun.invoke.anon.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"sun.invoke.empty.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"sun.invoke.util.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"sun.io.*"_s,
			"proprietary compact1"_s
		}),
		$$new($ObjectArray, {
			"sun.java2d.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"sun.java2d.cmm.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"sun.java2d.cmm.lcms.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"sun.java2d.d3d.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"sun.java2d.jules.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"sun.java2d.loops.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"sun.java2d.opengl.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"sun.java2d.pipe.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"sun.java2d.pipe.hw.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"sun.java2d.pisces.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"sun.java2d.windows.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"sun.java2d.x11.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"sun.java2d.xr.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"sun.launcher.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"sun.launcher.resources.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"sun.lwawt.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"sun.lwawt.macosx.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"sun.management.*"_s,
			"proprietary compact3"_s
		}),
		$$new($ObjectArray, {
			"sun.management.counter.*"_s,
			"proprietary compact3"_s
		}),
		$$new($ObjectArray, {
			"sun.management.counter.perf.*"_s,
			"proprietary compact3"_s
		}),
		$$new($ObjectArray, {
			"sun.management.jdp.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"sun.management.jmxremote.*"_s,
			"proprietary compact3"_s
		}),
		$$new($ObjectArray, {
			"sun.management.resources.*"_s,
			"proprietary compact3"_s
		}),
		$$new($ObjectArray, {
			"sun.misc.*"_s,
			"proprietary compact1"_s
		}),
		$$new($ObjectArray, {
			"sun.misc.resources.*"_s,
			"proprietary compact1"_s
		}),
		$$new($ObjectArray, {
			"sun.net.*"_s,
			"proprietary compact1"_s
		}),
		$$new($ObjectArray, {
			"sun.net.dns.*"_s,
			"proprietary compact3"_s
		}),
		$$new($ObjectArray, {
			"sun.net.ftp.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"sun.net.ftp.impl.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"sun.net.httpserver.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"sun.net.idn.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"sun.net.sdp.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"sun.net.smtp.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"sun.net.spi.*"_s,
			"proprietary compact1"_s
		}),
		$$new($ObjectArray, {
			"sun.net.spi.nameservice.*"_s,
			"proprietary compact1"_s
		}),
		$$new($ObjectArray, {
			"sun.net.util.*"_s,
			"proprietary compact1"_s
		}),
		$$new($ObjectArray, {
			"sun.net.www.*"_s,
			"proprietary compact1"_s
		}),
		$$new($ObjectArray, {
			"sun.net.www.content.audio.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"sun.net.www.content.image.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"sun.net.www.content.text.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"sun.net.www.http.*"_s,
			"proprietary compact1"_s
		}),
		$$new($ObjectArray, {
			"sun.net.www.protocol.file.*"_s,
			"proprietary compact1"_s
		}),
		$$new($ObjectArray, {
			"sun.net.www.protocol.ftp.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"sun.net.www.protocol.http.*"_s,
			"proprietary compact1"_s
		}),
		$$new($ObjectArray, {
			"sun.net.www.protocol.http.logging.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"sun.net.www.protocol.http.ntlm.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"sun.net.www.protocol.http.spnego.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"sun.net.www.protocol.https.*"_s,
			"proprietary compact1"_s
		}),
		$$new($ObjectArray, {
			"sun.net.www.protocol.jar.*"_s,
			"proprietary compact1"_s
		}),
		$$new($ObjectArray, {
			"sun.net.www.protocol.mailto.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"sun.net.www.protocol.netdoc.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"sun.nio.*"_s,
			"proprietary compact1"_s
		}),
		$$new($ObjectArray, {
			"sun.nio.ch.*"_s,
			"proprietary compact1"_s
		}),
		$$new($ObjectArray, {
			"sun.nio.ch.sctp.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"sun.nio.cs.*"_s,
			"proprietary compact1"_s
		}),
		$$new($ObjectArray, {
			"sun.nio.fs.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"sun.print.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"sun.print.resources.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"sun.reflect.*"_s,
			"proprietary compact1"_s
		}),
		$$new($ObjectArray, {
			"sun.reflect.annotation.*"_s,
			"proprietary compact1"_s
		}),
		$$new($ObjectArray, {
			"sun.reflect.generics.factory.*"_s,
			"proprietary compact1"_s
		}),
		$$new($ObjectArray, {
			"sun.reflect.generics.parser.*"_s,
			"proprietary compact1"_s
		}),
		$$new($ObjectArray, {
			"sun.reflect.generics.reflectiveObjects.*"_s,
			"proprietary compact1"_s
		}),
		$$new($ObjectArray, {
			"sun.reflect.generics.repository.*"_s,
			"proprietary compact1"_s
		}),
		$$new($ObjectArray, {
			"sun.reflect.generics.scope.*"_s,
			"proprietary compact1"_s
		}),
		$$new($ObjectArray, {
			"sun.reflect.generics.tree.*"_s,
			"proprietary compact1"_s
		}),
		$$new($ObjectArray, {
			"sun.reflect.generics.visitor.*"_s,
			"proprietary compact1"_s
		}),
		$$new($ObjectArray, {
			"sun.reflect.misc.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"sun.rmi.log.*"_s,
			"proprietary compact2"_s
		}),
		$$new($ObjectArray, {
			"sun.rmi.registry.*"_s,
			"proprietary compact2"_s
		}),
		$$new($ObjectArray, {
			"sun.rmi.runtime.*"_s,
			"proprietary compact2"_s
		}),
		$$new($ObjectArray, {
			"sun.rmi.server.*"_s,
			"proprietary compact2"_s
		}),
		$$new($ObjectArray, {
			"sun.rmi.transport.*"_s,
			"proprietary compact2"_s
		}),
		$$new($ObjectArray, {
			"sun.rmi.transport.proxy.*"_s,
			"proprietary compact2"_s
		}),
		$$new($ObjectArray, {
			"sun.rmi.transport.tcp.*"_s,
			"proprietary compact2"_s
		}),
		$$new($ObjectArray, {
			"sun.security.action.*"_s,
			"proprietary compact1"_s
		}),
		$$new($ObjectArray, {
			"sun.security.jca.*"_s,
			"proprietary compact1"_s
		}),
		$$new($ObjectArray, {
			"sun.security.jgss.*"_s,
			"proprietary compact3"_s
		}),
		$$new($ObjectArray, {
			"sun.security.jgss.krb5.*"_s,
			"proprietary compact3"_s
		}),
		$$new($ObjectArray, {
			"sun.security.jgss.spi.*"_s,
			"proprietary compact3"_s
		}),
		$$new($ObjectArray, {
			"sun.security.jgss.spnego.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"sun.security.jgss.wrapper.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"sun.security.krb5.*"_s,
			"proprietary compact3"_s
		}),
		$$new($ObjectArray, {
			"sun.security.krb5.internal.*"_s,
			"proprietary compact3"_s
		}),
		$$new($ObjectArray, {
			"sun.security.krb5.internal.ccache.*"_s,
			"proprietary compact3"_s
		}),
		$$new($ObjectArray, {
			"sun.security.krb5.internal.crypto.*"_s,
			"proprietary compact3"_s
		}),
		$$new($ObjectArray, {
			"sun.security.krb5.internal.crypto.dk.*"_s,
			"proprietary compact3"_s
		}),
		$$new($ObjectArray, {
			"sun.security.krb5.internal.ktab.*"_s,
			"proprietary compact3"_s
		}),
		$$new($ObjectArray, {
			"sun.security.krb5.internal.rcache.*"_s,
			"proprietary compact3"_s
		}),
		$$new($ObjectArray, {
			"sun.security.krb5.internal.tools.*"_s,
			"proprietary compact3"_s
		}),
		$$new($ObjectArray, {
			"sun.security.krb5.internal.util.*"_s,
			"proprietary compact3"_s
		}),
		$$new($ObjectArray, {
			"sun.security.pkcs.*"_s,
			"proprietary compact1"_s
		}),
		$$new($ObjectArray, {
			"sun.security.pkcs10.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"sun.security.pkcs12.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"sun.security.provider.*"_s,
			"proprietary compact1"_s
		}),
		$$new($ObjectArray, {
			"sun.security.provider.certpath.*"_s,
			"proprietary compact1"_s
		}),
		$$new($ObjectArray, {
			"sun.security.provider.certpath.ldap.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"sun.security.provider.certpath.ssl.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"sun.security.rsa.*"_s,
			"proprietary compact1"_s
		}),
		$$new($ObjectArray, {
			"sun.security.smartcardio.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"sun.security.timestamp.*"_s,
			"proprietary compact1"_s
		}),
		$$new($ObjectArray, {
			"sun.security.tools.*"_s,
			"proprietary compact1"_s
		}),
		$$new($ObjectArray, {
			"sun.security.tools.keytool.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"sun.security.tools.policytool.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"sun.security.util.*"_s,
			"proprietary compact1"_s
		}),
		$$new($ObjectArray, {
			"sun.security.validator.*"_s,
			"proprietary compact1"_s
		}),
		$$new($ObjectArray, {
			"sun.security.x509.*"_s,
			"proprietary compact1"_s
		}),
		$$new($ObjectArray, {
			"sun.swing.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"sun.swing.icon.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"sun.swing.plaf.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"sun.swing.plaf.synth.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"sun.swing.plaf.windows.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"sun.swing.table.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"sun.swing.text.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"sun.swing.text.html.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"sun.text.*"_s,
			"proprietary compact1"_s
		}),
		$$new($ObjectArray, {
			"sun.text.bidi.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"sun.text.normalizer.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"sun.text.resources.*"_s,
			"proprietary compact1"_s
		}),
		$$new($ObjectArray, {
			"sun.text.resources.en.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"sun.tools.jar.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"sun.tools.jar.resources.*"_s,
			"proprietary"_s
		}),
		$$new($ObjectArray, {
			"sun.tracing.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"sun.tracing.dtrace.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"sun.util.*"_s,
			"proprietary compact1"_s
		}),
		$$new($ObjectArray, {
			"sun.util.calendar.*"_s,
			"proprietary compact1"_s
		}),
		$$new($ObjectArray, {
			"sun.util.cldr.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"sun.util.locale.*"_s,
			"proprietary compact1"_s
		}),
		$$new($ObjectArray, {
			"sun.util.locale.provider.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"sun.util.logging.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"sun.util.logging.resources.*"_s,
			"proprietary compact1"_s
		}),
		$$new($ObjectArray, {
			"sun.util.resources.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"sun.util.resources.en.*"_s,
			"hidden"_s
		}),
		$$new($ObjectArray, {
			"sun.util.spi.*"_s,
			"hidden"_s
		})
	});
}

ct::ct() {
}

$Class* ct::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ct, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(ct, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.tools.javac.resources.ct",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ct, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ct);
	});
	return class$;
}

$Class* ct::class$ = nullptr;

				} // resources
			} // javac
		} // tools
	} // sun
} // com