#include <com/sun/tools/sjavac/comp/dependencies/PublicApiCollector.h>
#include <com/sun/source/tree/CompilationUnitTree.h>
#include <com/sun/source/tree/Tree.h>
#include <com/sun/source/util/TaskEvent$Kind.h>
#include <com/sun/source/util/TaskEvent.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/tree/JCTree$JCClassDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCCompilationUnit.h>
#include <com/sun/tools/javac/util/Context.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/sjavac/Log.h>
#include <com/sun/tools/sjavac/comp/PubAPIs.h>
#include <com/sun/tools/sjavac/comp/dependencies/PublicApiCollector$1.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Collection.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/function/Consumer.h>
#include <javax/lang/model/element/Element.h>
#include <jcpp.h>

using $Tree = ::com::sun::source::tree::Tree;
using $TaskEvent = ::com::sun::source::util::TaskEvent;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $JCTree$JCClassDecl = ::com::sun::tools::javac::tree::JCTree$JCClassDecl;
using $JCTree$JCCompilationUnit = ::com::sun::tools::javac::tree::JCTree$JCCompilationUnit;
using $Context = ::com::sun::tools::javac::util::Context;
using $List = ::com::sun::tools::javac::util::List;
using $Log = ::com::sun::tools::sjavac::Log;
using $PubAPIs = ::com::sun::tools::sjavac::comp::PubAPIs;
using $PublicApiCollector$1 = ::com::sun::tools::sjavac::comp::dependencies::PublicApiCollector$1;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Collection = ::java::util::Collection;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;
using $Consumer = ::java::util::function::Consumer;
using $Element = ::javax::lang::model::element::Element;

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace comp {
					namespace dependencies {

class PublicApiCollector$$Lambda$visitPubapi : public $Consumer {
	$class(PublicApiCollector$$Lambda$visitPubapi, $NO_CLASS_INIT, $Consumer)
public:
	void init$($PubAPIs* inst) {
		$set(this, inst$, inst);
	}
	virtual void accept(Object$* e) override {
		$nc(inst$)->visitPubapi($cast($Element, e));
	}
	$PubAPIs* inst$ = nullptr;
};
$Class* PublicApiCollector$$Lambda$visitPubapi::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(PublicApiCollector$$Lambda$visitPubapi, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/sjavac/comp/PubAPIs;)V", nullptr, $PUBLIC, $method(PublicApiCollector$$Lambda$visitPubapi, init$, void, $PubAPIs*)},
		{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(PublicApiCollector$$Lambda$visitPubapi, accept, void, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.sjavac.comp.dependencies.PublicApiCollector$$Lambda$visitPubapi",
		"java.lang.Object",
		"java.util.function.Consumer",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(PublicApiCollector$$Lambda$visitPubapi, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PublicApiCollector$$Lambda$visitPubapi);
	});
	return class$;
}
$Class* PublicApiCollector$$Lambda$visitPubapi::class$ = nullptr;

void PublicApiCollector::init$($Context* context, $Collection* explicitJFOs) {
	$set(this, classSymbols, $new($HashSet));
	$set(this, context, context);
	$set(this, explicitJFOs, explicitJFOs);
}

void PublicApiCollector::finished($TaskEvent* e) {
	$useLocalObjectStack();
	$init($PublicApiCollector$1);
	$var($PubAPIs, pa, nullptr);
	switch ($nc($PublicApiCollector$1::$SwitchMap$com$sun$source$util$TaskEvent$Kind)->get(($$nc($nc(e)->getKind()))->ordinal())) {
	case 1:
		collectClassSymbols($$cast($JCTree$JCCompilationUnit, e->getCompilationUnit()));
		break;
	case 2:
		{
			$Log::debug("Compilation finished"_s);
			$Log::debug("Extracting pub APIs for the following symbols:"_s);
			{
				$var($Iterator, i$, this->classSymbols->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($Symbol$ClassSymbol, cs, $cast($Symbol$ClassSymbol, i$->next()));
					$Log::debug($$str({"    "_s, $nc(cs)->fullname}));
				}
			}
			extractPubApis();
			$assign(pa, $PubAPIs::instance(this->context));
			$set(this, explicitPubApis, $nc(pa)->getPubapis(this->explicitJFOs, true));
			$set(this, nonExplicitPubApis, pa->getPubapis(this->explicitJFOs, false));
			$Log::debug("done"_s);
			break;
		}
	}
}

void PublicApiCollector::collectClassSymbols($JCTree$JCCompilationUnit* cu) {
	$useLocalObjectStack();
	$var($Iterator, i$, $$sure($List, $nc(cu)->getTypeDecls())->iterator());
	for (; $nc(i$)->hasNext();) {
		$var($Tree, t, $cast($Tree, i$->next()));
		{
			$var($JCTree$JCClassDecl, classDecl, nullptr);
			bool var$0 = $instanceOf($JCTree$JCClassDecl, t);
			if (var$0) {
				$assign(classDecl, $cast($JCTree$JCClassDecl, t));
				var$0 = true;
			}
			if (var$0) {
				this->classSymbols->add($nc(classDecl)->sym);
			}
		}
	}
}

void PublicApiCollector::extractPubApis() {
	$useLocalObjectStack();
	$var($PubAPIs, pubApis, $PubAPIs::instance(this->context));
	this->classSymbols->forEach($$new(PublicApiCollector$$Lambda$visitPubapi, $nc(pubApis)));
}

$Map* PublicApiCollector::getPubApis(bool explicit$) {
	return explicit$ ? this->explicitPubApis : this->nonExplicitPubApis;
}

PublicApiCollector::PublicApiCollector() {
}

$Class* PublicApiCollector::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("com.sun.tools.sjavac.comp.dependencies.PublicApiCollector$$Lambda$visitPubapi")) {
			return PublicApiCollector$$Lambda$visitPubapi::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"context", "Lcom/sun/tools/javac/util/Context;", nullptr, $PRIVATE, $field(PublicApiCollector, context)},
		{"classSymbols", "Ljava/util/Set;", "Ljava/util/Set<Lcom/sun/tools/javac/code/Symbol$ClassSymbol;>;", $PRIVATE | $FINAL, $field(PublicApiCollector, classSymbols)},
		{"explicitJFOs", "Ljava/util/Collection;", "Ljava/util/Collection<Ljavax/tools/JavaFileObject;>;", $PRIVATE | $FINAL, $field(PublicApiCollector, explicitJFOs)},
		{"explicitPubApis", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Lcom/sun/tools/sjavac/pubapi/PubApi;>;", $PRIVATE, $field(PublicApiCollector, explicitPubApis)},
		{"nonExplicitPubApis", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Lcom/sun/tools/sjavac/pubapi/PubApi;>;", $PRIVATE, $field(PublicApiCollector, nonExplicitPubApis)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/util/Context;Ljava/util/Collection;)V", "(Lcom/sun/tools/javac/util/Context;Ljava/util/Collection<Ljavax/tools/JavaFileObject;>;)V", $PUBLIC, $method(PublicApiCollector, init$, void, $Context*, $Collection*)},
		{"collectClassSymbols", "(Lcom/sun/tools/javac/tree/JCTree$JCCompilationUnit;)V", nullptr, $PRIVATE, $method(PublicApiCollector, collectClassSymbols, void, $JCTree$JCCompilationUnit*)},
		{"extractPubApis", "()V", nullptr, $PRIVATE, $method(PublicApiCollector, extractPubApis, void)},
		{"finished", "(Lcom/sun/source/util/TaskEvent;)V", nullptr, $PUBLIC, $virtualMethod(PublicApiCollector, finished, void, $TaskEvent*)},
		{"getPubApis", "(Z)Ljava/util/Map;", "(Z)Ljava/util/Map<Ljava/lang/String;Lcom/sun/tools/sjavac/pubapi/PubApi;>;", $PUBLIC, $virtualMethod(PublicApiCollector, getPubApis, $Map*, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.sjavac.comp.dependencies.PublicApiCollector$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.tools.sjavac.comp.dependencies.PublicApiCollector",
		"java.lang.Object",
		"com.sun.source.util.TaskListener",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"com.sun.tools.sjavac.comp.dependencies.PublicApiCollector$1"
	};
	$loadClass(PublicApiCollector, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PublicApiCollector);
	});
	return class$;
}

$Class* PublicApiCollector::class$ = nullptr;

					} // dependencies
				} // comp
			} // sjavac
		} // tools
	} // sun
} // com