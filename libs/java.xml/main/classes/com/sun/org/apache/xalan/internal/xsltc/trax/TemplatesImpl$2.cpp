#include <com/sun/org/apache/xalan/internal/xsltc/trax/TemplatesImpl$2.h>
#include <com/sun/org/apache/xalan/internal/xsltc/trax/TemplatesImpl.h>
#include <java/lang/module/ModuleReference.h>
#include <java/util/Optional.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $TemplatesImpl = ::com::sun::org::apache::xalan::internal::xsltc::trax::TemplatesImpl;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ModuleReference = ::java::lang::module::ModuleReference;
using $Optional = ::java::util::Optional;
using $Set = ::java::util::Set;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace trax {

void TemplatesImpl$2::init$($TemplatesImpl* this$0, $String* val$mn, $ModuleReference* val$mref) {
	$set(this, this$0, this$0);
	$set(this, val$mn, val$mn);
	$set(this, val$mref, val$mref);
}

$Optional* TemplatesImpl$2::find($String* name) {
	if ($nc(name)->equals(this->val$mn)) {
		return $Optional::of(this->val$mref);
	} else {
		return $Optional::empty();
	}
}

$Set* TemplatesImpl$2::findAll() {
	return $Set::of(this->val$mref);
}

TemplatesImpl$2::TemplatesImpl$2() {
}

$Class* TemplatesImpl$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/org/apache/xalan/internal/xsltc/trax/TemplatesImpl;", nullptr, $FINAL | $SYNTHETIC, $field(TemplatesImpl$2, this$0)},
		{"val$mref", "Ljava/lang/module/ModuleReference;", nullptr, $FINAL | $SYNTHETIC, $field(TemplatesImpl$2, val$mref)},
		{"val$mn", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(TemplatesImpl$2, val$mn)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/org/apache/xalan/internal/xsltc/trax/TemplatesImpl;Ljava/lang/String;Ljava/lang/module/ModuleReference;)V", "()V", 0, $method(TemplatesImpl$2, init$, void, $TemplatesImpl*, $String*, $ModuleReference*)},
		{"find", "(Ljava/lang/String;)Ljava/util/Optional;", "(Ljava/lang/String;)Ljava/util/Optional<Ljava/lang/module/ModuleReference;>;", $PUBLIC, $virtualMethod(TemplatesImpl$2, find, $Optional*, $String*)},
		{"findAll", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/module/ModuleReference;>;", $PUBLIC, $virtualMethod(TemplatesImpl$2, findAll, $Set*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.org.apache.xalan.internal.xsltc.trax.TemplatesImpl",
		"createModule",
		"(Ljava/lang/module/ModuleDescriptor;Ljava/lang/ClassLoader;)Ljava/lang/Module;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xalan.internal.xsltc.trax.TemplatesImpl$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.org.apache.xalan.internal.xsltc.trax.TemplatesImpl$2",
		"java.lang.Object",
		"java.lang.module.ModuleFinder",
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
	$loadClass(TemplatesImpl$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TemplatesImpl$2);
	});
	return class$;
}

$Class* TemplatesImpl$2::class$ = nullptr;

							} // trax
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com