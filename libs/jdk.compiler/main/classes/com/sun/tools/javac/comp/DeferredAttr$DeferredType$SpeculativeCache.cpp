#include <com/sun/tools/javac/comp/DeferredAttr$DeferredType$SpeculativeCache.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/comp/Attr$ResultInfo.h>
#include <com/sun/tools/javac/comp/Check$CheckContext.h>
#include <com/sun/tools/javac/comp/DeferredAttr$DeferredAttrContext.h>
#include <com/sun/tools/javac/comp/DeferredAttr$DeferredType$SpeculativeCache$Entry.h>
#include <com/sun/tools/javac/comp/DeferredAttr$DeferredType.h>
#include <com/sun/tools/javac/comp/Resolve$MethodResolutionPhase.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/util/List.h>
#include <java/util/Iterator.h>
#include <java/util/Map.h>
#include <java/util/WeakHashMap.h>
#include <jcpp.h>

using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Attr$ResultInfo = ::com::sun::tools::javac::comp::Attr$ResultInfo;
using $DeferredAttr$DeferredType = ::com::sun::tools::javac::comp::DeferredAttr$DeferredType;
using $DeferredAttr$DeferredType$SpeculativeCache$Entry = ::com::sun::tools::javac::comp::DeferredAttr$DeferredType$SpeculativeCache$Entry;
using $Resolve$MethodResolutionPhase = ::com::sun::tools::javac::comp::Resolve$MethodResolutionPhase;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $List = ::com::sun::tools::javac::util::List;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $WeakHashMap = ::java::util::WeakHashMap;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

void DeferredAttr$DeferredType$SpeculativeCache::init$($DeferredAttr$DeferredType* this$1) {
	$set(this, this$1, this$1);
	$set(this, cache, $new($WeakHashMap));
}

$DeferredAttr$DeferredType$SpeculativeCache$Entry* DeferredAttr$DeferredType$SpeculativeCache::get($Symbol* msym, $Resolve$MethodResolutionPhase* phase) {
	$useLocalObjectStack();
	$var($List, entries, $cast($List, $nc(this->cache)->get(msym)));
	if (entries == nullptr) {
		return nullptr;
	}
	{
		$var($Iterator, i$, $nc(entries)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($DeferredAttr$DeferredType$SpeculativeCache$Entry, e, $cast($DeferredAttr$DeferredType$SpeculativeCache$Entry, i$->next()));
			if ($nc(e)->matches(phase)) {
				return e;
			}
		}
	}
	return nullptr;
}

void DeferredAttr$DeferredType$SpeculativeCache::put($JCTree* speculativeTree, $Attr$ResultInfo* resultInfo) {
	$useLocalObjectStack();
	$var($Symbol, msym, $nc($($nc($nc(resultInfo)->checkContext)->deferredAttrContext()))->msym);
	$var($List, entries, $cast($List, $nc(this->cache)->get(msym)));
	if (entries == nullptr) {
		$assign(entries, $List::nil());
	}
	$nc(this->cache)->put(msym, $($nc(entries)->prepend($$new($DeferredAttr$DeferredType$SpeculativeCache$Entry, this, speculativeTree, resultInfo))));
}

DeferredAttr$DeferredType$SpeculativeCache::DeferredAttr$DeferredType$SpeculativeCache() {
}

$Class* DeferredAttr$DeferredType$SpeculativeCache::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "Lcom/sun/tools/javac/comp/DeferredAttr$DeferredType;", nullptr, $FINAL | $SYNTHETIC, $field(DeferredAttr$DeferredType$SpeculativeCache, this$1)},
		{"cache", "Ljava/util/Map;", "Ljava/util/Map<Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/comp/DeferredAttr$DeferredType$SpeculativeCache$Entry;>;>;", $PRIVATE, $field(DeferredAttr$DeferredType$SpeculativeCache, cache)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/DeferredAttr$DeferredType;)V", nullptr, 0, $method(DeferredAttr$DeferredType$SpeculativeCache, init$, void, $DeferredAttr$DeferredType*)},
		{"get", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/comp/Resolve$MethodResolutionPhase;)Lcom/sun/tools/javac/comp/DeferredAttr$DeferredType$SpeculativeCache$Entry;", nullptr, 0, $virtualMethod(DeferredAttr$DeferredType$SpeculativeCache, get, $DeferredAttr$DeferredType$SpeculativeCache$Entry*, $Symbol*, $Resolve$MethodResolutionPhase*)},
		{"put", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/comp/Attr$ResultInfo;)V", nullptr, 0, $virtualMethod(DeferredAttr$DeferredType$SpeculativeCache, put, void, $JCTree*, $Attr$ResultInfo*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.DeferredAttr$DeferredType", "com.sun.tools.javac.comp.DeferredAttr", "DeferredType", $PUBLIC},
		{"com.sun.tools.javac.comp.DeferredAttr$DeferredType$SpeculativeCache", "com.sun.tools.javac.comp.DeferredAttr$DeferredType", "SpeculativeCache", 0},
		{"com.sun.tools.javac.comp.DeferredAttr$DeferredType$SpeculativeCache$Entry", "com.sun.tools.javac.comp.DeferredAttr$DeferredType$SpeculativeCache", "Entry", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.comp.DeferredAttr$DeferredType$SpeculativeCache",
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
		"com.sun.tools.javac.comp.DeferredAttr"
	};
	$loadClass(DeferredAttr$DeferredType$SpeculativeCache, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DeferredAttr$DeferredType$SpeculativeCache);
	});
	return class$;
}

$Class* DeferredAttr$DeferredType$SpeculativeCache::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com