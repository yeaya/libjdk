#include <com/sun/tools/javac/comp/InferenceContext.h>
#include <com/sun/tools/javac/code/Type$TypeVar.h>
#include <com/sun/tools/javac/code/Type$UndetVar$InferenceBound.h>
#include <com/sun/tools/javac/code/Type$UndetVar.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types$TypeMapping.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/comp/Infer$FreeTypeListener.h>
#include <com/sun/tools/javac/comp/Infer$GraphSolver.h>
#include <com/sun/tools/javac/comp/Infer$GraphStrategy.h>
#include <com/sun/tools/javac/comp/Infer$InferenceException.h>
#include <com/sun/tools/javac/comp/Infer$InferenceStep.h>
#include <com/sun/tools/javac/comp/Infer.h>
#include <com/sun/tools/javac/comp/InferenceContext$1.h>
#include <com/sun/tools/javac/comp/InferenceContext$2.h>
#include <com/sun/tools/javac/comp/InferenceContext$3.h>
#include <com/sun/tools/javac/comp/InferenceContext$ReachabilityVisitor.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <com/sun/tools/javac/util/Warner.h>
#include <java/io/Serializable.h>
#include <java/lang/Iterable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/ArrayDeque.h>
#include <java/util/EnumSet.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedHashMap.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/function/Function.h>
#include <java/util/function/Predicate.h>
#include <java/util/stream/Collector.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

#undef EQ
#undef LOWER
#undef UPPER

using $Type$UndetVar$InferenceBoundArray = $Array<::com::sun::tools::javac::code::Type$UndetVar$InferenceBound>;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$TypeVar = ::com::sun::tools::javac::code::Type$TypeVar;
using $Type$UndetVar = ::com::sun::tools::javac::code::Type$UndetVar;
using $Type$UndetVar$InferenceBound = ::com::sun::tools::javac::code::Type$UndetVar$InferenceBound;
using $Infer = ::com::sun::tools::javac::comp::Infer;
using $Infer$FreeTypeListener = ::com::sun::tools::javac::comp::Infer$FreeTypeListener;
using $Infer$GraphSolver = ::com::sun::tools::javac::comp::Infer$GraphSolver;
using $Infer$GraphStrategy = ::com::sun::tools::javac::comp::Infer$GraphStrategy;
using $Infer$InferenceException = ::com::sun::tools::javac::comp::Infer$InferenceException;
using $Infer$InferenceStep = ::com::sun::tools::javac::comp::Infer$InferenceStep;
using $InferenceContext$1 = ::com::sun::tools::javac::comp::InferenceContext$1;
using $InferenceContext$2 = ::com::sun::tools::javac::comp::InferenceContext$2;
using $InferenceContext$3 = ::com::sun::tools::javac::comp::InferenceContext$3;
using $InferenceContext$ReachabilityVisitor = ::com::sun::tools::javac::comp::InferenceContext$ReachabilityVisitor;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $List = ::com::sun::tools::javac::util::List;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $Warner = ::com::sun::tools::javac::util::Warner;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $EnumSet = ::java::util::EnumSet;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $LinkedHashMap = ::java::util::LinkedHashMap;
using $Map$Entry = ::java::util::Map$Entry;
using $Set = ::java::util::Set;
using $Predicate = ::java::util::function::Predicate;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class InferenceContext$$Lambda$lambda$restvars$0 : public $Predicate {
	$class(InferenceContext$$Lambda$lambda$restvars$0, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* uv) override {
		return InferenceContext::lambda$restvars$0($cast($Type$UndetVar, uv));
	}
};
$Class* InferenceContext$$Lambda$lambda$restvars$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(InferenceContext$$Lambda$lambda$restvars$0, init$, void)},
		{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(InferenceContext$$Lambda$lambda$restvars$0, test, bool, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.javac.comp.InferenceContext$$Lambda$lambda$restvars$0",
		"java.lang.Object",
		"java.util.function.Predicate",
		nullptr,
		methodInfos$$
	};
	$loadClass(InferenceContext$$Lambda$lambda$restvars$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InferenceContext$$Lambda$lambda$restvars$0);
	});
	return class$;
}
$Class* InferenceContext$$Lambda$lambda$restvars$0::class$ = nullptr;

class InferenceContext$$Lambda$lambda$instvars$1$1 : public $Predicate {
	$class(InferenceContext$$Lambda$lambda$instvars$1$1, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* uv) override {
		return InferenceContext::lambda$instvars$1($cast($Type$UndetVar, uv));
	}
};
$Class* InferenceContext$$Lambda$lambda$instvars$1$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(InferenceContext$$Lambda$lambda$instvars$1$1, init$, void)},
		{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(InferenceContext$$Lambda$lambda$instvars$1$1, test, bool, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.javac.comp.InferenceContext$$Lambda$lambda$instvars$1$1",
		"java.lang.Object",
		"java.util.function.Predicate",
		nullptr,
		methodInfos$$
	};
	$loadClass(InferenceContext$$Lambda$lambda$instvars$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InferenceContext$$Lambda$lambda$instvars$1$1);
	});
	return class$;
}
$Class* InferenceContext$$Lambda$lambda$instvars$1$1::class$ = nullptr;

