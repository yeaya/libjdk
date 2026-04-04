#include <java/util/prefs/XmlSupport$EH.h>
#include <java/util/prefs/XmlSupport.h>
#include <org/xml/sax/SAXParseException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SAXParseException = ::org::xml::sax::SAXParseException;

namespace java {
	namespace util {
		namespace prefs {

void XmlSupport$EH::init$() {
}

void XmlSupport$EH::error($SAXParseException* x) {
	$throw(x);
}

void XmlSupport$EH::fatalError($SAXParseException* x) {
	$throw(x);
}

void XmlSupport$EH::warning($SAXParseException* x) {
	$throw(x);
}

XmlSupport$EH::XmlSupport$EH() {
}

$Class* XmlSupport$EH::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(XmlSupport$EH, init$, void)},
		{"error", "(Lorg/xml/sax/SAXParseException;)V", nullptr, $PUBLIC, $virtualMethod(XmlSupport$EH, error, void, $SAXParseException*), "org.xml.sax.SAXException"},
		{"fatalError", "(Lorg/xml/sax/SAXParseException;)V", nullptr, $PUBLIC, $virtualMethod(XmlSupport$EH, fatalError, void, $SAXParseException*), "org.xml.sax.SAXException"},
		{"warning", "(Lorg/xml/sax/SAXParseException;)V", nullptr, $PUBLIC, $virtualMethod(XmlSupport$EH, warning, void, $SAXParseException*), "org.xml.sax.SAXException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.prefs.XmlSupport$EH", "java.util.prefs.XmlSupport", "EH", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.prefs.XmlSupport$EH",
		"java.lang.Object",
		"org.xml.sax.ErrorHandler",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.prefs.XmlSupport"
	};
	$loadClass(XmlSupport$EH, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XmlSupport$EH);
	});
	return class$;
}

$Class* XmlSupport$EH::class$ = nullptr;

		} // prefs
	} // util
} // java