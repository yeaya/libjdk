#include <com/sun/org/apache/xalan/internal/xsltc/trax/StAXStream2SAX$1.h>
#include <com/sun/org/apache/xalan/internal/xsltc/trax/StAXStream2SAX.h>
#include <javax/xml/stream/Location.h>
#include <javax/xml/stream/XMLStreamReader.h>
#include <jcpp.h>

using $StAXStream2SAX = ::com::sun::org::apache::xalan::internal::xsltc::trax::StAXStream2SAX;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace trax {

void StAXStream2SAX$1::init$($StAXStream2SAX* this$0) {
	$set(this, this$0, this$0);
}

int32_t StAXStream2SAX$1::getColumnNumber() {
	return $$nc($nc(this->this$0->staxStreamReader)->getLocation())->getColumnNumber();
}

int32_t StAXStream2SAX$1::getLineNumber() {
	return $$nc($nc(this->this$0->staxStreamReader)->getLocation())->getLineNumber();
}

$String* StAXStream2SAX$1::getPublicId() {
	return $$nc($nc(this->this$0->staxStreamReader)->getLocation())->getPublicId();
}

$String* StAXStream2SAX$1::getSystemId() {
	return $$nc($nc(this->this$0->staxStreamReader)->getLocation())->getSystemId();
}

$String* StAXStream2SAX$1::getXMLVersion() {
	return $nc(this->this$0->staxStreamReader)->getVersion();
}

$String* StAXStream2SAX$1::getEncoding() {
	return $nc(this->this$0->staxStreamReader)->getEncoding();
}

StAXStream2SAX$1::StAXStream2SAX$1() {
}

$Class* StAXStream2SAX$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/org/apache/xalan/internal/xsltc/trax/StAXStream2SAX;", nullptr, $FINAL | $SYNTHETIC, $field(StAXStream2SAX$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/org/apache/xalan/internal/xsltc/trax/StAXStream2SAX;)V", nullptr, 0, $method(StAXStream2SAX$1, init$, void, $StAXStream2SAX*)},
		{"getColumnNumber", "()I", nullptr, $PUBLIC, $virtualMethod(StAXStream2SAX$1, getColumnNumber, int32_t)},
		{"getEncoding", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(StAXStream2SAX$1, getEncoding, $String*)},
		{"getLineNumber", "()I", nullptr, $PUBLIC, $virtualMethod(StAXStream2SAX$1, getLineNumber, int32_t)},
		{"getPublicId", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(StAXStream2SAX$1, getPublicId, $String*)},
		{"getSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(StAXStream2SAX$1, getSystemId, $String*)},
		{"getXMLVersion", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(StAXStream2SAX$1, getXMLVersion, $String*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.org.apache.xalan.internal.xsltc.trax.StAXStream2SAX",
		"handleStartDocument",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xalan.internal.xsltc.trax.StAXStream2SAX$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.org.apache.xalan.internal.xsltc.trax.StAXStream2SAX$1",
		"java.lang.Object",
		"org.xml.sax.ext.Locator2",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.org.apache.xalan.internal.xsltc.trax.StAXStream2SAX"
	};
	$loadClass(StAXStream2SAX$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(StAXStream2SAX$1);
	});
	return class$;
}

$Class* StAXStream2SAX$1::class$ = nullptr;

							} // trax
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com