class InferenceContext$$Lambda$lambda$boundedVars$2$2 : public $Predicate {
	$class(InferenceContext$$Lambda$lambda$boundedVars$2$2, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* uv) override {
		return InferenceContext::lambda$boundedVars$2($cast($Type$UndetVar, uv));
	}
};
$Class* InferenceContext$$Lambda$lambda$boundedVars$2$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(InferenceContext$$Lambda$lambda$boundedVars$2$2, init$, void)},
		{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(InferenceContext$$Lambda$lambda$boundedVars$2$2, test, bool, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.javac.comp.InferenceContext$$Lambda$lambda$boundedVars$2$2",
		"java.lang.Object",
		"java.util.function.Predicate",
		nullptr,
		methodInfos$$
	};
	$loadClass(InferenceContext$$Lambda$lambda$boundedVars$2$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InferenceContext$$Lambda$lambda$boundedVars$2$2);
	});
	return class$;
}
$Class* InferenceContext$$Lambda$lambda$boundedVars$2$2::class$ = nullptr;

class InferenceContext$$Lambda$lambda$dupTo$3$3 : public $Infer$FreeTypeListener {
	$class(InferenceContext$$Lambda$lambda$dupTo$3$3, $NO_CLASS_INIT, $Infer$FreeTypeListener)
public:
	void init$(InferenceContext* inst) {
		$set(this, inst$, inst);
	}
	virtual void typesInferred(InferenceContext* inferenceContext) override {
		$nc(inst$)->lambda$dupTo$3(inferenceContext);
	}
	InferenceContext* inst$ = nullptr;
};
$Class* InferenceContext$$Lambda$lambda$dupTo$3$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(InferenceContext$$Lambda$lambda$dupTo$3$3, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/InferenceContext;)V", nullptr, $PUBLIC, $method(InferenceContext$$Lambda$lambda$dupTo$3$3, init$, void, InferenceContext*)},
		{"typesInferred", "(Lcom/sun/tools/javac/comp/InferenceContext;)V", nullptr, $PUBLIC, $virtualMethod(InferenceContext$$Lambda$lambda$dupTo$3$3, typesInferred, void, InferenceContext*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.javac.comp.InferenceContext$$Lambda$lambda$dupTo$3$3",
		"java.lang.Object",
		"com.sun.tools.javac.comp.Infer$FreeTypeListener",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(InferenceContext$$Lambda$lambda$dupTo$3$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InferenceContext$$Lambda$lambda$dupTo$3$3);
	});
	return class$;
}
$Class* InferenceContext$$Lambda$lambda$dupTo$3$3::class$ = nullptr;

class InferenceContext$$Lambda$lambda$min$4$4 : public $Predicate {
	$class(InferenceContext$$Lambda$lambda$min$4$4, $NO_CLASS_INIT, $Predicate)
public:
	void init$($List* redundantVars) {
		$set(this, redundantVars, redundantVars);
	}
	virtual bool test(Object$* b) override {
		return InferenceContext::lambda$min$4(redundantVars, $cast($Type, b));
	}
	$List* redundantVars = nullptr;
};
$Class* InferenceContext$$Lambda$lambda$min$4$4::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"redundantVars", "Lcom/sun/tools/javac/util/List;", nullptr, $PUBLIC, $field(InferenceContext$$Lambda$lambda$min$4$4, redundantVars)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/util/List;)V", nullptr, $PUBLIC, $method(InferenceContext$$Lambda$lambda$min$4$4, init$, void, $List*)},
		{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(InferenceContext$$Lambda$lambda$min$4$4, test, bool, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.javac.comp.InferenceContext$$Lambda$lambda$min$4$4",
		"java.lang.Object",
		"java.util.function.Predicate",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(InferenceContext$$Lambda$lambda$min$4$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InferenceContext$$Lambda$lambda$min$4$4);
	});
	return class$;
}
$Class* InferenceContext$$Lambda$lambda$min$4$4::class$ = nullptr;

class InferenceContext$$Lambda$lambda$min$5$5 : public $Infer$FreeTypeListener {
	$class(InferenceContext$$Lambda$lambda$min$5$5, $NO_CLASS_INIT, $Infer$FreeTypeListener)
public:
	void init$(InferenceContext* inst, $Type* t, $InferenceContext$ReachabilityVisitor* rv, $Warner* warn) {
		$set(this, inst$, inst);
		$set(this, t, t);
		$set(this, rv, rv);
		$set(this, warn, warn);
	}
	virtual void typesInferred(InferenceContext* inferenceContext) override {
		$nc(inst$)->lambda$min$5(t, rv, warn, inferenceContext);
	}
	InferenceContext* inst$ = nullptr;
	$Type* t = nullptr;
	$InferenceContext$ReachabilityVisitor* rv = nullptr;
	$Warner* warn = nullptr;
};
$Class* InferenceContext$$Lambda$lambda$min$5$5::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(InferenceContext$$Lambda$lambda$min$5$5, inst$)},
		{"t", "Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $field(InferenceContext$$Lambda$lambda$min$5$5, t)},
		{"rv", "Lcom/sun/tools/javac/comp/InferenceContext$ReachabilityVisitor;", nullptr, $PUBLIC, $field(InferenceContext$$Lambda$lambda$min$5$5, rv)},
		{"warn", "Lcom/sun/tools/javac/util/Warner;", nullptr, $PUBLIC, $field(InferenceContext$$Lambda$lambda$min$5$5, warn)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/InferenceContext;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/comp/InferenceContext$ReachabilityVisitor;Lcom/sun/tools/javac/util/Warner;)V", nullptr, $PUBLIC, $method(InferenceContext$$Lambda$lambda$min$5$5, init$, void, InferenceContext*, $Type*, $InferenceContext$ReachabilityVisitor*, $Warner*)},
		{"typesInferred", "(Lcom/sun/tools/javac/comp/InferenceContext;)V", nullptr, $PUBLIC, $virtualMethod(InferenceContext$$Lambda$lambda$min$5$5, typesInferred, void, InferenceContext*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.javac.comp.InferenceContext$$Lambda$lambda$min$5$5",
		"java.lang.Object",
		"com.sun.tools.javac.comp.Infer$FreeTypeListener",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(InferenceContext$$Lambda$lambda$min$5$5, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InferenceContext$$Lambda$lambda$min$5$5);
	});
	return class$;
}
$Class* InferenceContext$$Lambda$lambda$min$5$5::class$ = nullptr;

