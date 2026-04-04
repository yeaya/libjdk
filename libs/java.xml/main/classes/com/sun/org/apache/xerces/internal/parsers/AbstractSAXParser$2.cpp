#include <com/sun/org/apache/xerces/internal/parsers/AbstractSAXParser$2.h>
#include <com/sun/org/apache/xerces/internal/parsers/AbstractSAXParser.h>
#include <org/xml/sax/helpers/LocatorImpl.h>
#include <jcpp.h>

using $AbstractSAXParser = ::com::sun::org::apache::xerces::internal::parsers::AbstractSAXParser;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LocatorImpl = ::org::xml::sax::helpers::LocatorImpl;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace parsers {

void AbstractSAXParser$2::init$($AbstractSAXParser* this$0) {
	$set(this, this$0, this$0);
	$LocatorImpl::init$();
}

$String* AbstractSAXParser$2::getXMLVersion() {
	return this->this$0->fVersion;
}

$String* AbstractSAXParser$2::getEncoding() {
	return nullptr;
}

AbstractSAXParser$2::AbstractSAXParser$2() {
}

$Class* AbstractSAXParser$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/org/apache/xerces/internal/parsers/AbstractSAXParser;", nullptr, $FINAL | $SYNTHETIC, $field(AbstractSAXParser$2, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/org/apache/xerces/internal/parsers/AbstractSAXParser;)V", nullptr, 0, $method(AbstractSAXParser$2, init$, void, $AbstractSAXParser*)},
		{"getEncoding", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AbstractSAXParser$2, getEncoding, $String*)},
		{"getXMLVersion", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AbstractSAXParser$2, getXMLVersion, $String*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.org.apache.xerces.internal.parsers.AbstractSAXParser",
		"parse",
		"(Lorg/xml/sax/InputSource;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xerces.internal.parsers.AbstractSAXParser$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.org.apache.xerces.internal.parsers.AbstractSAXParser$2",
		"org.xml.sax.helpers.LocatorImpl",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.org.apache.xerces.internal.parsers.AbstractSAXParser"
	};
	$loadClass(AbstractSAXParser$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AbstractSAXParser$2);
	});
	return class$;
}

$Class* AbstractSAXParser$2::class$ = nullptr;

						} // parsers
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com