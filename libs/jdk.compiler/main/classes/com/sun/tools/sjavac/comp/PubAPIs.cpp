#include <com/sun/tools/sjavac/comp/PubAPIs.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$PackageSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/util/Context$Key.h>
#include <com/sun/tools/javac/util/Context.h>
#include <com/sun/tools/javac/util/Log.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/sjavac/comp/PubapiVisitor.h>
#include <com/sun/tools/sjavac/pubapi/PubApi.h>
#include <java/util/Collection.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <javax/lang/model/element/Element.h>
#include <javax/lang/model/util/AbstractElementVisitor6.h>
#include <javax/tools/JavaFileObject.h>
#include <jcpp.h>

using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Context = ::com::sun::tools::javac::util::Context;
using $Context$Key = ::com::sun::tools::javac::util::Context$Key;
using $Log = ::com::sun::tools::javac::util::Log;
using $PubapiVisitor = ::com::sun::tools::sjavac::comp::PubapiVisitor;
using $PubApi = ::com::sun::tools::sjavac::pubapi::PubApi;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collection = ::java::util::Collection;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;
using $Element = ::javax::lang::model::element::Element;

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace comp {

$Context$Key* PubAPIs::pubApisKey = nullptr;

PubAPIs* PubAPIs::instance($Context* context) {
	$init(PubAPIs);
	$var(PubAPIs, instance, $cast(PubAPIs, $nc(context)->get(PubAPIs::pubApisKey)));
	if (instance == nullptr) {
		$assign(instance, $new(PubAPIs, context));
	}
	return instance;
}

void PubAPIs::init$($Context* context) {
	$set(this, publicApiPerClass, $new($HashMap));
	$nc(context)->put(PubAPIs::pubApisKey, this);
	$set(this, log, $Log::instance(context));
}

$Map* PubAPIs::getPubapis($Collection* explicitJFOs, bool explicits) {
	$useLocalObjectStack();
	$var($Map, result, $new($HashMap));
	{
		$var($Iterator, i$, $$nc($nc(this->publicApiPerClass)->keySet())->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Symbol$ClassSymbol, cs, $cast($Symbol$ClassSymbol, i$->next()));
			{
				bool amongExplicits = $nc(explicitJFOs)->contains($nc(cs)->sourcefile);
				if (explicits != amongExplicits) {
					continue;
				}
				$var($String, pkg, $str({":"_s, $nc($(cs->packge()))->fullname}));
				$var($PubApi, currentPubApi, $cast($PubApi, result->getOrDefault(pkg, $$new($PubApi))));
				result->put(pkg, $($PubApi::mergeTypes(currentPubApi, $$cast($PubApi, $nc(this->publicApiPerClass)->get(cs)))));
			}
		}
	}
	return result;
}

void PubAPIs::visitPubapi($Element* e) {
	$useLocalObjectStack();
	if (e == nullptr) {
		return;
	}
	$var($PubapiVisitor, v, $new($PubapiVisitor));
	v->visit(e);
	$nc(this->publicApiPerClass)->put($cast($Symbol$ClassSymbol, e), $(v->getCollectedPubApi()));
}

void PubAPIs::clinit$($Class* clazz) {
	$assignStatic(PubAPIs::pubApisKey, $new($Context$Key));
}

PubAPIs::PubAPIs() {
}

$Class* PubAPIs::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"pubApisKey", "Lcom/sun/tools/javac/util/Context$Key;", "Lcom/sun/tools/javac/util/Context$Key<Lcom/sun/tools/sjavac/comp/PubAPIs;>;", $PROTECTED | $STATIC | $FINAL, $staticField(PubAPIs, pubApisKey)},
		{"log", "Lcom/sun/tools/javac/util/Log;", nullptr, $PROTECTED, $field(PubAPIs, log)},
		{"publicApiPerClass", "Ljava/util/Map;", "Ljava/util/Map<Lcom/sun/tools/javac/code/Symbol$ClassSymbol;Lcom/sun/tools/sjavac/pubapi/PubApi;>;", $PROTECTED, $field(PubAPIs, publicApiPerClass)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/util/Context;)V", nullptr, $PRIVATE, $method(PubAPIs, init$, void, $Context*)},
		{"getPubapis", "(Ljava/util/Collection;Z)Ljava/util/Map;", "(Ljava/util/Collection<Ljavax/tools/JavaFileObject;>;Z)Ljava/util/Map<Ljava/lang/String;Lcom/sun/tools/sjavac/pubapi/PubApi;>;", $PUBLIC, $virtualMethod(PubAPIs, getPubapis, $Map*, $Collection*, bool)},
		{"instance", "(Lcom/sun/tools/javac/util/Context;)Lcom/sun/tools/sjavac/comp/PubAPIs;", nullptr, $PUBLIC | $STATIC, $staticMethod(PubAPIs, instance, PubAPIs*, $Context*)},
		{"visitPubapi", "(Ljavax/lang/model/element/Element;)V", nullptr, $PUBLIC, $virtualMethod(PubAPIs, visitPubapi, void, $Element*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.tools.sjavac.comp.PubAPIs",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(PubAPIs, name, initialize, &classInfo$$, PubAPIs::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(PubAPIs);
	});
	return class$;
}

$Class* PubAPIs::class$ = nullptr;

				} // comp
			} // sjavac
		} // tools
	} // sun
} // com