class InferenceContext$$Lambda$lambda$min$6$6 : public $Infer$FreeTypeListener {
	$class(InferenceContext$$Lambda$lambda$min$6$6, $NO_CLASS_INIT, $Infer$FreeTypeListener)
public:
	void init$(InferenceContext* inst, $List* unreachableVars, $Warner* warn) {
		$set(this, inst$, inst);
		$set(this, unreachableVars, unreachableVars);
		$set(this, warn, warn);
	}
	virtual void typesInferred(InferenceContext* inferenceContext) override {
		$nc(inst$)->lambda$min$6(unreachableVars, warn, inferenceContext);
	}
	InferenceContext* inst$ = nullptr;
	$List* unreachableVars = nullptr;
	$Warner* warn = nullptr;
};
$Class* InferenceContext$$Lambda$lambda$min$6$6::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(InferenceContext$$Lambda$lambda$min$6$6, inst$)},
		{"unreachableVars", "Lcom/sun/tools/javac/util/List;", nullptr, $PUBLIC, $field(InferenceContext$$Lambda$lambda$min$6$6, unreachableVars)},
		{"warn", "Lcom/sun/tools/javac/util/Warner;", nullptr, $PUBLIC, $field(InferenceContext$$Lambda$lambda$min$6$6, warn)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/InferenceContext;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/Warner;)V", nullptr, $PUBLIC, $method(InferenceContext$$Lambda$lambda$min$6$6, init$, void, InferenceContext*, $List*, $Warner*)},
		{"typesInferred", "(Lcom/sun/tools/javac/comp/InferenceContext;)V", nullptr, $PUBLIC, $virtualMethod(InferenceContext$$Lambda$lambda$min$6$6, typesInferred, void, InferenceContext*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.javac.comp.InferenceContext$$Lambda$lambda$min$6$6",
		"java.lang.Object",
		"com.sun.tools.javac.comp.Infer$FreeTypeListener",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(InferenceContext$$Lambda$lambda$min$6$6, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InferenceContext$$Lambda$lambda$min$6$6);
	});
	return class$;
}
$Class* InferenceContext$$Lambda$lambda$min$6$6::class$ = nullptr;

$Type* InferenceContext::update($Type* t) {
	return t;
}

void InferenceContext::init$($Infer* infer, $List* inferencevars) {
	InferenceContext::init$(infer, inferencevars, $($nc(inferencevars)->map($nc(infer)->fromTypeVarFun)));
}

void InferenceContext::init$($Infer* infer, $List* inferencevars, $List* undetvars) {
	$set(this, freeTypeListeners, $new($LinkedHashMap));
	$set(this, captureTypeCache, $new($HashMap));
	$set(this, inferencevars, inferencevars);
	$set(this, undetvars, undetvars);
	$set(this, infer, infer);
	$set(this, types, $nc(infer)->types);
}

void InferenceContext::addVar($Type$TypeVar* t) {
	$set(this, undetvars, $nc(this->undetvars)->prepend($($nc($nc(this->infer)->fromTypeVarFun)->apply(t))));
	$set(this, inferencevars, $nc(this->inferencevars)->prepend(t));
}

$List* InferenceContext::inferenceVars() {
	return this->inferencevars;
}

$List* InferenceContext::undetVars() {
	return this->undetvars;
}

$List* InferenceContext::restvars() {
	return filterVars($$new(InferenceContext$$Lambda$lambda$restvars$0));
}

$List* InferenceContext::instvars() {
	return filterVars($$new(InferenceContext$$Lambda$lambda$instvars$1$1));
}

$List* InferenceContext::boundedVars() {
	return filterVars($$new(InferenceContext$$Lambda$lambda$boundedVars$2$2));
}

$List* InferenceContext::filterVars($Predicate* fu) {
	$useLocalObjectStack();
	$var($ListBuffer, res, $new($ListBuffer));
	{
		$var($Iterator, i$, $nc(this->undetvars)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Type, t, $cast($Type, i$->next()));
			{
				$var($Type$UndetVar, uv, $cast($Type$UndetVar, t));
				if ($nc(fu)->test(uv)) {
					res->append($nc(uv)->qtype);
				}
			}
		}
	}
	return res->toList();
}

