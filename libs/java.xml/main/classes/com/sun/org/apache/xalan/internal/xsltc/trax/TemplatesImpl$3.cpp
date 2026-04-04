#include <com/sun/org/apache/xalan/internal/xsltc/trax/TemplatesImpl$3.h>
#include <com/sun/org/apache/xalan/internal/utils/ObjectFactory.h>
#include <com/sun/org/apache/xalan/internal/xsltc/trax/TemplatesImpl$TransletClassLoader.h>
#include <com/sun/org/apache/xalan/internal/xsltc/trax/TemplatesImpl.h>
#include <com/sun/org/apache/xalan/internal/xsltc/trax/TransformerFactoryImpl.h>
#include <java/lang/ClassLoader.h>
#include <java/util/Map.h>
#include <jcpp.h>

using $ObjectFactory = ::com::sun::org::apache::xalan::internal::utils::ObjectFactory;
using $TemplatesImpl = ::com::sun::org::apache::xalan::internal::xsltc::trax::TemplatesImpl;
using $TemplatesImpl$TransletClassLoader = ::com::sun::org::apache::xalan::internal::xsltc::trax::TemplatesImpl$TransletClassLoader;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
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

void TemplatesImpl$3::init$($TemplatesImpl* this$0) {
	$set(this, this$0, this$0);
}

$Object* TemplatesImpl$3::run() {
	$useLocalObjectStack();
	$var($ClassLoader, var$0, $ObjectFactory::findClassLoader());
	return $new($TemplatesImpl$TransletClassLoader, var$0, $($nc(this->this$0->_tfactory)->getExternalExtensionsMap()));
}

TemplatesImpl$3::TemplatesImpl$3() {
}

$Class* TemplatesImpl$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/org/apache/xalan/internal/xsltc/trax/TemplatesImpl;", nullptr, $FINAL | $SYNTHETIC, $field(TemplatesImpl$3, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/org/apache/xalan/internal/xsltc/trax/TemplatesImpl;)V", nullptr, 0, $method(TemplatesImpl$3, init$, void, $TemplatesImpl*)},
		{"run", "()Lcom/sun/org/apache/xalan/internal/xsltc/trax/TemplatesImpl$TransletClassLoader;", nullptr, $PUBLIC, $virtualMethod(TemplatesImpl$3, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.org.apache.xalan.internal.xsltc.trax.TemplatesImpl",
		"defineTransletClasses",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xalan.internal.xsltc.trax.TemplatesImpl$3", nullptr, nullptr, 0},
		{"com.sun.org.apache.xalan.internal.xsltc.trax.TemplatesImpl$TransletClassLoader", "com.sun.org.apache.xalan.internal.xsltc.trax.TemplatesImpl", "TransletClassLoader", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.org.apache.xalan.internal.xsltc.trax.TemplatesImpl$3",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Lcom/sun/org/apache/xalan/internal/xsltc/trax/TemplatesImpl$TransletClassLoader;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.org.apache.xalan.internal.xsltc.trax.TemplatesImpl"
	};
	$loadClass(TemplatesImpl$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TemplatesImpl$3);
	});
	return class$;
}

$Class* TemplatesImpl$3::class$ = nullptr;

							} // trax
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com