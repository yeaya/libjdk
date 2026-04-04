#include <javax/xml/crypto/dsig/spec/XPathType$Filter.h>
#include <javax/xml/crypto/dsig/spec/XPathType.h>
#include <jcpp.h>

#undef INTERSECT
#undef SUBTRACT
#undef UNION

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace xml {
		namespace crypto {
			namespace dsig {
				namespace spec {

XPathType$Filter* XPathType$Filter::INTERSECT = nullptr;
XPathType$Filter* XPathType$Filter::SUBTRACT = nullptr;
XPathType$Filter* XPathType$Filter::UNION = nullptr;

void XPathType$Filter::init$($String* operation) {
	$set(this, operation, operation);
}

$String* XPathType$Filter::toString() {
	return this->operation;
}

void XPathType$Filter::clinit$($Class* clazz) {
	$assignStatic(XPathType$Filter::INTERSECT, $new(XPathType$Filter, "intersect"_s));
	$assignStatic(XPathType$Filter::SUBTRACT, $new(XPathType$Filter, "subtract"_s));
	$assignStatic(XPathType$Filter::UNION, $new(XPathType$Filter, "union"_s));
}

XPathType$Filter::XPathType$Filter() {
}

$Class* XPathType$Filter::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"operation", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(XPathType$Filter, operation)},
		{"INTERSECT", "Ljavax/xml/crypto/dsig/spec/XPathType$Filter;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPathType$Filter, INTERSECT)},
		{"SUBTRACT", "Ljavax/xml/crypto/dsig/spec/XPathType$Filter;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPathType$Filter, SUBTRACT)},
		{"UNION", "Ljavax/xml/crypto/dsig/spec/XPathType$Filter;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPathType$Filter, UNION)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(XPathType$Filter, init$, void, $String*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XPathType$Filter, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.xml.crypto.dsig.spec.XPathType$Filter", "javax.xml.crypto.dsig.spec.XPathType", "Filter", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.xml.crypto.dsig.spec.XPathType$Filter",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.xml.crypto.dsig.spec.XPathType"
	};
	$loadClass(XPathType$Filter, name, initialize, &classInfo$$, XPathType$Filter::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(XPathType$Filter);
	});
	return class$;
}

$Class* XPathType$Filter::class$ = nullptr;

				} // spec
			} // dsig
		} // crypto
	} // xml
} // javax