bool InferenceContext::free($Type* t) {
	return $nc(t)->containsAny(this->inferencevars);
}

bool InferenceContext::free($List* ts) {
	$useLocalObjectStack();
	$var($Iterator, i$, $nc(ts)->iterator());
	for (; $nc(i$)->hasNext();) {
		$var($Type, t, $cast($Type, i$->next()));
		if (free(t)) {
			return true;
		}
	}
	return false;
}

$List* InferenceContext::freeVarsIn($Type* t) {
	$useLocalObjectStack();
	$var($ListBuffer, buf, $new($ListBuffer));
	{
		$var($Iterator, i$, $$nc(inferenceVars())->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Type, iv, $cast($Type, i$->next()));
			if ($nc(t)->contains(iv)) {
				buf->add(iv);
			}
		}
	}
	return buf->toList();
}

$List* InferenceContext::freeVarsIn($List* ts) {
	$useLocalObjectStack();
	$var($ListBuffer, buf, $new($ListBuffer));
	{
		$var($Iterator, i$, $nc(ts)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Type, t, $cast($Type, i$->next()));
			{
				buf->appendList($(freeVarsIn(t)));
			}
		}
	}
	$var($ListBuffer, buf2, $new($ListBuffer));
	{
		$var($Iterator, i$, buf->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Type, t, $cast($Type, i$->next()));
			if (!buf2->contains(t)) {
				buf2->add(t);
			}
		}
	}
	return buf2->toList();
}

$Type* InferenceContext::asUndetVar($Type* t) {
	return $nc(this->types)->subst(t, this->inferencevars, this->undetvars);
}

$List* InferenceContext::asUndetVars($List* ts) {
	$useLocalObjectStack();
	$var($ListBuffer, buf, $new($ListBuffer));
	{
		$var($Iterator, i$, $nc(ts)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Type, t, $cast($Type, i$->next()));
			{
				buf->append($(asUndetVar(t)));
			}
		}
	}
	return buf->toList();
}

$List* InferenceContext::instTypes() {
	$useLocalObjectStack();
	$var($ListBuffer, buf, $new($ListBuffer));
	{
		$var($Iterator, i$, $nc(this->undetvars)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Type, t, $cast($Type, i$->next()));
			{
				$var($Type$UndetVar, uv, $cast($Type$UndetVar, t));
				buf->append($nc(uv)->getInst() != nullptr ? $(uv->getInst()) : uv->qtype);
			}
		}
	}
	return buf->toList();
}

$Type* InferenceContext::asInstType($Type* t) {
	return $nc(this->types)->subst(t, this->inferencevars, $(instTypes()));
}

$List* InferenceContext::asInstTypes($List* ts) {
	$useLocalObjectStack();
	$var($ListBuffer, buf, $new($ListBuffer));
	{
		$var($Iterator, i$, $nc(ts)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Type, t, $cast($Type, i$->next()));
			{
				buf->append($(asInstType(t)));
			}
		}
	}
	return buf->toList();
}

void InferenceContext::addFreeTypeListener($List* types, $Infer$FreeTypeListener* ftl) {
	$nc(this->freeTypeListeners)->put(ftl, $(freeVarsIn(types)));
}

void InferenceContext::notifyChange() {
	$useLocalObjectStack();
	notifyChange($($nc(this->inferencevars)->diff($(restvars()))));
}

void InferenceContext::notifyChange($List* inferredVars) {
	$useLocalObjectStack();
	$var($Infer$InferenceException, thrownEx, nullptr);
	{
		$var($Iterator, i$, $$nc($$new($LinkedHashMap, this->freeTypeListeners)->entrySet())->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Map$Entry, entry, $cast($Map$Entry, i$->next()));
			{
				$var($List, var$0, $cast($List, $nc(entry)->getValue()));
				if (!$Type::containsAny(var$0, $($nc(this->inferencevars)->diff(inferredVars)))) {
					try {
						$$sure($Infer$FreeTypeListener, entry->getKey())->typesInferred(this);
						$nc(this->freeTypeListeners)->remove($(entry->getKey()));
					} catch ($Infer$InferenceException& ex) {
						if (thrownEx == nullptr) {
							$assign(thrownEx, ex);
						}
					}
				}
			}
		}
	}
	if (thrownEx != nullptr) {
		$throw(thrownEx);
	}
}

$List* InferenceContext::save() {
	$useLocalObjectStack();
	$var($ListBuffer, buf, $new($ListBuffer));
	{
		$var($Iterator, i$, $nc(this->undetvars)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Type, t, $cast($Type, i$->next()));
			{
				buf->add($($nc($cast($Type$UndetVar, t))->dup($nc(this->infer)->types)));
			}
		}
	}
	return buf->toList();
}

