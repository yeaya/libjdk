#include <com/sun/org/apache/xalan/internal/xsltc/trax/TransformerFactoryImpl$1.h>

#include <com/sun/org/apache/xalan/internal/xsltc/trax/TransformerFactoryImpl.h>
#include <java/io/File.h>
#include <jcpp.h>

using $TransformerFactoryImpl = ::com::sun::org::apache::xalan::internal::xsltc::trax::TransformerFactoryImpl;
using $File = ::java::io::File;
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

$FieldInfo _TransformerFactoryImpl$1_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xalan/internal/xsltc/trax/TransformerFactoryImpl;", nullptr, $FINAL | $SYNTHETIC, $field(TransformerFactoryImpl$1, this$0)},
	{"val$transletAuxPrefix", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(TransformerFactoryImpl$1, val$transletAuxPrefix)},
	{}
};

$MethodInfo _TransformerFactoryImpl$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xalan/internal/xsltc/trax/TransformerFactoryImpl;Ljava/lang/String;)V", "()V", 0, $method(TransformerFactoryImpl$1, init$, void, $TransformerFactoryImpl*, $String*)},
	{"accept", "(Ljava/io/File;Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(TransformerFactoryImpl$1, accept, bool, $File*, $String*)},
	{}
};

$EnclosingMethodInfo _TransformerFactoryImpl$1_EnclosingMethodInfo_ = {
	"com.sun.org.apache.xalan.internal.xsltc.trax.TransformerFactoryImpl",
	"getBytecodesFromClasses",
	"(Ljavax/xml/transform/Source;Ljava/lang/String;)[[B"
};

$InnerClassInfo _TransformerFactoryImpl$1_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xalan.internal.xsltc.trax.TransformerFactoryImpl$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TransformerFactoryImpl$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.trax.TransformerFactoryImpl$1",
	"java.lang.Object",
	"java.io.FilenameFilter",
	_TransformerFactoryImpl$1_FieldInfo_,
	_TransformerFactoryImpl$1_MethodInfo_,
	nullptr,
	&_TransformerFactoryImpl$1_EnclosingMethodInfo_,
	_TransformerFactoryImpl$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xalan.internal.xsltc.trax.TransformerFactoryImpl"
};

$Object* allocate$TransformerFactoryImpl$1($Class* clazz) {
	return $of($alloc(TransformerFactoryImpl$1));
}

void TransformerFactoryImpl$1::init$($TransformerFactoryImpl* this$0, $String* val$transletAuxPrefix) {
	$set(this, this$0, this$0);
	$set(this, val$transletAuxPrefix, val$transletAuxPrefix);
}

bool TransformerFactoryImpl$1::accept($File* dir, $String* name) {
	bool var$0 = $nc(name)->endsWith(".class"_s);
	return (var$0 && name->startsWith(this->val$transletAuxPrefix));
}

TransformerFactoryImpl$1::TransformerFactoryImpl$1() {
}

$Class* TransformerFactoryImpl$1::load$($String* name, bool initialize) {
	$loadClass(TransformerFactoryImpl$1, name, initialize, &_TransformerFactoryImpl$1_ClassInfo_, allocate$TransformerFactoryImpl$1);
	return class$;
}

$Class* TransformerFactoryImpl$1::class$ = nullptr;

							} // trax
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com