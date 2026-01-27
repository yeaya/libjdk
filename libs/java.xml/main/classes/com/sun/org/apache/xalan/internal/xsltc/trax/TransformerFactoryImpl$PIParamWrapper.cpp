#include <com/sun/org/apache/xalan/internal/xsltc/trax/TransformerFactoryImpl$PIParamWrapper.h>

#include <com/sun/org/apache/xalan/internal/xsltc/trax/TransformerFactoryImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
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

$FieldInfo _TransformerFactoryImpl$PIParamWrapper_FieldInfo_[] = {
	{"_media", "Ljava/lang/String;", nullptr, $PUBLIC, $field(TransformerFactoryImpl$PIParamWrapper, _media)},
	{"_title", "Ljava/lang/String;", nullptr, $PUBLIC, $field(TransformerFactoryImpl$PIParamWrapper, _title)},
	{"_charset", "Ljava/lang/String;", nullptr, $PUBLIC, $field(TransformerFactoryImpl$PIParamWrapper, _charset)},
	{}
};

$MethodInfo _TransformerFactoryImpl$PIParamWrapper_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(TransformerFactoryImpl$PIParamWrapper, init$, void, $String*, $String*, $String*)},
	{}
};

$InnerClassInfo _TransformerFactoryImpl$PIParamWrapper_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xalan.internal.xsltc.trax.TransformerFactoryImpl$PIParamWrapper", "com.sun.org.apache.xalan.internal.xsltc.trax.TransformerFactoryImpl", "PIParamWrapper", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _TransformerFactoryImpl$PIParamWrapper_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.trax.TransformerFactoryImpl$PIParamWrapper",
	"java.lang.Object",
	nullptr,
	_TransformerFactoryImpl$PIParamWrapper_FieldInfo_,
	_TransformerFactoryImpl$PIParamWrapper_MethodInfo_,
	nullptr,
	nullptr,
	_TransformerFactoryImpl$PIParamWrapper_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xalan.internal.xsltc.trax.TransformerFactoryImpl"
};

$Object* allocate$TransformerFactoryImpl$PIParamWrapper($Class* clazz) {
	return $of($alloc(TransformerFactoryImpl$PIParamWrapper));
}

void TransformerFactoryImpl$PIParamWrapper::init$($String* media, $String* title, $String* charset) {
	$set(this, _media, nullptr);
	$set(this, _title, nullptr);
	$set(this, _charset, nullptr);
	$set(this, _media, media);
	$set(this, _title, title);
	$set(this, _charset, charset);
}

TransformerFactoryImpl$PIParamWrapper::TransformerFactoryImpl$PIParamWrapper() {
}

$Class* TransformerFactoryImpl$PIParamWrapper::load$($String* name, bool initialize) {
	$loadClass(TransformerFactoryImpl$PIParamWrapper, name, initialize, &_TransformerFactoryImpl$PIParamWrapper_ClassInfo_, allocate$TransformerFactoryImpl$PIParamWrapper);
	return class$;
}

$Class* TransformerFactoryImpl$PIParamWrapper::class$ = nullptr;

							} // trax
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com