void InferenceContext::rollback($List* saved_undet$renamed) {
	$useLocalObjectStack();
	$var($List, saved_undet, saved_undet$renamed);
	$Assert::check(saved_undet != nullptr);
	$var($ListBuffer, newUndetVars, $new($ListBuffer));
	$var($ListBuffer, newInferenceVars, $new($ListBuffer));
	while (true) {
		bool var$0 = $nc(saved_undet)->nonEmpty();
		if (!(var$0 && $nc(this->undetvars)->nonEmpty())) {
			break;
		}
		{
			$var($Type$UndetVar, uv, $cast($Type$UndetVar, $nc(this->undetvars)->head));
			$var($Type$UndetVar, uv_saved, $cast($Type$UndetVar, saved_undet->head));
			if ($nc(uv)->qtype == $nc(uv_saved)->qtype) {
				uv_saved->dupTo(uv, this->types);
				$set(this, undetvars, $nc(this->undetvars)->tail);
				$assign(saved_undet, saved_undet->tail);
				newUndetVars->add(uv);
				newInferenceVars->add(uv->qtype);
			} else {
				$set(this, undetvars, $nc(this->undetvars)->tail);
			}
		}
	}
	$set(this, undetvars, newUndetVars->toList());
	$set(this, inferencevars, newInferenceVars->toList());
}

void InferenceContext::dupTo(InferenceContext* that) {
	dupTo(that, false);
}

void InferenceContext::dupTo(InferenceContext* that, bool clone) {
	$useLocalObjectStack();
	$set($nc(that), inferencevars, $nc($nc(that)->inferencevars)->appendList($($nc(this->inferencevars)->diff($nc(that)->inferencevars))));
	$var($List, undetsToPropagate, clone ? save() : this->undetvars);
	$set(that, undetvars, $nc(that->undetvars)->appendList($($nc(undetsToPropagate)->diff(that->undetvars))));
	{
		$var($Iterator, i$, $nc(this->inferencevars)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Type, t, $cast($Type, i$->next()));
			{
				$var($Object, var$0, $new(InferenceContext$$Lambda$lambda$dupTo$3$3, this));
				$nc(that->freeTypeListeners)->put(var$0, $($List::of(t)));
			}
		}
	}
}

InferenceContext* InferenceContext::min($List* roots, bool shouldSolve, $Warner* warn) {
	$useLocalObjectStack();
	int32_t var$0 = $nc(roots)->length();
	if (var$0 == $nc(this->inferencevars)->length()) {
		return this;
	}
	$var($InferenceContext$ReachabilityVisitor, rv, $new($InferenceContext$ReachabilityVisitor, this));
	rv->scan(roots);
	int32_t var$1 = $nc(rv->min)->size();
	if (var$1 == $nc(this->inferencevars)->length()) {
		return this;
	}
	$var($List, minVars, $List::from(rv->min));
	$var($List, redundantVars, $nc(this->inferencevars)->diff(minVars));
	$var($ListBuffer, minUndetVars, $new($ListBuffer));
	{
		$var($Iterator, i$, $nc(minVars)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Type, minVar, $cast($Type, i$->next()));
			{
				$var($Type$UndetVar, uv, $cast($Type$UndetVar, asUndetVar(minVar)));
				$Assert::check($nc($nc(uv)->incorporationActions)->isEmpty());
				$var($Type$UndetVar, uv2, uv->dup(this->types));
				{
					$var($Type$UndetVar$InferenceBoundArray, arr$, $Type$UndetVar$InferenceBound::values());
					for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
						$Type$UndetVar$InferenceBound* ib = arr$->get(i$);
						{
							$var($List, newBounds, $cast($List, $$nc($$nc($$nc(uv->getBounds($$new($Type$UndetVar$InferenceBoundArray, {ib})))->stream())->filter($$new(InferenceContext$$Lambda$lambda$min$4$4, redundantVars)))->collect($($List::collector()))));
							$nc(uv2)->setBounds(ib, newBounds);
						}
					}
				}
				minUndetVars->add(uv2);
			}
		}
	}
	$var(InferenceContext, minContext, $new(InferenceContext, this->infer, minVars, $(minUndetVars->toList())));
	{
		$var($Iterator, i$, $nc(minContext->inferencevars)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Type, t, $cast($Type, i$->next()));
			{
				$var($List, var$2, $List::of(t));
				minContext->addFreeTypeListener(var$2, $$new(InferenceContext$$Lambda$lambda$min$5$5, this, t, rv, warn));
			}
		}
	}
	if (shouldSolve) {
		$var($List, unreachableVars, $nc(redundantVars)->diff($($List::from(rv->equiv))));
		minContext->addFreeTypeListener(minVars, $$new(InferenceContext$$Lambda$lambda$min$6$6, this, unreachableVars, warn));
	}
	return minContext;
}

void InferenceContext::solve($Infer$GraphStrategy* ss, $Warner* warn) {
	$var($Infer$GraphSolver, s, $new($Infer$GraphSolver, $nc(this->infer), this, warn));
	s->solve(ss);
}

void InferenceContext::solve($Warner* warn) {
	solve($$new($InferenceContext$1, this, $nc(this->infer)), warn);
}

void InferenceContext::solve($List* vars, $Warner* warn) {
	solve($$new($InferenceContext$2, this, $nc(this->infer), vars, vars), warn);
}

