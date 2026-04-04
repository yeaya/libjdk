#include <com/sun/org/apache/xalan/internal/xsltc/trax/TemplatesImpl$1.h>
#include <com/sun/org/apache/xalan/internal/xsltc/trax/TemplatesImpl.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/module/ModuleDescriptor.h>
#include <java/lang/module/ModuleReader.h>
#include <java/lang/module/ModuleReference.h>
#include <java/net/URI.h>
#include <jcpp.h>

using $TemplatesImpl = ::com::sun::org::apache::xalan::internal::xsltc::trax::TemplatesImpl;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $ModuleDescriptor = ::java::lang::module::ModuleDescriptor;
using $ModuleReader = ::java::lang::module::ModuleReader;
using $ModuleReference = ::java::lang::module::ModuleReference;
using $URI = ::java::net::URI;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace trax {

void TemplatesImpl$1::init$($TemplatesImpl* this$0, $ModuleDescriptor* arg0, $URI* arg1) {
	$set(this, this$0, this$0);
	$ModuleReference::init$(arg0, arg1);
}

$ModuleReader* TemplatesImpl$1::open() {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

TemplatesImpl$1::TemplatesImpl$1() {
}

$Class* TemplatesImpl$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/org/apache/xalan/internal/xsltc/trax/TemplatesImpl;", nullptr, $FINAL | $SYNTHETIC, $field(TemplatesImpl$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/org/apache/xalan/internal/xsltc/trax/TemplatesImpl;Ljava/lang/module/ModuleDescriptor;Ljava/net/URI;)V", nullptr, 0, $method(TemplatesImpl$1, init$, void, $TemplatesImpl*, $ModuleDescriptor*, $URI*)},
		{"open", "()Ljava/lang/module/ModuleReader;", nullptr, $PUBLIC, $virtualMethod(TemplatesImpl$1, open, $ModuleReader*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.org.apache.xalan.internal.xsltc.trax.TemplatesImpl",
		"createModule",
		"(Ljava/lang/module/ModuleDescriptor;Ljava/lang/ClassLoader;)Ljava/lang/Module;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xalan.internal.xsltc.trax.TemplatesImpl$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.org.apache.xalan.internal.xsltc.trax.TemplatesImpl$1",
		"java.lang.module.ModuleReference",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.org.apache.xalan.internal.xsltc.trax.TemplatesImpl"
	};
	$loadClass(TemplatesImpl$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TemplatesImpl$1);
	});
	return class$;
}

$Class* TemplatesImpl$1::class$ = nullptr;

							} // trax
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com