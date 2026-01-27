#include <com/sun/org/apache/xml/internal/serialize/OutputFormat$DTD.h>

#include <com/sun/org/apache/xml/internal/serialize/OutputFormat.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serialize {

$FieldInfo _OutputFormat$DTD_FieldInfo_[] = {
	{"HTMLPublicId", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(OutputFormat$DTD, HTMLPublicId)},
	{"HTMLSystemId", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(OutputFormat$DTD, HTMLSystemId)},
	{"XHTMLPublicId", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(OutputFormat$DTD, XHTMLPublicId)},
	{"XHTMLSystemId", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(OutputFormat$DTD, XHTMLSystemId)},
	{}
};

$MethodInfo _OutputFormat$DTD_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(OutputFormat$DTD, init$, void)},
	{}
};

$InnerClassInfo _OutputFormat$DTD_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.serialize.OutputFormat$DTD", "com.sun.org.apache.xml.internal.serialize.OutputFormat", "DTD", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _OutputFormat$DTD_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.serialize.OutputFormat$DTD",
	"java.lang.Object",
	nullptr,
	_OutputFormat$DTD_FieldInfo_,
	_OutputFormat$DTD_MethodInfo_,
	nullptr,
	nullptr,
	_OutputFormat$DTD_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.serialize.OutputFormat"
};

$Object* allocate$OutputFormat$DTD($Class* clazz) {
	return $of($alloc(OutputFormat$DTD));
}

$String* OutputFormat$DTD::HTMLPublicId = nullptr;
$String* OutputFormat$DTD::HTMLSystemId = nullptr;
$String* OutputFormat$DTD::XHTMLPublicId = nullptr;
$String* OutputFormat$DTD::XHTMLSystemId = nullptr;

void OutputFormat$DTD::init$() {
}

OutputFormat$DTD::OutputFormat$DTD() {
}

void clinit$OutputFormat$DTD($Class* class$) {
	$assignStatic(OutputFormat$DTD::HTMLPublicId, "-//W3C//DTD HTML 4.01//EN"_s);
	$assignStatic(OutputFormat$DTD::HTMLSystemId, "http://www.w3.org/TR/html4/strict.dtd"_s);
	$assignStatic(OutputFormat$DTD::XHTMLPublicId, "-//W3C//DTD XHTML 1.0 Strict//EN"_s);
	$assignStatic(OutputFormat$DTD::XHTMLSystemId, "http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd"_s);
}

$Class* OutputFormat$DTD::load$($String* name, bool initialize) {
	$loadClass(OutputFormat$DTD, name, initialize, &_OutputFormat$DTD_ClassInfo_, clinit$OutputFormat$DTD, allocate$OutputFormat$DTD);
	return class$;
}

$Class* OutputFormat$DTD::class$ = nullptr;

						} // serialize
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com