void InferenceContext::solveAny($List* varsToSolve, $Warner* warn) {
	$useLocalObjectStack();
	solve($$new($InferenceContext$3, this, $nc(this->infer), $($nc(varsToSolve)->intersect($(restvars())))), warn);
}

$List* InferenceContext::solveBasic($EnumSet* steps) {
	return solveBasic(this->inferencevars, steps);
}

$List* InferenceContext::solveBasic($List* varsToSolve, $EnumSet* steps) {
	$useLocalObjectStack();
	$var($ListBuffer, solvedVars, $new($ListBuffer));
	{
		$var($Iterator, i$, $$nc($nc(varsToSolve)->intersect($(restvars())))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Type, t, $cast($Type, i$->next()));
			{
				$var($Type$UndetVar, uv, $cast($Type$UndetVar, asUndetVar(t)));
				{
					$var($Iterator, i$, $nc(steps)->iterator());
					for (; $nc(i$)->hasNext();) {
						$Infer$InferenceStep* step = $cast($Infer$InferenceStep, i$->next());
						if ($nc(step)->accepts(uv, this)) {
							$nc(uv)->setInst($(step->solve(uv, this)));
							solvedVars->add(uv->qtype);
							break;
						}
					}
				}
			}
		}
	}
	return solvedVars->toList();
}

void InferenceContext::solveLegacy(bool partial, $Warner* warn, $EnumSet* steps) {
	$useLocalObjectStack();
	while (true) {
		$var($List, solvedVars, solveBasic(steps));
		if ($$nc(restvars())->isEmpty() || partial) {
			break;
		} else if ($nc(solvedVars)->isEmpty()) {
			$nc(this->infer)->instantiateAsUninferredVars($(restvars()), this);
			break;
		} else {
			$var($Iterator, i$, $nc(this->undetvars)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Type, t, $cast($Type, i$->next()));
				{
					$var($Type$UndetVar, uv, $cast($Type$UndetVar, t));
					$nc(uv)->substBounds(solvedVars, $(asInstTypes(solvedVars)), this->types);
				}
			}
		}
	}
	$nc(this->infer)->doIncorporation(this, warn);
}

$String* InferenceContext::toString() {
	return $str({"Inference vars: "_s, this->inferencevars, $$str(u'\n'), "Undet vars: "_s, this->undetvars});
}

$Type* InferenceContext::cachedCapture($JCTree* tree, $Type* t, bool readOnly) {
	$useLocalObjectStack();
	$var($Type, captured, $cast($Type, $nc(this->captureTypeCache)->get(tree)));
	if (captured != nullptr) {
		return captured;
	}
	$var($Type, result, $nc(this->types)->capture(t));
	if (result != t && !readOnly) {
		$nc(this->captureTypeCache)->put(tree, result);
	}
	return result;
}

void InferenceContext::lambda$min$6($List* unreachableVars, $Warner* warn, InferenceContext* inferenceContext) {
	solve(unreachableVars, warn);
	notifyChange();
}

void InferenceContext::lambda$min$5($Type* t, $InferenceContext$ReachabilityVisitor* rv, $Warner* warn, InferenceContext* inferenceContext) {
	$useLocalObjectStack();
	$var($Type, instType, $nc(inferenceContext)->asInstType(t));
	{
		$var($Iterator, i$, $$sure($Set, $nc($nc(rv)->minMap)->get(t))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Type, eq, $cast($Type, i$->next()));
			{
				$$sure($Type$UndetVar, asUndetVar(eq))->setInst(instType);
			}
		}
	}
	$nc(this->infer)->doIncorporation(this, warn);
	notifyChange();
}

bool InferenceContext::lambda$min$4($List* redundantVars, $Type* b) {
	return !$nc(redundantVars)->contains(b);
}

void InferenceContext::lambda$dupTo$3(InferenceContext* inferenceContext) {
	this->notifyChange();
}

bool InferenceContext::lambda$boundedVars$2($Type$UndetVar* uv) {
	$useLocalObjectStack();
	$init($Type$UndetVar$InferenceBound);
	return $$nc($$nc($$nc($nc(uv)->getBounds($$new($Type$UndetVar$InferenceBoundArray, {$Type$UndetVar$InferenceBound::UPPER})))->diff($($nc(uv)->getDeclaredBounds())))->appendList($($nc(uv)->getBounds($$new($Type$UndetVar$InferenceBoundArray, {
		$Type$UndetVar$InferenceBound::EQ,
		$Type$UndetVar$InferenceBound::LOWER
	})))))->nonEmpty();
}

bool InferenceContext::lambda$instvars$1($Type$UndetVar* uv) {
	return $nc(uv)->getInst() != nullptr;
}

bool InferenceContext::lambda$restvars$0($Type$UndetVar* uv) {
	return $nc(uv)->getInst() == nullptr;
}

InferenceContext::InferenceContext() {
}

