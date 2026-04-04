#include <com/sun/tools/javac/resources/legacy.h>
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

void legacy::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* legacy::getContents() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"com.sun.accessibility.internal.resources"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.awt"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.beans"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.impl.activation"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.impl.copyobject"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.impl.corba"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.impl.dynamicany"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.impl.encoding"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.impl.interceptors"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.impl.io"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.impl.ior"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.impl.ior.iiop"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.impl.javax.rmi"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.impl.javax.rmi.CORBA"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.impl.legacy.connection"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.impl.logging"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.impl.monitoring"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.impl.naming.cosnaming"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.impl.naming.namingutil"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.impl.naming.pcosnaming"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.impl.oa"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.impl.oa.poa"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.impl.oa.toa"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.impl.orb"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.impl.orbutil"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.impl.orbutil.closure"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.impl.orbutil.concurrent"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.impl.orbutil.fsm"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.impl.orbutil.graph"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.impl.orbutil.resources"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.impl.orbutil.threadpool"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.impl.presentation.rmi"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.impl.protocol"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.impl.protocol.giopmsgheaders"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.impl.resolver"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.impl.transport"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.impl.util"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.internal.CosNaming"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.internal.Interceptors"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.internal.POA"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.internal.corba"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.internal.iiop"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.org.omg.CORBA"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.pept.broker"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.pept.encoding"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.pept.protocol"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.pept.transport"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.spi.activation"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.spi.activation.InitialNameServicePackage"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.spi.activation.LocatorPackage"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.spi.activation.RepositoryPackage"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.spi.copyobject"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.spi.encoding"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.spi.extension"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.spi.ior"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.spi.ior.iiop"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.spi.legacy.connection"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.spi.legacy.interceptor"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.spi.logging"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.spi.monitoring"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.spi.oa"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.spi.orb"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.spi.orbutil.closure"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.spi.orbutil.fsm"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.spi.orbutil.proxy"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.spi.orbutil.threadpool"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.spi.presentation.rmi"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.spi.protocol"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.spi.resolver"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.spi.servicecontext"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.corba.se.spi.transport"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.imageio.metadata"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.imageio.plugins.bmp"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.imageio.plugins.common"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.imageio.plugins.gif"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.imageio.plugins.jpeg"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.imageio.plugins.png"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.imageio.plugins.wbmp"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.imageio.spi"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.java.swing"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.java.swing.plaf.gtk"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.java.swing.plaf.gtk.icons"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.java.swing.plaf.gtk.resources"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.java.swing.plaf.gtk.resources.metacity.SwingFallbackTheme.metacity-1"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.java.swing.plaf.motif"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.java.swing.plaf.motif.icons"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.java.swing.plaf.motif.resources"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.java.swing.plaf.nimbus"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.java.swing.plaf.windows"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.java.swing.plaf.windows.icons"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.java.swing.plaf.windows.resources"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.java.util.jar.pack"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.java_cup.internal"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.java_cup.internal.runtime"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.jlex.internal"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.jmx.defaults"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.jmx.interceptor"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.jmx.mbeanserver"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.jmx.remote.internal"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.jmx.remote.protocol.iiop"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.jmx.remote.protocol.rmi"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.jmx.remote.security"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.jmx.remote.util"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.jmx.snmp"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.jmx.snmp.IPAcl"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.jmx.snmp.agent"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.jmx.snmp.daemon"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.jmx.snmp.defaults"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.jmx.snmp.internal"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.jmx.snmp.mpm"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.jmx.snmp.tasks"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.jmx.trace"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.jndi.cosnaming"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.jndi.dns"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.jndi.ldap"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.jndi.ldap.ext"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.jndi.ldap.pool"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.jndi.ldap.sasl"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.jndi.rmi.registry"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.jndi.toolkit.corba"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.jndi.toolkit.ctx"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.jndi.toolkit.dir"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.jndi.toolkit.url"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.jndi.url.corbaname"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.jndi.url.dns"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.jndi.url.iiop"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.jndi.url.iiopname"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.jndi.url.ldap"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.jndi.url.ldaps"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.jndi.url.rmi"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.management"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.management.jmx"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.media.sound"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.naming.internal"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.net.ssl"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.net.ssl.internal.ssl"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.net.ssl.internal.www.protocol.https"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.bcel.internal"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.bcel.internal.classfile"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.bcel.internal.generic"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.bcel.internal.util"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.bcel.internal.verifier"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.bcel.internal.verifier.exc"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.bcel.internal.verifier.statics"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.bcel.internal.verifier.structurals"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.html.internal.dom"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.regexp.internal"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.wml.internal"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.wml.internal.dom"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xalan.internal"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xalan.internal.client"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xalan.internal.extensions"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xalan.internal.lib"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xalan.internal.res"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xalan.internal.templates"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xalan.internal.xslt"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xalan.internal.xsltc"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xalan.internal.xsltc.cmdline"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xalan.internal.xsltc.cmdline.getopt"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xalan.internal.xsltc.compiler"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xalan.internal.xsltc.compiler.util"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xalan.internal.xsltc.dom"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xalan.internal.xsltc.runtime"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xalan.internal.xsltc.runtime.output"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xalan.internal.xsltc.trax"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xalan.internal.xsltc.util"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xerces.internal.dom"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xerces.internal.dom.events"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xerces.internal.dom3.as"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xerces.internal.impl"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xerces.internal.impl.dtd"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xerces.internal.impl.dtd.models"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xerces.internal.impl.dv"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xerces.internal.impl.dv.dtd"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xerces.internal.impl.dv.util"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xerces.internal.impl.dv.xs"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xerces.internal.impl.io"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xerces.internal.impl.msg"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xerces.internal.impl.validation"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xerces.internal.impl.xpath"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xerces.internal.impl.xpath.regex"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xerces.internal.impl.xs"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xerces.internal.impl.xs.dom"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xerces.internal.impl.xs.identity"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xerces.internal.impl.xs.models"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xerces.internal.impl.xs.opti"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xerces.internal.impl.xs.traversers"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xerces.internal.impl.xs.util"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xerces.internal.jaxp"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xerces.internal.jaxp.datatype"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xerces.internal.jaxp.validation"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xerces.internal.jaxp.validation.xs"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xerces.internal.parsers"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xerces.internal.util"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xerces.internal.xinclude"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xerces.internal.xni"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xerces.internal.xni.grammars"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xerces.internal.xni.parser"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xerces.internal.xs"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xml.internal.dtm"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xml.internal.dtm.ref"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xml.internal.dtm.ref.dom2dtm"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xml.internal.dtm.ref.sax2dtm"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xml.internal.res"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xml.internal.serialize"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xml.internal.serializer"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xml.internal.utils"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xml.internal.utils.res"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xml.internal.utils.synthetic"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xml.internal.utils.synthetic.reflection"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xpath.internal"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xpath.internal.axes"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xpath.internal.compiler"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xpath.internal.functions"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xpath.internal.jaxp"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xpath.internal.objects"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xpath.internal.operations"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xpath.internal.patterns"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.apache.xpath.internal.res"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.omg.CORBA"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.omg.CORBA.ValueDefPackage"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.omg.CORBA.portable"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.omg.SendingContext"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.org.omg.SendingContext.CodeBasePackage"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.rmi.rmid"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.rowset"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.rowset.internal"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.rowset.providers"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.security.auth"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.security.auth.callback"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.security.auth.login"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.security.auth.module"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.security.cert.internal.x509"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.security.jgss"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.security.sasl"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.security.sasl.digest"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.security.sasl.gsskerb"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.security.sasl.util"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.swing.internal.plaf.basic.resources"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.swing.internal.plaf.metal.resources"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.swing.internal.plaf.synth.resources"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.tracing"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"com.sun.tracing.dtrace"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"java.applet"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"java.awt"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"java.awt.color"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"java.awt.datatransfer"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"java.awt.dnd"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"java.awt.dnd.peer"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"java.awt.event"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"java.awt.font"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"java.awt.geom"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"java.awt.im"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"java.awt.im.spi"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"java.awt.image"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"java.awt.image.renderable"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"java.awt.peer"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"java.awt.print"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"java.beans"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"java.beans.beancontext"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"java.io"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"java.lang"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"java.lang.annotation"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"java.lang.instrument"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"java.lang.management"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"java.lang.ref"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"java.lang.reflect"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"java.math"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"java.net"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"java.nio"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"java.nio.channels"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"java.nio.channels.spi"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"java.nio.charset"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"java.nio.charset.spi"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"java.rmi"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"java.rmi.activation"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"java.rmi.dgc"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"java.rmi.registry"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"java.rmi.server"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"java.security"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"java.security.acl"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"java.security.cert"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"java.security.interfaces"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"java.security.spec"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"java.sql"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"java.text"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"java.util"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"java.util.concurrent"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"java.util.concurrent.atomic"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"java.util.concurrent.locks"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"java.util.jar"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"java.util.logging"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"java.util.prefs"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"java.util.regex"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"java.util.zip"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"javax.accessibility"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"javax.activity"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"javax.imageio"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"javax.imageio.event"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"javax.imageio.metadata"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"javax.imageio.plugins.bmp"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"javax.imageio.plugins.jpeg"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"javax.imageio.spi"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"javax.imageio.stream"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"javax.management"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"javax.management.loading"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"javax.management.modelmbean"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"javax.management.monitor"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"javax.management.openmbean"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"javax.management.relation"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"javax.management.remote"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"javax.management.remote.rmi"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"javax.management.timer"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"javax.naming"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"javax.naming.directory"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"javax.naming.event"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"javax.naming.ldap"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"javax.naming.spi"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"javax.net"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"javax.net.ssl"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"javax.print"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"javax.print.attribute"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"javax.print.attribute.standard"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"javax.print.event"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"javax.rmi"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"javax.rmi.CORBA"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"javax.rmi.ssl"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"javax.security.auth"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"javax.security.auth.callback"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"javax.security.auth.kerberos"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"javax.security.auth.login"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"javax.security.auth.spi"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"javax.security.auth.x500"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"javax.security.cert"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"javax.security.sasl"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"javax.sound.midi"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"javax.sound.midi.spi"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"javax.sound.sampled"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"javax.sound.sampled.spi"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"javax.sql"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"javax.sql.rowset"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"javax.sql.rowset.serial"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"javax.sql.rowset.spi"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"javax.swing"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"javax.swing.border"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"javax.swing.colorchooser"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"javax.swing.event"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"javax.swing.filechooser"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"javax.swing.plaf"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"javax.swing.plaf.basic"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"javax.swing.plaf.basic.icons"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"javax.swing.plaf.metal"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"javax.swing.plaf.metal.icons"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"javax.swing.plaf.metal.icons.ocean"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"javax.swing.plaf.metal.sounds"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"javax.swing.plaf.multi"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"javax.swing.plaf.nimbus"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"javax.swing.plaf.synth"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"javax.swing.table"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"javax.swing.text"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"javax.swing.text.html"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"javax.swing.text.html.icons"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"javax.swing.text.html.parser"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"javax.swing.text.rtf"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"javax.swing.text.rtf.charsets"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"javax.swing.tree"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"javax.swing.undo"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"javax.transaction"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"javax.transaction.xa"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"javax.xml"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"javax.xml.datatype"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"javax.xml.namespace"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"javax.xml.parsers"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"javax.xml.transform"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"javax.xml.transform.dom"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"javax.xml.transform.sax"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"javax.xml.transform.stream"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"javax.xml.validation"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"javax.xml.xpath"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"org.ietf.jgss"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"org.omg.CORBA"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"org.omg.CORBA.DynAnyPackage"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"org.omg.CORBA.ORBPackage"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"org.omg.CORBA.TypeCodePackage"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"org.omg.CORBA.portable"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"org.omg.CORBA_2_3"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"org.omg.CORBA_2_3.portable"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"org.omg.CosNaming"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"org.omg.CosNaming.NamingContextExtPackage"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"org.omg.CosNaming.NamingContextPackage"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"org.omg.Dynamic"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"org.omg.DynamicAny"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"org.omg.DynamicAny.DynAnyFactoryPackage"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"org.omg.DynamicAny.DynAnyPackage"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"org.omg.IOP"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"org.omg.IOP.CodecFactoryPackage"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"org.omg.IOP.CodecPackage"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"org.omg.Messaging"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"org.omg.PortableInterceptor"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"org.omg.PortableInterceptor.ORBInitInfoPackage"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"org.omg.PortableServer"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"org.omg.PortableServer.CurrentPackage"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"org.omg.PortableServer.POAManagerPackage"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"org.omg.PortableServer.POAPackage"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"org.omg.PortableServer.ServantLocatorPackage"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"org.omg.PortableServer.portable"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"org.omg.SendingContext"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"org.omg.stub.java.rmi"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"org.omg.stub.javax.management.remote.rmi"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"org.w3c.dom"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"org.w3c.dom.bootstrap"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"org.w3c.dom.css"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"org.w3c.dom.events"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"org.w3c.dom.html"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"org.w3c.dom.ls"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"org.w3c.dom.ranges"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"org.w3c.dom.stylesheets"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"org.w3c.dom.traversal"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"org.w3c.dom.views"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"org.xml.sax"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"org.xml.sax.ext"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"org.xml.sax.helpers"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"sun.applet"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"sun.applet.resources"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"sun.audio"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"sun.awt"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"sun.awt.X11"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"sun.awt.color"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"sun.awt.datatransfer"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"sun.awt.dnd"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"sun.awt.geom"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"sun.awt.im"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"sun.awt.image"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"sun.awt.image.codec"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"sun.awt.motif"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"sun.awt.resources"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"sun.awt.shell"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"sun.awt.windows"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"sun.beans.editors"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"sun.beans.infos"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"sun.corba"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"sun.dc.path"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"sun.dc.pr"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"sun.font"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"sun.instrument"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"sun.io"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"sun.java2d"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"sun.java2d.loops"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"sun.java2d.opengl"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"sun.java2d.pipe"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"sun.jdbc.odbc"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"sun.jdbc.odbc.ee"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"sun.management"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"sun.management.counter"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"sun.management.counter.perf"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"sun.management.jmxremote"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"sun.management.resources"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"sun.management.snmp"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"sun.management.snmp.jvminstr"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"sun.management.snmp.jvmmib"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"sun.management.snmp.util"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"sun.misc"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"sun.misc.resources"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"sun.net"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"sun.net.dns"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"sun.net.ftp"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"sun.net.smtp"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"sun.net.spi"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"sun.net.spi.nameservice"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"sun.net.util"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"sun.net.www"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"sun.net.www.content.audio"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"sun.net.www.content.image"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"sun.net.www.content.text"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"sun.net.www.http"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"sun.net.www.protocol.doc"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"sun.net.www.protocol.file"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"sun.net.www.protocol.ftp"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"sun.net.www.protocol.gopher"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"sun.net.www.protocol.http"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"sun.net.www.protocol.https"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"sun.net.www.protocol.jar"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"sun.net.www.protocol.mailto"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"sun.net.www.protocol.netdoc"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"sun.net.www.protocol.systemresource"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"sun.net.www.protocol.verbatim"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"sun.nio"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"sun.nio.ch"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"sun.nio.cs"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"sun.print"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"sun.print.resources"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"sun.reflect"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"sun.reflect.annotation"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"sun.reflect.generics.factory"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"sun.reflect.generics.parser"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"sun.reflect.generics.reflectiveObjects"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"sun.reflect.generics.repository"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"sun.reflect.generics.scope"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"sun.reflect.generics.tree"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"sun.reflect.generics.visitor"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"sun.rmi.log"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"sun.rmi.registry"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"sun.rmi.registry.resources"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"sun.rmi.rmid.resources"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"sun.rmi.runtime"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"sun.rmi.server"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"sun.rmi.transport"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"sun.rmi.transport.proxy"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"sun.rmi.transport.tcp"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"sun.security.action"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"sun.security.jca"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"sun.security.jgss"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"sun.security.jgss.krb5"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"sun.security.jgss.spi"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"sun.security.krb5"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"sun.security.krb5.internal"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"sun.security.krb5.internal.ccache"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"sun.security.krb5.internal.crypto"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"sun.security.krb5.internal.crypto.dk"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"sun.security.krb5.internal.ktab"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"sun.security.krb5.internal.rcache"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"sun.security.krb5.internal.tools"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"sun.security.krb5.internal.util"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"sun.security.pkcs"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"sun.security.provider"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"sun.security.provider.certpath"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"sun.security.rsa"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"sun.security.timestamp"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"sun.security.tools"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"sun.security.util"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"sun.security.validator"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"sun.security.x509"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"sun.swing"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"sun.swing.plaf.synth"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"sun.text"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"sun.text.resources"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"sun.tools.hprof"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"sun.tools.jar"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"sun.tools.jar.resources"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"sun.util"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"sun.util.calendar"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"sun.util.locale"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"sun.util.logging.resources"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"sunw.io"_s,
			"tiger legacy"_s
		}),
		$$new($ObjectArray, {
			"sunw.util"_s,
			"tiger legacy"_s
		})
	});
}

legacy::legacy() {
}

$Class* legacy::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(legacy, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(legacy, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.tools.javac.resources.legacy",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(legacy, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(legacy);
	});
	return class$;
}

$Class* legacy::class$ = nullptr;

				} // resources
			} // javac
		} // tools
	} // sun
} // com