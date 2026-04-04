#include <com/sun/tools/javac/comp/ArgumentAttr$LocalCacheContext.h>
#include <com/sun/tools/javac/comp/ArgumentAttr.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <jcpp.h>

using $ArgumentAttr = ::com::sun::tools::javac::comp::ArgumentAttr;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HashMap = ::java::util::HashMap;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

void ArgumentAttr$LocalCacheContext::init$($ArgumentAttr* this$0) {
	$set(this, this$0, this$0);
	$set(this, prevCache, this$0->argumentTypeCache);
	$set(this$0, argumentTypeCache, $new($HashMap));
}

void ArgumentAttr$LocalCacheContext::leave() {
	$set(this->this$0, argumentTypeCache, this->prevCache);
}

ArgumentAttr$LocalCacheContext::ArgumentAttr$LocalCacheContext() {
}

$Class* ArgumentAttr$LocalCacheContext::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/comp/ArgumentAttr;", nullptr, $FINAL | $SYNTHETIC, $field(ArgumentAttr$LocalCacheContext, this$0)},
		{"prevCache", "Ljava/util/Map;", "Ljava/util/Map<Lcom/sun/tools/javac/comp/ArgumentAttr$UniquePos;Lcom/sun/tools/javac/comp/ArgumentAttr$ArgumentType<*>;>;", 0, $field(ArgumentAttr$LocalCacheContext, prevCache)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/ArgumentAttr;)V", nullptr, $PUBLIC, $method(ArgumentAttr$LocalCacheContext, init$, void, $ArgumentAttr*)},
		{"leave", "()V", nullptr, $PUBLIC, $virtualMethod(ArgumentAttr$LocalCacheContext, leave, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.ArgumentAttr$LocalCacheContext", "com.sun.tools.javac.comp.ArgumentAttr", "LocalCacheContext", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.comp.ArgumentAttr$LocalCacheContext",
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
		"com.sun.tools.javac.comp.ArgumentAttr"
	};
	$loadClass(ArgumentAttr$LocalCacheContext, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ArgumentAttr$LocalCacheContext);
	});
	return class$;
}

$Class* ArgumentAttr$LocalCacheContext::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com