$Class* InferenceContext::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("com.sun.tools.javac.comp.InferenceContext$$Lambda$lambda$restvars$0")) {
			return InferenceContext$$Lambda$lambda$restvars$0::load$(name, initialize);
		}
		if (name->equals("com.sun.tools.javac.comp.InferenceContext$$Lambda$lambda$instvars$1$1")) {
			return InferenceContext$$Lambda$lambda$instvars$1$1::load$(name, initialize);
		}
		if (name->equals("com.sun.tools.javac.comp.InferenceContext$$Lambda$lambda$boundedVars$2$2")) {
			return InferenceContext$$Lambda$lambda$boundedVars$2$2::load$(name, initialize);
		}
		if (name->equals("com.sun.tools.javac.comp.InferenceContext$$Lambda$lambda$dupTo$3$3")) {
			return InferenceContext$$Lambda$lambda$dupTo$3$3::load$(name, initialize);
		}
		if (name->equals("com.sun.tools.javac.comp.InferenceContext$$Lambda$lambda$min$4$4")) {
			return InferenceContext$$Lambda$lambda$min$4$4::load$(name, initialize);
		}
		if (name->equals("com.sun.tools.javac.comp.InferenceContext$$Lambda$lambda$min$5$5")) {
			return InferenceContext$$Lambda$lambda$min$5$5::load$(name, initialize);
		}
		if (name->equals("com.sun.tools.javac.comp.InferenceContext$$Lambda$lambda$min$6$6")) {
			return InferenceContext$$Lambda$lambda$min$6$6::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"undetvars", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", 0, $field(InferenceContext, undetvars)},
		{"inferencevars", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", 0, $field(InferenceContext, inferencevars)},
		{"freeTypeListeners", "Ljava/util/Map;", "Ljava/util/Map<Lcom/sun/tools/javac/comp/Infer$FreeTypeListener;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;>;", 0, $field(InferenceContext, freeTypeListeners)},
		{"types", "Lcom/sun/tools/javac/code/Types;", nullptr, 0, $field(InferenceContext, types)},
		{"infer", "Lcom/sun/tools/javac/comp/Infer;", nullptr, 0, $field(InferenceContext, infer)},
		{"captureTypeCache", "Ljava/util/Map;", "Ljava/util/Map<Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/code/Type;>;", 0, $field(InferenceContext, captureTypeCache)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/Infer;Lcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/comp/Infer;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)V", $PUBLIC, $method(InferenceContext, init$, void, $Infer*, $List*)},
		{"<init>", "(Lcom/sun/tools/javac/comp/Infer;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/comp/Infer;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)V", $PUBLIC, $method(InferenceContext, init$, void, $Infer*, $List*, $List*)},
		{"addFreeTypeListener", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/comp/Infer$FreeTypeListener;)V", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/comp/Infer$FreeTypeListener;)V", 0, $virtualMethod(InferenceContext, addFreeTypeListener, void, $List*, $Infer$FreeTypeListener*)},
		{"addVar", "(Lcom/sun/tools/javac/code/Type$TypeVar;)V", nullptr, 0, $virtualMethod(InferenceContext, addVar, void, $Type$TypeVar*)},
		{"asInstType", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Type;", nullptr, 0, $virtualMethod(InferenceContext, asInstType, $Type*, $Type*)},
		{"asInstTypes", "(Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", 0, $virtualMethod(InferenceContext, asInstTypes, $List*, $List*)},
		{"asUndetVar", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC | $FINAL, $method(InferenceContext, asUndetVar, $Type*, $Type*)},
		{"asUndetVars", "(Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", $FINAL, $method(InferenceContext, asUndetVars, $List*, $List*)},
		{"boundedVars", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", $FINAL, $method(InferenceContext, boundedVars, $List*)},
		{"cachedCapture", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/code/Type;Z)Lcom/sun/tools/javac/code/Type;", nullptr, 0, $virtualMethod(InferenceContext, cachedCapture, $Type*, $JCTree*, $Type*, bool)},
		{"dupTo", "(Lcom/sun/tools/javac/comp/InferenceContext;)V", nullptr, 0, $virtualMethod(InferenceContext, dupTo, void, InferenceContext*)},
		{"dupTo", "(Lcom/sun/tools/javac/comp/InferenceContext;Z)V", nullptr, 0, $virtualMethod(InferenceContext, dupTo, void, InferenceContext*, bool)},
		{"filterVars", "(Ljava/util/function/Predicate;)Lcom/sun/tools/javac/util/List;", "(Ljava/util/function/Predicate<Lcom/sun/tools/javac/code/Type$UndetVar;>;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", $PRIVATE, $method(InferenceContext, filterVars, $List*, $Predicate*)},
		{"free", "(Lcom/sun/tools/javac/code/Type;)Z", nullptr, $FINAL, $method(InferenceContext, free, bool, $Type*)},
		{"free", "(Lcom/sun/tools/javac/util/List;)Z", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Z", $FINAL, $method(InferenceContext, free, bool, $List*)},
		{"freeVarsIn", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", $FINAL, $method(InferenceContext, freeVarsIn, $List*, $Type*)},
		{"freeVarsIn", "(Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", $FINAL, $method(InferenceContext, freeVarsIn, $List*, $List*)},
		{"inferenceVars", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", 0, $virtualMethod(InferenceContext, inferenceVars, $List*)},
		{"instTypes", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", 0, $virtualMethod(InferenceContext, instTypes, $List*)},
		{"instvars", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", 0, $virtualMethod(InferenceContext, instvars, $List*)},
		{"lambda$boundedVars$2", "(Lcom/sun/tools/javac/code/Type$UndetVar;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(InferenceContext, lambda$boundedVars$2, bool, $Type$UndetVar*)},
		{"lambda$dupTo$3", "(Lcom/sun/tools/javac/comp/InferenceContext;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(InferenceContext, lambda$dupTo$3, void, InferenceContext*)},
		{"lambda$instvars$1", "(Lcom/sun/tools/javac/code/Type$UndetVar;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(InferenceContext, lambda$instvars$1, bool, $Type$UndetVar*)},
		{"lambda$min$4", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/code/Type;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(InferenceContext, lambda$min$4, bool, $List*, $Type*)},
		{"lambda$min$5", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/comp/InferenceContext$ReachabilityVisitor;Lcom/sun/tools/javac/util/Warner;Lcom/sun/tools/javac/comp/InferenceContext;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(InferenceContext, lambda$min$5, void, $Type*, $InferenceContext$ReachabilityVisitor*, $Warner*, InferenceContext*)},
		{"lambda$min$6", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/Warner;Lcom/sun/tools/javac/comp/InferenceContext;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(InferenceContext, lambda$min$6, void, $List*, $Warner*, InferenceContext*)},
		{"lambda$restvars$0", "(Lcom/sun/tools/javac/code/Type$UndetVar;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(InferenceContext, lambda$restvars$0, bool, $Type$UndetVar*)},
		{"min", "(Lcom/sun/tools/javac/util/List;ZLcom/sun/tools/javac/util/Warner;)Lcom/sun/tools/javac/comp/InferenceContext;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;ZLcom/sun/tools/javac/util/Warner;)Lcom/sun/tools/javac/comp/InferenceContext;", 0, $virtualMethod(InferenceContext, min, InferenceContext*, $List*, bool, $Warner*)},
		{"notifyChange", "()V", nullptr, 0, $virtualMethod(InferenceContext, notifyChange, void)},
		{"notifyChange", "(Lcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)V", 0, $virtualMethod(InferenceContext, notifyChange, void, $List*)},
		{"restvars", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", 0, $virtualMethod(InferenceContext, restvars, $List*)},
		{"rollback", "(Lcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)V", $PUBLIC, $virtualMethod(InferenceContext, rollback, void, $List*)},
		{"save", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", $PUBLIC, $virtualMethod(InferenceContext, save, $List*)},
		{"solve", "(Lcom/sun/tools/javac/comp/Infer$GraphStrategy;Lcom/sun/tools/javac/util/Warner;)V", nullptr, $PRIVATE, $method(InferenceContext, solve, void, $Infer$GraphStrategy*, $Warner*)},
		{"solve", "(Lcom/sun/tools/javac/util/Warner;)V", nullptr, $PUBLIC, $virtualMethod(InferenceContext, solve, void, $Warner*)},
		{"solve", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/Warner;)V", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/Warner;)V", $PUBLIC, $virtualMethod(InferenceContext, solve, void, $List*, $Warner*)},
		{"solveAny", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/Warner;)V", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/Warner;)V", $PUBLIC, $virtualMethod(InferenceContext, solveAny, void, $List*, $Warner*)},
		{"solveBasic", "(Ljava/util/EnumSet;)Lcom/sun/tools/javac/util/List;", "(Ljava/util/EnumSet<Lcom/sun/tools/javac/comp/Infer$InferenceStep;>;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", $PRIVATE, $method(InferenceContext, solveBasic, $List*, $EnumSet*)},
		{"solveBasic", "(Lcom/sun/tools/javac/util/List;Ljava/util/EnumSet;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Ljava/util/EnumSet<Lcom/sun/tools/javac/comp/Infer$InferenceStep;>;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", 0, $virtualMethod(InferenceContext, solveBasic, $List*, $List*, $EnumSet*)},
		{"solveLegacy", "(ZLcom/sun/tools/javac/util/Warner;Ljava/util/EnumSet;)V", "(ZLcom/sun/tools/javac/util/Warner;Ljava/util/EnumSet<Lcom/sun/tools/javac/comp/Infer$InferenceStep;>;)V", $PUBLIC, $virtualMethod(InferenceContext, solveLegacy, void, bool, $Warner*, $EnumSet*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(InferenceContext, toString, $String*)},
		{"undetVars", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", $PUBLIC, $virtualMethod(InferenceContext, undetVars, $List*)},
		{"update", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Type;", nullptr, 0, $virtualMethod(InferenceContext, update, $Type*, $Type*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.InferenceContext$ReachabilityVisitor", "com.sun.tools.javac.comp.InferenceContext", "ReachabilityVisitor", 0},
		{"com.sun.tools.javac.comp.InferenceContext$3", nullptr, nullptr, 0},
		{"com.sun.tools.javac.comp.InferenceContext$2", nullptr, nullptr, 0},
		{"com.sun.tools.javac.comp.InferenceContext$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.tools.javac.comp.InferenceContext",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"com.sun.tools.javac.comp.InferenceContext$ReachabilityVisitor,com.sun.tools.javac.comp.InferenceContext$3,com.sun.tools.javac.comp.InferenceContext$2,com.sun.tools.javac.comp.InferenceContext$1"
	};
	$loadClass(InferenceContext, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InferenceContext);
	});
	return class$;
}

$Class* InferenceContext::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com