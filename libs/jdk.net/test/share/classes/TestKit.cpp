#include <TestKit.h>
#include <TestKit$ThrowingFunction.h>
#include <TestKit$ThrowingProcedure.h>
#include <java/io/Serializable.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/AbstractMap$SimpleImmutableEntry.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/Comparator.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/ListIterator.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/Objects.h>
#include <java/util/Set.h>
#include <java/util/function/BiFunction.h>
#include <java/util/function/Function.h>
#include <java/util/function/Predicate.h>
#include <java/util/function/Supplier.h>
#include <java/util/function/UnaryOperator.h>
#include <java/util/regex/Pattern.h>
#include <jcpp.h>

using $TestKit$ThrowingFunction = ::TestKit$ThrowingFunction;
using $TestKit$ThrowingProcedure = ::TestKit$ThrowingProcedure;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $AbstractMap$SimpleImmutableEntry = ::java::util::AbstractMap$SimpleImmutableEntry;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $Comparator = ::java::util::Comparator;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $ListIterator = ::java::util::ListIterator;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $Objects = ::java::util::Objects;
using $Set = ::java::util::Set;
using $BiFunction = ::java::util::function::BiFunction;
using $Function = ::java::util::function::Function;
using $Predicate = ::java::util::function::Predicate;
using $Supplier = ::java::util::function::Supplier;
using $UnaryOperator = ::java::util::function::UnaryOperator;
using $Pattern = ::java::util::regex::Pattern;

class TestKit$$Lambda$lambda$assertNotThrows$0 : public $TestKit$ThrowingFunction {
	$class(TestKit$$Lambda$lambda$assertNotThrows$0, $NO_CLASS_INIT, $TestKit$ThrowingFunction)
public:
	void init$($TestKit$ThrowingProcedure* code) {
		$set(this, code, code);
	}
	virtual $Object* run() override {
		 return TestKit::lambda$assertNotThrows$0(code);
	}
	$TestKit$ThrowingProcedure* code = nullptr;
};
$Class* TestKit$$Lambda$lambda$assertNotThrows$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"code", "LTestKit$ThrowingProcedure;", nullptr, $PUBLIC, $field(TestKit$$Lambda$lambda$assertNotThrows$0, code)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LTestKit$ThrowingProcedure;)V", nullptr, $PUBLIC, $method(TestKit$$Lambda$lambda$assertNotThrows$0, init$, void, $TestKit$ThrowingProcedure*)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(TestKit$$Lambda$lambda$assertNotThrows$0, run, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"TestKit$$Lambda$lambda$assertNotThrows$0",
		"java.lang.Object",
		"TestKit$ThrowingFunction",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TestKit$$Lambda$lambda$assertNotThrows$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestKit$$Lambda$lambda$assertNotThrows$0);
	});
	return class$;
}
$Class* TestKit$$Lambda$lambda$assertNotThrows$0::class$ = nullptr;

class TestKit$$Lambda$lambda$assertUnmodifiableCollection$1$1 : public $Supplier {
	$class(TestKit$$Lambda$lambda$assertUnmodifiableCollection$1$1, $NO_CLASS_INIT, $Supplier)
public:
	void init$() {
	}
	virtual $Object* get() override {
		 return TestKit::lambda$assertUnmodifiableCollection$1();
	}
};
$Class* TestKit$$Lambda$lambda$assertUnmodifiableCollection$1$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TestKit$$Lambda$lambda$assertUnmodifiableCollection$1$1, init$, void)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(TestKit$$Lambda$lambda$assertUnmodifiableCollection$1$1, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"TestKit$$Lambda$lambda$assertUnmodifiableCollection$1$1",
		"java.lang.Object",
		"java.util.function.Supplier",
		nullptr,
		methodInfos$$
	};
	$loadClass(TestKit$$Lambda$lambda$assertUnmodifiableCollection$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestKit$$Lambda$lambda$assertUnmodifiableCollection$1$1);
	});
	return class$;
}
$Class* TestKit$$Lambda$lambda$assertUnmodifiableCollection$1$1::class$ = nullptr;

class TestKit$$Lambda$lambda$assertUnmodifiableCollection$2$2 : public $TestKit$ThrowingProcedure {
	$class(TestKit$$Lambda$lambda$assertUnmodifiableCollection$2$2, $NO_CLASS_INIT, $TestKit$ThrowingProcedure)
public:
	void init$($Collection* collection, Object$* e) {
		$set(this, collection, collection);
		$set(this, e, e);
	}
	virtual void run() override {
		TestKit::lambda$assertUnmodifiableCollection$2(collection, e);
	}
	$Collection* collection = nullptr;
	$Object* e = nullptr;
};
$Class* TestKit$$Lambda$lambda$assertUnmodifiableCollection$2$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"collection", "Ljava/util/Collection;", nullptr, $PUBLIC, $field(TestKit$$Lambda$lambda$assertUnmodifiableCollection$2$2, collection)},
		{"e", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TestKit$$Lambda$lambda$assertUnmodifiableCollection$2$2, e)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/Collection;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(TestKit$$Lambda$lambda$assertUnmodifiableCollection$2$2, init$, void, $Collection*, Object$*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TestKit$$Lambda$lambda$assertUnmodifiableCollection$2$2, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"TestKit$$Lambda$lambda$assertUnmodifiableCollection$2$2",
		"java.lang.Object",
		"TestKit$ThrowingProcedure",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TestKit$$Lambda$lambda$assertUnmodifiableCollection$2$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestKit$$Lambda$lambda$assertUnmodifiableCollection$2$2);
	});
	return class$;
}
$Class* TestKit$$Lambda$lambda$assertUnmodifiableCollection$2$2::class$ = nullptr;

class TestKit$$Lambda$lambda$assertUnmodifiableCollection$3$3 : public $TestKit$ThrowingProcedure {
	$class(TestKit$$Lambda$lambda$assertUnmodifiableCollection$3$3, $NO_CLASS_INIT, $TestKit$ThrowingProcedure)
public:
	void init$($Collection* collection, Object$* e) {
		$set(this, collection, collection);
		$set(this, e, e);
	}
	virtual void run() override {
		TestKit::lambda$assertUnmodifiableCollection$3(collection, e);
	}
	$Collection* collection = nullptr;
	$Object* e = nullptr;
};
$Class* TestKit$$Lambda$lambda$assertUnmodifiableCollection$3$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"collection", "Ljava/util/Collection;", nullptr, $PUBLIC, $field(TestKit$$Lambda$lambda$assertUnmodifiableCollection$3$3, collection)},
		{"e", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TestKit$$Lambda$lambda$assertUnmodifiableCollection$3$3, e)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/Collection;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(TestKit$$Lambda$lambda$assertUnmodifiableCollection$3$3, init$, void, $Collection*, Object$*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TestKit$$Lambda$lambda$assertUnmodifiableCollection$3$3, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"TestKit$$Lambda$lambda$assertUnmodifiableCollection$3$3",
		"java.lang.Object",
		"TestKit$ThrowingProcedure",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TestKit$$Lambda$lambda$assertUnmodifiableCollection$3$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestKit$$Lambda$lambda$assertUnmodifiableCollection$3$3);
	});
	return class$;
}
$Class* TestKit$$Lambda$lambda$assertUnmodifiableCollection$3$3::class$ = nullptr;

class TestKit$$Lambda$remove$4 : public $TestKit$ThrowingProcedure {
	$class(TestKit$$Lambda$remove$4, $NO_CLASS_INIT, $TestKit$ThrowingProcedure)
public:
	void init$($Iterator* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->remove();
	}
	$Iterator* inst$ = nullptr;
};
$Class* TestKit$$Lambda$remove$4::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TestKit$$Lambda$remove$4, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/Iterator;)V", nullptr, $PUBLIC, $method(TestKit$$Lambda$remove$4, init$, void, $Iterator*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TestKit$$Lambda$remove$4, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"TestKit$$Lambda$remove$4",
		"java.lang.Object",
		"TestKit$ThrowingProcedure",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TestKit$$Lambda$remove$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestKit$$Lambda$remove$4);
	});
	return class$;
}
$Class* TestKit$$Lambda$remove$4::class$ = nullptr;

class TestKit$$Lambda$clear$5 : public $TestKit$ThrowingProcedure {
	$class(TestKit$$Lambda$clear$5, $NO_CLASS_INIT, $TestKit$ThrowingProcedure)
public:
	void init$($Collection* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->clear();
	}
	$Collection* inst$ = nullptr;
};
$Class* TestKit$$Lambda$clear$5::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TestKit$$Lambda$clear$5, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/Collection;)V", nullptr, $PUBLIC, $method(TestKit$$Lambda$clear$5, init$, void, $Collection*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TestKit$$Lambda$clear$5, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"TestKit$$Lambda$clear$5",
		"java.lang.Object",
		"TestKit$ThrowingProcedure",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TestKit$$Lambda$clear$5, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestKit$$Lambda$clear$5);
	});
	return class$;
}
$Class* TestKit$$Lambda$clear$5::class$ = nullptr;

class TestKit$$Lambda$lambda$assertUnmodifiableCollection$4$6 : public $TestKit$ThrowingProcedure {
	$class(TestKit$$Lambda$lambda$assertUnmodifiableCollection$4$6, $NO_CLASS_INIT, $TestKit$ThrowingProcedure)
public:
	void init$($Collection* collection, Object$* e) {
		$set(this, collection, collection);
		$set(this, e, e);
	}
	virtual void run() override {
		TestKit::lambda$assertUnmodifiableCollection$4(collection, e);
	}
	$Collection* collection = nullptr;
	$Object* e = nullptr;
};
$Class* TestKit$$Lambda$lambda$assertUnmodifiableCollection$4$6::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"collection", "Ljava/util/Collection;", nullptr, $PUBLIC, $field(TestKit$$Lambda$lambda$assertUnmodifiableCollection$4$6, collection)},
		{"e", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TestKit$$Lambda$lambda$assertUnmodifiableCollection$4$6, e)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/Collection;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(TestKit$$Lambda$lambda$assertUnmodifiableCollection$4$6, init$, void, $Collection*, Object$*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TestKit$$Lambda$lambda$assertUnmodifiableCollection$4$6, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"TestKit$$Lambda$lambda$assertUnmodifiableCollection$4$6",
		"java.lang.Object",
		"TestKit$ThrowingProcedure",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TestKit$$Lambda$lambda$assertUnmodifiableCollection$4$6, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestKit$$Lambda$lambda$assertUnmodifiableCollection$4$6);
	});
	return class$;
}
$Class* TestKit$$Lambda$lambda$assertUnmodifiableCollection$4$6::class$ = nullptr;

class TestKit$$Lambda$lambda$assertUnmodifiableCollection$5$7 : public $TestKit$ThrowingProcedure {
	$class(TestKit$$Lambda$lambda$assertUnmodifiableCollection$5$7, $NO_CLASS_INIT, $TestKit$ThrowingProcedure)
public:
	void init$($Collection* collection, Object$* e) {
		$set(this, collection, collection);
		$set(this, e, e);
	}
	virtual void run() override {
		TestKit::lambda$assertUnmodifiableCollection$5(collection, e);
	}
	$Collection* collection = nullptr;
	$Object* e = nullptr;
};
$Class* TestKit$$Lambda$lambda$assertUnmodifiableCollection$5$7::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"collection", "Ljava/util/Collection;", nullptr, $PUBLIC, $field(TestKit$$Lambda$lambda$assertUnmodifiableCollection$5$7, collection)},
		{"e", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TestKit$$Lambda$lambda$assertUnmodifiableCollection$5$7, e)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/Collection;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(TestKit$$Lambda$lambda$assertUnmodifiableCollection$5$7, init$, void, $Collection*, Object$*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TestKit$$Lambda$lambda$assertUnmodifiableCollection$5$7, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"TestKit$$Lambda$lambda$assertUnmodifiableCollection$5$7",
		"java.lang.Object",
		"TestKit$ThrowingProcedure",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TestKit$$Lambda$lambda$assertUnmodifiableCollection$5$7, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestKit$$Lambda$lambda$assertUnmodifiableCollection$5$7);
	});
	return class$;
}
$Class* TestKit$$Lambda$lambda$assertUnmodifiableCollection$5$7::class$ = nullptr;

class TestKit$$Lambda$lambda$assertUnmodifiableCollection$7$8 : public $TestKit$ThrowingProcedure {
	$class(TestKit$$Lambda$lambda$assertUnmodifiableCollection$7$8, $NO_CLASS_INIT, $TestKit$ThrowingProcedure)
public:
	void init$($Collection* collection) {
		$set(this, collection, collection);
	}
	virtual void run() override {
		TestKit::lambda$assertUnmodifiableCollection$7(collection);
	}
	$Collection* collection = nullptr;
};
$Class* TestKit$$Lambda$lambda$assertUnmodifiableCollection$7$8::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"collection", "Ljava/util/Collection;", nullptr, $PUBLIC, $field(TestKit$$Lambda$lambda$assertUnmodifiableCollection$7$8, collection)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/Collection;)V", nullptr, $PUBLIC, $method(TestKit$$Lambda$lambda$assertUnmodifiableCollection$7$8, init$, void, $Collection*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TestKit$$Lambda$lambda$assertUnmodifiableCollection$7$8, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"TestKit$$Lambda$lambda$assertUnmodifiableCollection$7$8",
		"java.lang.Object",
		"TestKit$ThrowingProcedure",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TestKit$$Lambda$lambda$assertUnmodifiableCollection$7$8, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestKit$$Lambda$lambda$assertUnmodifiableCollection$7$8);
	});
	return class$;
}
$Class* TestKit$$Lambda$lambda$assertUnmodifiableCollection$7$8::class$ = nullptr;

class TestKit$$Lambda$lambda$assertUnmodifiableCollection$8$9 : public $TestKit$ThrowingProcedure {
	$class(TestKit$$Lambda$lambda$assertUnmodifiableCollection$8$9, $NO_CLASS_INIT, $TestKit$ThrowingProcedure)
public:
	void init$($Collection* collection) {
		$set(this, collection, collection);
	}
	virtual void run() override {
		TestKit::lambda$assertUnmodifiableCollection$8(collection);
	}
	$Collection* collection = nullptr;
};
$Class* TestKit$$Lambda$lambda$assertUnmodifiableCollection$8$9::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"collection", "Ljava/util/Collection;", nullptr, $PUBLIC, $field(TestKit$$Lambda$lambda$assertUnmodifiableCollection$8$9, collection)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/Collection;)V", nullptr, $PUBLIC, $method(TestKit$$Lambda$lambda$assertUnmodifiableCollection$8$9, init$, void, $Collection*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TestKit$$Lambda$lambda$assertUnmodifiableCollection$8$9, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"TestKit$$Lambda$lambda$assertUnmodifiableCollection$8$9",
		"java.lang.Object",
		"TestKit$ThrowingProcedure",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TestKit$$Lambda$lambda$assertUnmodifiableCollection$8$9, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestKit$$Lambda$lambda$assertUnmodifiableCollection$8$9);
	});
	return class$;
}
$Class* TestKit$$Lambda$lambda$assertUnmodifiableCollection$8$9::class$ = nullptr;

class TestKit$$Lambda$lambda$assertUnmodifiableList$11$10 : public $TestKit$ThrowingProcedure {
	$class(TestKit$$Lambda$lambda$assertUnmodifiableList$11$10, $NO_CLASS_INIT, $TestKit$ThrowingProcedure)
public:
	void init$($List* list, Object$* e) {
		$set(this, list, list);
		$set(this, e, e);
	}
	virtual void run() override {
		TestKit::lambda$assertUnmodifiableList$11(list, e);
	}
	$List* list = nullptr;
	$Object* e = nullptr;
};
$Class* TestKit$$Lambda$lambda$assertUnmodifiableList$11$10::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"list", "Ljava/util/List;", nullptr, $PUBLIC, $field(TestKit$$Lambda$lambda$assertUnmodifiableList$11$10, list)},
		{"e", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TestKit$$Lambda$lambda$assertUnmodifiableList$11$10, e)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/List;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(TestKit$$Lambda$lambda$assertUnmodifiableList$11$10, init$, void, $List*, Object$*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TestKit$$Lambda$lambda$assertUnmodifiableList$11$10, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"TestKit$$Lambda$lambda$assertUnmodifiableList$11$10",
		"java.lang.Object",
		"TestKit$ThrowingProcedure",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TestKit$$Lambda$lambda$assertUnmodifiableList$11$10, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestKit$$Lambda$lambda$assertUnmodifiableList$11$10);
	});
	return class$;
}
$Class* TestKit$$Lambda$lambda$assertUnmodifiableList$11$10::class$ = nullptr;

class TestKit$$Lambda$lambda$assertUnmodifiableList$12$11 : public $TestKit$ThrowingProcedure {
	$class(TestKit$$Lambda$lambda$assertUnmodifiableList$12$11, $NO_CLASS_INIT, $TestKit$ThrowingProcedure)
public:
	void init$($List* list, Object$* e) {
		$set(this, list, list);
		$set(this, e, e);
	}
	virtual void run() override {
		TestKit::lambda$assertUnmodifiableList$12(list, e);
	}
	$List* list = nullptr;
	$Object* e = nullptr;
};
$Class* TestKit$$Lambda$lambda$assertUnmodifiableList$12$11::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"list", "Ljava/util/List;", nullptr, $PUBLIC, $field(TestKit$$Lambda$lambda$assertUnmodifiableList$12$11, list)},
		{"e", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TestKit$$Lambda$lambda$assertUnmodifiableList$12$11, e)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/List;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(TestKit$$Lambda$lambda$assertUnmodifiableList$12$11, init$, void, $List*, Object$*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TestKit$$Lambda$lambda$assertUnmodifiableList$12$11, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"TestKit$$Lambda$lambda$assertUnmodifiableList$12$11",
		"java.lang.Object",
		"TestKit$ThrowingProcedure",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TestKit$$Lambda$lambda$assertUnmodifiableList$12$11, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestKit$$Lambda$lambda$assertUnmodifiableList$12$11);
	});
	return class$;
}
$Class* TestKit$$Lambda$lambda$assertUnmodifiableList$12$11::class$ = nullptr;

class TestKit$$Lambda$remove$12 : public $TestKit$ThrowingProcedure {
	$class(TestKit$$Lambda$remove$12, $NO_CLASS_INIT, $TestKit$ThrowingProcedure)
public:
	void init$($ListIterator* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->remove();
	}
	$ListIterator* inst$ = nullptr;
};
$Class* TestKit$$Lambda$remove$12::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TestKit$$Lambda$remove$12, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/ListIterator;)V", nullptr, $PUBLIC, $method(TestKit$$Lambda$remove$12, init$, void, $ListIterator*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TestKit$$Lambda$remove$12, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"TestKit$$Lambda$remove$12",
		"java.lang.Object",
		"TestKit$ThrowingProcedure",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TestKit$$Lambda$remove$12, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestKit$$Lambda$remove$12);
	});
	return class$;
}
$Class* TestKit$$Lambda$remove$12::class$ = nullptr;

class TestKit$$Lambda$lambda$assertUnmodifiableList$13$13 : public $TestKit$ThrowingProcedure {
	$class(TestKit$$Lambda$lambda$assertUnmodifiableList$13$13, $NO_CLASS_INIT, $TestKit$ThrowingProcedure)
public:
	void init$($ListIterator* i, Object$* e) {
		$set(this, i, i);
		$set(this, e, e);
	}
	virtual void run() override {
		TestKit::lambda$assertUnmodifiableList$13(i, e);
	}
	$ListIterator* i = nullptr;
	$Object* e = nullptr;
};
$Class* TestKit$$Lambda$lambda$assertUnmodifiableList$13$13::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"i", "Ljava/util/ListIterator;", nullptr, $PUBLIC, $field(TestKit$$Lambda$lambda$assertUnmodifiableList$13$13, i)},
		{"e", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TestKit$$Lambda$lambda$assertUnmodifiableList$13$13, e)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/ListIterator;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(TestKit$$Lambda$lambda$assertUnmodifiableList$13$13, init$, void, $ListIterator*, Object$*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TestKit$$Lambda$lambda$assertUnmodifiableList$13$13, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"TestKit$$Lambda$lambda$assertUnmodifiableList$13$13",
		"java.lang.Object",
		"TestKit$ThrowingProcedure",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TestKit$$Lambda$lambda$assertUnmodifiableList$13$13, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestKit$$Lambda$lambda$assertUnmodifiableList$13$13);
	});
	return class$;
}
$Class* TestKit$$Lambda$lambda$assertUnmodifiableList$13$13::class$ = nullptr;

class TestKit$$Lambda$lambda$assertUnmodifiableList$14$14 : public $TestKit$ThrowingProcedure {
	$class(TestKit$$Lambda$lambda$assertUnmodifiableList$14$14, $NO_CLASS_INIT, $TestKit$ThrowingProcedure)
public:
	void init$($ListIterator* i, Object$* e) {
		$set(this, i, i);
		$set(this, e, e);
	}
	virtual void run() override {
		TestKit::lambda$assertUnmodifiableList$14(i, e);
	}
	$ListIterator* i = nullptr;
	$Object* e = nullptr;
};
$Class* TestKit$$Lambda$lambda$assertUnmodifiableList$14$14::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"i", "Ljava/util/ListIterator;", nullptr, $PUBLIC, $field(TestKit$$Lambda$lambda$assertUnmodifiableList$14$14, i)},
		{"e", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TestKit$$Lambda$lambda$assertUnmodifiableList$14$14, e)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/ListIterator;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(TestKit$$Lambda$lambda$assertUnmodifiableList$14$14, init$, void, $ListIterator*, Object$*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TestKit$$Lambda$lambda$assertUnmodifiableList$14$14, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"TestKit$$Lambda$lambda$assertUnmodifiableList$14$14",
		"java.lang.Object",
		"TestKit$ThrowingProcedure",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TestKit$$Lambda$lambda$assertUnmodifiableList$14$14, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestKit$$Lambda$lambda$assertUnmodifiableList$14$14);
	});
	return class$;
}
$Class* TestKit$$Lambda$lambda$assertUnmodifiableList$14$14::class$ = nullptr;

class TestKit$$Lambda$lambda$assertUnmodifiableList$15$15 : public $TestKit$ThrowingProcedure {
	$class(TestKit$$Lambda$lambda$assertUnmodifiableList$15$15, $NO_CLASS_INIT, $TestKit$ThrowingProcedure)
public:
	void init$($List* list) {
		$set(this, list, list);
	}
	virtual void run() override {
		TestKit::lambda$assertUnmodifiableList$15(list);
	}
	$List* list = nullptr;
};
$Class* TestKit$$Lambda$lambda$assertUnmodifiableList$15$15::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"list", "Ljava/util/List;", nullptr, $PUBLIC, $field(TestKit$$Lambda$lambda$assertUnmodifiableList$15$15, list)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/List;)V", nullptr, $PUBLIC, $method(TestKit$$Lambda$lambda$assertUnmodifiableList$15$15, init$, void, $List*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TestKit$$Lambda$lambda$assertUnmodifiableList$15$15, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"TestKit$$Lambda$lambda$assertUnmodifiableList$15$15",
		"java.lang.Object",
		"TestKit$ThrowingProcedure",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TestKit$$Lambda$lambda$assertUnmodifiableList$15$15, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestKit$$Lambda$lambda$assertUnmodifiableList$15$15);
	});
	return class$;
}
$Class* TestKit$$Lambda$lambda$assertUnmodifiableList$15$15::class$ = nullptr;

class TestKit$$Lambda$lambda$assertUnmodifiableList$17$16 : public $TestKit$ThrowingProcedure {
	$class(TestKit$$Lambda$lambda$assertUnmodifiableList$17$16, $NO_CLASS_INIT, $TestKit$ThrowingProcedure)
public:
	void init$($List* list, Object$* e) {
		$set(this, list, list);
		$set(this, e, e);
	}
	virtual void run() override {
		TestKit::lambda$assertUnmodifiableList$17(list, e);
	}
	$List* list = nullptr;
	$Object* e = nullptr;
};
$Class* TestKit$$Lambda$lambda$assertUnmodifiableList$17$16::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"list", "Ljava/util/List;", nullptr, $PUBLIC, $field(TestKit$$Lambda$lambda$assertUnmodifiableList$17$16, list)},
		{"e", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TestKit$$Lambda$lambda$assertUnmodifiableList$17$16, e)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/List;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(TestKit$$Lambda$lambda$assertUnmodifiableList$17$16, init$, void, $List*, Object$*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TestKit$$Lambda$lambda$assertUnmodifiableList$17$16, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"TestKit$$Lambda$lambda$assertUnmodifiableList$17$16",
		"java.lang.Object",
		"TestKit$ThrowingProcedure",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TestKit$$Lambda$lambda$assertUnmodifiableList$17$16, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestKit$$Lambda$lambda$assertUnmodifiableList$17$16);
	});
	return class$;
}
$Class* TestKit$$Lambda$lambda$assertUnmodifiableList$17$16::class$ = nullptr;

class TestKit$$Lambda$lambda$assertUnmodifiableList$18$17 : public $TestKit$ThrowingProcedure {
	$class(TestKit$$Lambda$lambda$assertUnmodifiableList$18$17, $NO_CLASS_INIT, $TestKit$ThrowingProcedure)
public:
	void init$($List* list, Object$* e) {
		$set(this, list, list);
		$set(this, e, e);
	}
	virtual void run() override {
		TestKit::lambda$assertUnmodifiableList$18(list, e);
	}
	$List* list = nullptr;
	$Object* e = nullptr;
};
$Class* TestKit$$Lambda$lambda$assertUnmodifiableList$18$17::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"list", "Ljava/util/List;", nullptr, $PUBLIC, $field(TestKit$$Lambda$lambda$assertUnmodifiableList$18$17, list)},
		{"e", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TestKit$$Lambda$lambda$assertUnmodifiableList$18$17, e)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/List;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(TestKit$$Lambda$lambda$assertUnmodifiableList$18$17, init$, void, $List*, Object$*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TestKit$$Lambda$lambda$assertUnmodifiableList$18$17, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"TestKit$$Lambda$lambda$assertUnmodifiableList$18$17",
		"java.lang.Object",
		"TestKit$ThrowingProcedure",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TestKit$$Lambda$lambda$assertUnmodifiableList$18$17, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestKit$$Lambda$lambda$assertUnmodifiableList$18$17);
	});
	return class$;
}
$Class* TestKit$$Lambda$lambda$assertUnmodifiableList$18$17::class$ = nullptr;

class TestKit$$Lambda$lambda$assertUnmodifiableList$19$18 : public $Comparator {
	$class(TestKit$$Lambda$lambda$assertUnmodifiableList$19$18, $NO_CLASS_INIT, $Comparator)
public:
	void init$() {
	}
	virtual int32_t compare(Object$* a, Object$* b) override {
		 return TestKit::lambda$assertUnmodifiableList$19(a, b);
	}
};
$Class* TestKit$$Lambda$lambda$assertUnmodifiableList$19$18::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TestKit$$Lambda$lambda$assertUnmodifiableList$19$18, init$, void)},
		{"compare", "(Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $PUBLIC, $virtualMethod(TestKit$$Lambda$lambda$assertUnmodifiableList$19$18, compare, int32_t, Object$*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"TestKit$$Lambda$lambda$assertUnmodifiableList$19$18",
		"java.lang.Object",
		"java.util.Comparator",
		nullptr,
		methodInfos$$
	};
	$loadClass(TestKit$$Lambda$lambda$assertUnmodifiableList$19$18, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestKit$$Lambda$lambda$assertUnmodifiableList$19$18);
	});
	return class$;
}
$Class* TestKit$$Lambda$lambda$assertUnmodifiableList$19$18::class$ = nullptr;

class TestKit$$Lambda$lambda$assertUnmodifiableList$20$19 : public $TestKit$ThrowingProcedure {
	$class(TestKit$$Lambda$lambda$assertUnmodifiableList$20$19, $NO_CLASS_INIT, $TestKit$ThrowingProcedure)
public:
	void init$($List* list, $Comparator* comparator) {
		$set(this, list, list);
		$set(this, comparator, comparator);
	}
	virtual void run() override {
		TestKit::lambda$assertUnmodifiableList$20(list, comparator);
	}
	$List* list = nullptr;
	$Comparator* comparator = nullptr;
};
$Class* TestKit$$Lambda$lambda$assertUnmodifiableList$20$19::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"list", "Ljava/util/List;", nullptr, $PUBLIC, $field(TestKit$$Lambda$lambda$assertUnmodifiableList$20$19, list)},
		{"comparator", "Ljava/util/Comparator;", nullptr, $PUBLIC, $field(TestKit$$Lambda$lambda$assertUnmodifiableList$20$19, comparator)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/List;Ljava/util/Comparator;)V", nullptr, $PUBLIC, $method(TestKit$$Lambda$lambda$assertUnmodifiableList$20$19, init$, void, $List*, $Comparator*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TestKit$$Lambda$lambda$assertUnmodifiableList$20$19, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"TestKit$$Lambda$lambda$assertUnmodifiableList$20$19",
		"java.lang.Object",
		"TestKit$ThrowingProcedure",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TestKit$$Lambda$lambda$assertUnmodifiableList$20$19, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestKit$$Lambda$lambda$assertUnmodifiableList$20$19);
	});
	return class$;
}
$Class* TestKit$$Lambda$lambda$assertUnmodifiableList$20$19::class$ = nullptr;

class TestKit$$Lambda$lambda$assertUnmodifiableMap$21$20 : public $Supplier {
	$class(TestKit$$Lambda$lambda$assertUnmodifiableMap$21$20, $NO_CLASS_INIT, $Supplier)
public:
	void init$() {
	}
	virtual $Object* get() override {
		 return TestKit::lambda$assertUnmodifiableMap$21();
	}
};
$Class* TestKit$$Lambda$lambda$assertUnmodifiableMap$21$20::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TestKit$$Lambda$lambda$assertUnmodifiableMap$21$20, init$, void)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(TestKit$$Lambda$lambda$assertUnmodifiableMap$21$20, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"TestKit$$Lambda$lambda$assertUnmodifiableMap$21$20",
		"java.lang.Object",
		"java.util.function.Supplier",
		nullptr,
		methodInfos$$
	};
	$loadClass(TestKit$$Lambda$lambda$assertUnmodifiableMap$21$20, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestKit$$Lambda$lambda$assertUnmodifiableMap$21$20);
	});
	return class$;
}
$Class* TestKit$$Lambda$lambda$assertUnmodifiableMap$21$20::class$ = nullptr;

class TestKit$$Lambda$clear$21 : public $TestKit$ThrowingProcedure {
	$class(TestKit$$Lambda$clear$21, $NO_CLASS_INIT, $TestKit$ThrowingProcedure)
public:
	void init$($Map* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->clear();
	}
	$Map* inst$ = nullptr;
};
$Class* TestKit$$Lambda$clear$21::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TestKit$$Lambda$clear$21, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/Map;)V", nullptr, $PUBLIC, $method(TestKit$$Lambda$clear$21, init$, void, $Map*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TestKit$$Lambda$clear$21, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"TestKit$$Lambda$clear$21",
		"java.lang.Object",
		"TestKit$ThrowingProcedure",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TestKit$$Lambda$clear$21, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestKit$$Lambda$clear$21);
	});
	return class$;
}
$Class* TestKit$$Lambda$clear$21::class$ = nullptr;

class TestKit$$Lambda$lambda$assertUnmodifiableMap$23$22 : public $TestKit$ThrowingProcedure {
	$class(TestKit$$Lambda$lambda$assertUnmodifiableMap$23$22, $NO_CLASS_INIT, $TestKit$ThrowingProcedure)
public:
	void init$($Map* map, Object$* k, Object$* v) {
		$set(this, map, map);
		$set(this, k, k);
		$set(this, v, v);
	}
	virtual void run() override {
		TestKit::lambda$assertUnmodifiableMap$23(map, k, v);
	}
	$Map* map = nullptr;
	$Object* k = nullptr;
	$Object* v = nullptr;
};
$Class* TestKit$$Lambda$lambda$assertUnmodifiableMap$23$22::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"map", "Ljava/util/Map;", nullptr, $PUBLIC, $field(TestKit$$Lambda$lambda$assertUnmodifiableMap$23$22, map)},
		{"k", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TestKit$$Lambda$lambda$assertUnmodifiableMap$23$22, k)},
		{"v", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TestKit$$Lambda$lambda$assertUnmodifiableMap$23$22, v)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/Map;Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(TestKit$$Lambda$lambda$assertUnmodifiableMap$23$22, init$, void, $Map*, Object$*, Object$*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TestKit$$Lambda$lambda$assertUnmodifiableMap$23$22, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"TestKit$$Lambda$lambda$assertUnmodifiableMap$23$22",
		"java.lang.Object",
		"TestKit$ThrowingProcedure",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TestKit$$Lambda$lambda$assertUnmodifiableMap$23$22, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestKit$$Lambda$lambda$assertUnmodifiableMap$23$22);
	});
	return class$;
}
$Class* TestKit$$Lambda$lambda$assertUnmodifiableMap$23$22::class$ = nullptr;

class TestKit$$Lambda$lambda$assertUnmodifiableMap$25$23 : public $TestKit$ThrowingProcedure {
	$class(TestKit$$Lambda$lambda$assertUnmodifiableMap$25$23, $NO_CLASS_INIT, $TestKit$ThrowingProcedure)
public:
	void init$($Map* map, Object$* k, Object$* v) {
		$set(this, map, map);
		$set(this, k, k);
		$set(this, v, v);
	}
	virtual void run() override {
		TestKit::lambda$assertUnmodifiableMap$25(map, k, v);
	}
	$Map* map = nullptr;
	$Object* k = nullptr;
	$Object* v = nullptr;
};
$Class* TestKit$$Lambda$lambda$assertUnmodifiableMap$25$23::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"map", "Ljava/util/Map;", nullptr, $PUBLIC, $field(TestKit$$Lambda$lambda$assertUnmodifiableMap$25$23, map)},
		{"k", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TestKit$$Lambda$lambda$assertUnmodifiableMap$25$23, k)},
		{"v", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TestKit$$Lambda$lambda$assertUnmodifiableMap$25$23, v)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/Map;Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(TestKit$$Lambda$lambda$assertUnmodifiableMap$25$23, init$, void, $Map*, Object$*, Object$*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TestKit$$Lambda$lambda$assertUnmodifiableMap$25$23, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"TestKit$$Lambda$lambda$assertUnmodifiableMap$25$23",
		"java.lang.Object",
		"TestKit$ThrowingProcedure",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TestKit$$Lambda$lambda$assertUnmodifiableMap$25$23, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestKit$$Lambda$lambda$assertUnmodifiableMap$25$23);
	});
	return class$;
}
$Class* TestKit$$Lambda$lambda$assertUnmodifiableMap$25$23::class$ = nullptr;

class TestKit$$Lambda$lambda$assertUnmodifiableMap$27$24 : public $TestKit$ThrowingProcedure {
	$class(TestKit$$Lambda$lambda$assertUnmodifiableMap$27$24, $NO_CLASS_INIT, $TestKit$ThrowingProcedure)
public:
	void init$($Map* map, Object$* k, Object$* v) {
		$set(this, map, map);
		$set(this, k, k);
		$set(this, v, v);
	}
	virtual void run() override {
		TestKit::lambda$assertUnmodifiableMap$27(map, k, v);
	}
	$Map* map = nullptr;
	$Object* k = nullptr;
	$Object* v = nullptr;
};
$Class* TestKit$$Lambda$lambda$assertUnmodifiableMap$27$24::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"map", "Ljava/util/Map;", nullptr, $PUBLIC, $field(TestKit$$Lambda$lambda$assertUnmodifiableMap$27$24, map)},
		{"k", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TestKit$$Lambda$lambda$assertUnmodifiableMap$27$24, k)},
		{"v", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TestKit$$Lambda$lambda$assertUnmodifiableMap$27$24, v)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/Map;Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(TestKit$$Lambda$lambda$assertUnmodifiableMap$27$24, init$, void, $Map*, Object$*, Object$*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TestKit$$Lambda$lambda$assertUnmodifiableMap$27$24, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"TestKit$$Lambda$lambda$assertUnmodifiableMap$27$24",
		"java.lang.Object",
		"TestKit$ThrowingProcedure",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TestKit$$Lambda$lambda$assertUnmodifiableMap$27$24, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestKit$$Lambda$lambda$assertUnmodifiableMap$27$24);
	});
	return class$;
}
$Class* TestKit$$Lambda$lambda$assertUnmodifiableMap$27$24::class$ = nullptr;

class TestKit$$Lambda$lambda$assertUnmodifiableMap$28$25 : public $TestKit$ThrowingProcedure {
	$class(TestKit$$Lambda$lambda$assertUnmodifiableMap$28$25, $NO_CLASS_INIT, $TestKit$ThrowingProcedure)
public:
	void init$($Map$Entry* e) {
		$set(this, e, e);
	}
	virtual void run() override {
		TestKit::lambda$assertUnmodifiableMap$28(e);
	}
	$Map$Entry* e = nullptr;
};
$Class* TestKit$$Lambda$lambda$assertUnmodifiableMap$28$25::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"e", "Ljava/util/Map$Entry;", nullptr, $PUBLIC, $field(TestKit$$Lambda$lambda$assertUnmodifiableMap$28$25, e)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/Map$Entry;)V", nullptr, $PUBLIC, $method(TestKit$$Lambda$lambda$assertUnmodifiableMap$28$25, init$, void, $Map$Entry*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TestKit$$Lambda$lambda$assertUnmodifiableMap$28$25, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"TestKit$$Lambda$lambda$assertUnmodifiableMap$28$25",
		"java.lang.Object",
		"TestKit$ThrowingProcedure",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TestKit$$Lambda$lambda$assertUnmodifiableMap$28$25, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestKit$$Lambda$lambda$assertUnmodifiableMap$28$25);
	});
	return class$;
}
$Class* TestKit$$Lambda$lambda$assertUnmodifiableMap$28$25::class$ = nullptr;

class TestKit$$Lambda$lambda$assertUnmodifiableMap$30$26 : public $TestKit$ThrowingProcedure {
	$class(TestKit$$Lambda$lambda$assertUnmodifiableMap$30$26, $NO_CLASS_INIT, $TestKit$ThrowingProcedure)
public:
	void init$($Map* map, Object$* k, Object$* v) {
		$set(this, map, map);
		$set(this, k, k);
		$set(this, v, v);
	}
	virtual void run() override {
		TestKit::lambda$assertUnmodifiableMap$30(map, k, v);
	}
	$Map* map = nullptr;
	$Object* k = nullptr;
	$Object* v = nullptr;
};
$Class* TestKit$$Lambda$lambda$assertUnmodifiableMap$30$26::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"map", "Ljava/util/Map;", nullptr, $PUBLIC, $field(TestKit$$Lambda$lambda$assertUnmodifiableMap$30$26, map)},
		{"k", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TestKit$$Lambda$lambda$assertUnmodifiableMap$30$26, k)},
		{"v", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TestKit$$Lambda$lambda$assertUnmodifiableMap$30$26, v)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/Map;Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(TestKit$$Lambda$lambda$assertUnmodifiableMap$30$26, init$, void, $Map*, Object$*, Object$*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TestKit$$Lambda$lambda$assertUnmodifiableMap$30$26, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"TestKit$$Lambda$lambda$assertUnmodifiableMap$30$26",
		"java.lang.Object",
		"TestKit$ThrowingProcedure",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TestKit$$Lambda$lambda$assertUnmodifiableMap$30$26, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestKit$$Lambda$lambda$assertUnmodifiableMap$30$26);
	});
	return class$;
}
$Class* TestKit$$Lambda$lambda$assertUnmodifiableMap$30$26::class$ = nullptr;

class TestKit$$Lambda$lambda$assertUnmodifiableMap$31$27 : public $TestKit$ThrowingProcedure {
	$class(TestKit$$Lambda$lambda$assertUnmodifiableMap$31$27, $NO_CLASS_INIT, $TestKit$ThrowingProcedure)
public:
	void init$($Map* map, Object$* k, Object$* v) {
		$set(this, map, map);
		$set(this, k, k);
		$set(this, v, v);
	}
	virtual void run() override {
		TestKit::lambda$assertUnmodifiableMap$31(map, k, v);
	}
	$Map* map = nullptr;
	$Object* k = nullptr;
	$Object* v = nullptr;
};
$Class* TestKit$$Lambda$lambda$assertUnmodifiableMap$31$27::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"map", "Ljava/util/Map;", nullptr, $PUBLIC, $field(TestKit$$Lambda$lambda$assertUnmodifiableMap$31$27, map)},
		{"k", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TestKit$$Lambda$lambda$assertUnmodifiableMap$31$27, k)},
		{"v", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TestKit$$Lambda$lambda$assertUnmodifiableMap$31$27, v)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/Map;Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(TestKit$$Lambda$lambda$assertUnmodifiableMap$31$27, init$, void, $Map*, Object$*, Object$*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TestKit$$Lambda$lambda$assertUnmodifiableMap$31$27, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"TestKit$$Lambda$lambda$assertUnmodifiableMap$31$27",
		"java.lang.Object",
		"TestKit$ThrowingProcedure",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TestKit$$Lambda$lambda$assertUnmodifiableMap$31$27, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestKit$$Lambda$lambda$assertUnmodifiableMap$31$27);
	});
	return class$;
}
$Class* TestKit$$Lambda$lambda$assertUnmodifiableMap$31$27::class$ = nullptr;

class TestKit$$Lambda$lambda$assertUnmodifiableMap$32$28 : public $TestKit$ThrowingProcedure {
	$class(TestKit$$Lambda$lambda$assertUnmodifiableMap$32$28, $NO_CLASS_INIT, $TestKit$ThrowingProcedure)
public:
	void init$($Map* map, $Map* m) {
		$set(this, map, map);
		$set(this, m, m);
	}
	virtual void run() override {
		TestKit::lambda$assertUnmodifiableMap$32(map, m);
	}
	$Map* map = nullptr;
	$Map* m = nullptr;
};
$Class* TestKit$$Lambda$lambda$assertUnmodifiableMap$32$28::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"map", "Ljava/util/Map;", nullptr, $PUBLIC, $field(TestKit$$Lambda$lambda$assertUnmodifiableMap$32$28, map)},
		{"m", "Ljava/util/Map;", nullptr, $PUBLIC, $field(TestKit$$Lambda$lambda$assertUnmodifiableMap$32$28, m)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/Map;Ljava/util/Map;)V", nullptr, $PUBLIC, $method(TestKit$$Lambda$lambda$assertUnmodifiableMap$32$28, init$, void, $Map*, $Map*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TestKit$$Lambda$lambda$assertUnmodifiableMap$32$28, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"TestKit$$Lambda$lambda$assertUnmodifiableMap$32$28",
		"java.lang.Object",
		"TestKit$ThrowingProcedure",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TestKit$$Lambda$lambda$assertUnmodifiableMap$32$28, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestKit$$Lambda$lambda$assertUnmodifiableMap$32$28);
	});
	return class$;
}
$Class* TestKit$$Lambda$lambda$assertUnmodifiableMap$32$28::class$ = nullptr;

class TestKit$$Lambda$lambda$assertUnmodifiableMap$33$29 : public $TestKit$ThrowingProcedure {
	$class(TestKit$$Lambda$lambda$assertUnmodifiableMap$33$29, $NO_CLASS_INIT, $TestKit$ThrowingProcedure)
public:
	void init$($Map* map, Object$* k, Object$* v) {
		$set(this, map, map);
		$set(this, k, k);
		$set(this, v, v);
	}
	virtual void run() override {
		TestKit::lambda$assertUnmodifiableMap$33(map, k, v);
	}
	$Map* map = nullptr;
	$Object* k = nullptr;
	$Object* v = nullptr;
};
$Class* TestKit$$Lambda$lambda$assertUnmodifiableMap$33$29::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"map", "Ljava/util/Map;", nullptr, $PUBLIC, $field(TestKit$$Lambda$lambda$assertUnmodifiableMap$33$29, map)},
		{"k", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TestKit$$Lambda$lambda$assertUnmodifiableMap$33$29, k)},
		{"v", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TestKit$$Lambda$lambda$assertUnmodifiableMap$33$29, v)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/Map;Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(TestKit$$Lambda$lambda$assertUnmodifiableMap$33$29, init$, void, $Map*, Object$*, Object$*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TestKit$$Lambda$lambda$assertUnmodifiableMap$33$29, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"TestKit$$Lambda$lambda$assertUnmodifiableMap$33$29",
		"java.lang.Object",
		"TestKit$ThrowingProcedure",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TestKit$$Lambda$lambda$assertUnmodifiableMap$33$29, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestKit$$Lambda$lambda$assertUnmodifiableMap$33$29);
	});
	return class$;
}
$Class* TestKit$$Lambda$lambda$assertUnmodifiableMap$33$29::class$ = nullptr;

class TestKit$$Lambda$lambda$assertUnmodifiableMap$34$30 : public $TestKit$ThrowingProcedure {
	$class(TestKit$$Lambda$lambda$assertUnmodifiableMap$34$30, $NO_CLASS_INIT, $TestKit$ThrowingProcedure)
public:
	void init$($Map* map, Object$* k) {
		$set(this, map, map);
		$set(this, k, k);
	}
	virtual void run() override {
		TestKit::lambda$assertUnmodifiableMap$34(map, k);
	}
	$Map* map = nullptr;
	$Object* k = nullptr;
};
$Class* TestKit$$Lambda$lambda$assertUnmodifiableMap$34$30::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"map", "Ljava/util/Map;", nullptr, $PUBLIC, $field(TestKit$$Lambda$lambda$assertUnmodifiableMap$34$30, map)},
		{"k", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TestKit$$Lambda$lambda$assertUnmodifiableMap$34$30, k)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/Map;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(TestKit$$Lambda$lambda$assertUnmodifiableMap$34$30, init$, void, $Map*, Object$*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TestKit$$Lambda$lambda$assertUnmodifiableMap$34$30, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"TestKit$$Lambda$lambda$assertUnmodifiableMap$34$30",
		"java.lang.Object",
		"TestKit$ThrowingProcedure",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TestKit$$Lambda$lambda$assertUnmodifiableMap$34$30, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestKit$$Lambda$lambda$assertUnmodifiableMap$34$30);
	});
	return class$;
}
$Class* TestKit$$Lambda$lambda$assertUnmodifiableMap$34$30::class$ = nullptr;

class TestKit$$Lambda$lambda$assertUnmodifiableMap$35$31 : public $TestKit$ThrowingProcedure {
	$class(TestKit$$Lambda$lambda$assertUnmodifiableMap$35$31, $NO_CLASS_INIT, $TestKit$ThrowingProcedure)
public:
	void init$($Map* map, Object$* k, Object$* v) {
		$set(this, map, map);
		$set(this, k, k);
		$set(this, v, v);
	}
	virtual void run() override {
		TestKit::lambda$assertUnmodifiableMap$35(map, k, v);
	}
	$Map* map = nullptr;
	$Object* k = nullptr;
	$Object* v = nullptr;
};
$Class* TestKit$$Lambda$lambda$assertUnmodifiableMap$35$31::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"map", "Ljava/util/Map;", nullptr, $PUBLIC, $field(TestKit$$Lambda$lambda$assertUnmodifiableMap$35$31, map)},
		{"k", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TestKit$$Lambda$lambda$assertUnmodifiableMap$35$31, k)},
		{"v", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TestKit$$Lambda$lambda$assertUnmodifiableMap$35$31, v)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/Map;Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(TestKit$$Lambda$lambda$assertUnmodifiableMap$35$31, init$, void, $Map*, Object$*, Object$*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TestKit$$Lambda$lambda$assertUnmodifiableMap$35$31, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"TestKit$$Lambda$lambda$assertUnmodifiableMap$35$31",
		"java.lang.Object",
		"TestKit$ThrowingProcedure",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TestKit$$Lambda$lambda$assertUnmodifiableMap$35$31, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestKit$$Lambda$lambda$assertUnmodifiableMap$35$31);
	});
	return class$;
}
$Class* TestKit$$Lambda$lambda$assertUnmodifiableMap$35$31::class$ = nullptr;

class TestKit$$Lambda$lambda$assertUnmodifiableMap$36$32 : public $TestKit$ThrowingProcedure {
	$class(TestKit$$Lambda$lambda$assertUnmodifiableMap$36$32, $NO_CLASS_INIT, $TestKit$ThrowingProcedure)
public:
	void init$($Map* map, Object$* k, Object$* v) {
		$set(this, map, map);
		$set(this, k, k);
		$set(this, v, v);
	}
	virtual void run() override {
		TestKit::lambda$assertUnmodifiableMap$36(map, k, v);
	}
	$Map* map = nullptr;
	$Object* k = nullptr;
	$Object* v = nullptr;
};
$Class* TestKit$$Lambda$lambda$assertUnmodifiableMap$36$32::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"map", "Ljava/util/Map;", nullptr, $PUBLIC, $field(TestKit$$Lambda$lambda$assertUnmodifiableMap$36$32, map)},
		{"k", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TestKit$$Lambda$lambda$assertUnmodifiableMap$36$32, k)},
		{"v", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TestKit$$Lambda$lambda$assertUnmodifiableMap$36$32, v)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/Map;Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(TestKit$$Lambda$lambda$assertUnmodifiableMap$36$32, init$, void, $Map*, Object$*, Object$*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TestKit$$Lambda$lambda$assertUnmodifiableMap$36$32, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"TestKit$$Lambda$lambda$assertUnmodifiableMap$36$32",
		"java.lang.Object",
		"TestKit$ThrowingProcedure",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TestKit$$Lambda$lambda$assertUnmodifiableMap$36$32, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestKit$$Lambda$lambda$assertUnmodifiableMap$36$32);
	});
	return class$;
}
$Class* TestKit$$Lambda$lambda$assertUnmodifiableMap$36$32::class$ = nullptr;

class TestKit$$Lambda$lambda$assertUnmodifiableMap$37$33 : public $TestKit$ThrowingProcedure {
	$class(TestKit$$Lambda$lambda$assertUnmodifiableMap$37$33, $NO_CLASS_INIT, $TestKit$ThrowingProcedure)
public:
	void init$($Map* map, Object$* k, Object$* v) {
		$set(this, map, map);
		$set(this, k, k);
		$set(this, v, v);
	}
	virtual void run() override {
		TestKit::lambda$assertUnmodifiableMap$37(map, k, v);
	}
	$Map* map = nullptr;
	$Object* k = nullptr;
	$Object* v = nullptr;
};
$Class* TestKit$$Lambda$lambda$assertUnmodifiableMap$37$33::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"map", "Ljava/util/Map;", nullptr, $PUBLIC, $field(TestKit$$Lambda$lambda$assertUnmodifiableMap$37$33, map)},
		{"k", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TestKit$$Lambda$lambda$assertUnmodifiableMap$37$33, k)},
		{"v", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TestKit$$Lambda$lambda$assertUnmodifiableMap$37$33, v)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/Map;Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(TestKit$$Lambda$lambda$assertUnmodifiableMap$37$33, init$, void, $Map*, Object$*, Object$*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TestKit$$Lambda$lambda$assertUnmodifiableMap$37$33, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"TestKit$$Lambda$lambda$assertUnmodifiableMap$37$33",
		"java.lang.Object",
		"TestKit$ThrowingProcedure",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TestKit$$Lambda$lambda$assertUnmodifiableMap$37$33, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestKit$$Lambda$lambda$assertUnmodifiableMap$37$33);
	});
	return class$;
}
$Class* TestKit$$Lambda$lambda$assertUnmodifiableMap$37$33::class$ = nullptr;

class TestKit$$Lambda$lambda$assertUnmodifiableMap$39$34 : public $TestKit$ThrowingProcedure {
	$class(TestKit$$Lambda$lambda$assertUnmodifiableMap$39$34, $NO_CLASS_INIT, $TestKit$ThrowingProcedure)
public:
	void init$($Map* map, Object$* v) {
		$set(this, map, map);
		$set(this, v, v);
	}
	virtual void run() override {
		TestKit::lambda$assertUnmodifiableMap$39(map, v);
	}
	$Map* map = nullptr;
	$Object* v = nullptr;
};
$Class* TestKit$$Lambda$lambda$assertUnmodifiableMap$39$34::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"map", "Ljava/util/Map;", nullptr, $PUBLIC, $field(TestKit$$Lambda$lambda$assertUnmodifiableMap$39$34, map)},
		{"v", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TestKit$$Lambda$lambda$assertUnmodifiableMap$39$34, v)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/Map;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(TestKit$$Lambda$lambda$assertUnmodifiableMap$39$34, init$, void, $Map*, Object$*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TestKit$$Lambda$lambda$assertUnmodifiableMap$39$34, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"TestKit$$Lambda$lambda$assertUnmodifiableMap$39$34",
		"java.lang.Object",
		"TestKit$ThrowingProcedure",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TestKit$$Lambda$lambda$assertUnmodifiableMap$39$34, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestKit$$Lambda$lambda$assertUnmodifiableMap$39$34);
	});
	return class$;
}
$Class* TestKit$$Lambda$lambda$assertUnmodifiableMap$39$34::class$ = nullptr;

class TestKit$$Lambda$lambda$assertUnmodifiableMap$22$35 : public $BiFunction {
	$class(TestKit$$Lambda$lambda$assertUnmodifiableMap$22$35, $NO_CLASS_INIT, $BiFunction)
public:
	void init$(Object$* v) {
		$set(this, v, v);
	}
	virtual $Object* apply(Object$* k1, Object$* v1) override {
		 return TestKit::lambda$assertUnmodifiableMap$22(v, k1, v1);
	}
	$Object* v = nullptr;
};
$Class* TestKit$$Lambda$lambda$assertUnmodifiableMap$22$35::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"v", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TestKit$$Lambda$lambda$assertUnmodifiableMap$22$35, v)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(TestKit$$Lambda$lambda$assertUnmodifiableMap$22$35, init$, void, Object$*)},
		{"apply", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(TestKit$$Lambda$lambda$assertUnmodifiableMap$22$35, apply, $Object*, Object$*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"TestKit$$Lambda$lambda$assertUnmodifiableMap$22$35",
		"java.lang.Object",
		"java.util.function.BiFunction",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TestKit$$Lambda$lambda$assertUnmodifiableMap$22$35, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestKit$$Lambda$lambda$assertUnmodifiableMap$22$35);
	});
	return class$;
}
$Class* TestKit$$Lambda$lambda$assertUnmodifiableMap$22$35::class$ = nullptr;

class TestKit$$Lambda$lambda$assertUnmodifiableList$16$36 : public $UnaryOperator {
	$class(TestKit$$Lambda$lambda$assertUnmodifiableList$16$36, $NO_CLASS_INIT, $UnaryOperator)
public:
	void init$(Object$* e) {
		$set(this, e, e);
	}
	virtual $Object* apply(Object$* x) override {
		 return TestKit::lambda$assertUnmodifiableList$16(e, x);
	}
	$Object* e = nullptr;
};
$Class* TestKit$$Lambda$lambda$assertUnmodifiableList$16$36::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"e", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TestKit$$Lambda$lambda$assertUnmodifiableList$16$36, e)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(TestKit$$Lambda$lambda$assertUnmodifiableList$16$36, init$, void, Object$*)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(TestKit$$Lambda$lambda$assertUnmodifiableList$16$36, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"TestKit$$Lambda$lambda$assertUnmodifiableList$16$36",
		"java.lang.Object",
		"java.util.function.UnaryOperator",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TestKit$$Lambda$lambda$assertUnmodifiableList$16$36, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestKit$$Lambda$lambda$assertUnmodifiableList$16$36);
	});
	return class$;
}
$Class* TestKit$$Lambda$lambda$assertUnmodifiableList$16$36::class$ = nullptr;

class TestKit$$Lambda$lambda$assertUnmodifiableCollection$6$37 : public $Predicate {
	$class(TestKit$$Lambda$lambda$assertUnmodifiableCollection$6$37, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* x) override {
		 return TestKit::lambda$assertUnmodifiableCollection$6(x);
	}
};
$Class* TestKit$$Lambda$lambda$assertUnmodifiableCollection$6$37::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TestKit$$Lambda$lambda$assertUnmodifiableCollection$6$37, init$, void)},
		{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(TestKit$$Lambda$lambda$assertUnmodifiableCollection$6$37, test, bool, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"TestKit$$Lambda$lambda$assertUnmodifiableCollection$6$37",
		"java.lang.Object",
		"java.util.function.Predicate",
		nullptr,
		methodInfos$$
	};
	$loadClass(TestKit$$Lambda$lambda$assertUnmodifiableCollection$6$37, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestKit$$Lambda$lambda$assertUnmodifiableCollection$6$37);
	});
	return class$;
}
$Class* TestKit$$Lambda$lambda$assertUnmodifiableCollection$6$37::class$ = nullptr;

void TestKit::init$() {
}

void TestKit::assertNotThrows($TestKit$ThrowingProcedure* code) {
	$Objects::requireNonNull(code, "code"_s);
	assertNotThrows($$new(TestKit$$Lambda$lambda$assertNotThrows$0, code));
}

$Object* TestKit::assertNotThrows($TestKit$ThrowingFunction* code) {
	$useLocalObjectStack();
	$Objects::requireNonNull(code, "code"_s);
	try {
		return $nc(code)->run();
	} catch ($Throwable& t) {
		$throwNew($RuntimeException, $$str({"Expected to run normally, but threw "_s, $(t->getClass()->getCanonicalName())}), t);
	}
	$shouldNotReachHere();
}

$Throwable* TestKit::assertThrows($Class* clazz, $TestKit$ThrowingProcedure* code) {
	$useLocalObjectStack();
	$Objects::requireNonNull(clazz, "clazz"_s);
	$Objects::requireNonNull(code, "code"_s);
	try {
		$nc(code)->run();
	} catch ($Throwable& t) {
		if ($nc(clazz)->isInstance(t)) {
			return $cast($Throwable, clazz->cast(t));
		}
		$var($StringBuilder, var$0, $new($StringBuilder));
		var$0->append("Expected to catch an exception of type "_s);
		var$0->append($(clazz->getCanonicalName()));
		var$0->append(", but caught "_s);
		var$0->append($(t->getClass()->getCanonicalName()));
		$throwNew($RuntimeException, $$str(var$0), t);
	}
	$throwNew($RuntimeException, $$str({"Expected to catch an exception of type "_s, $($nc(clazz)->getCanonicalName()), ", but caught nothing"_s}));
	$shouldNotReachHere();
}

$Throwable* TestKit::assertThrows($Class* clazz, $String* messageRegex, $TestKit$ThrowingProcedure* code) {
	$useLocalObjectStack();
	$Objects::requireNonNull(messageRegex, "messagePattern"_s);
	$var($Throwable, t, assertThrows(clazz, code));
	$var($String, m, $nc(t)->getMessage());
	if (m == nullptr) {
		$throwNew($RuntimeException, $($String::format("Expected exception message to match the regex \'%s\', but the message was null"_s, $$new($ObjectArray, {messageRegex}))), t);
	}
	if (!$Pattern::matches(messageRegex, m)) {
		$throwNew($RuntimeException, $($String::format("Expected exception message to match the regex \'%s\', actual message: %s"_s, $$new($ObjectArray, {
			messageRegex,
			m
		}))), t);
	}
	return t;
}

void TestKit::assertUnmodifiableCollection($Collection* collection) {
	assertUnmodifiableCollection(collection, $$new(TestKit$$Lambda$lambda$assertUnmodifiableCollection$1$1));
}

void TestKit::assertUnmodifiableCollection($Collection* collection, $Supplier* elementsFactory) {
	$useLocalObjectStack();
	$Objects::requireNonNull(collection, "collection"_s);
	$Objects::requireNonNull(elementsFactory, "elementsFactory"_s);
	$var($Object, e, $nc(elementsFactory)->get());
	assertUOE($$new(TestKit$$Lambda$lambda$assertUnmodifiableCollection$2$2, collection, e));
	assertUOE($$new(TestKit$$Lambda$lambda$assertUnmodifiableCollection$3$3, collection, e));
	$var($Iterator, i, $nc(collection)->iterator());
	if ($nc(i)->hasNext()) {
		i->next();
		assertUOE($$new(TestKit$$Lambda$remove$4, i));
	}
	assertUOE($$new(TestKit$$Lambda$clear$5, collection));
	assertUOE($$new(TestKit$$Lambda$lambda$assertUnmodifiableCollection$4$6, collection, e));
	assertUOE($$new(TestKit$$Lambda$lambda$assertUnmodifiableCollection$5$7, collection, e));
	assertUOE($$new(TestKit$$Lambda$lambda$assertUnmodifiableCollection$7$8, collection));
	assertUOE($$new(TestKit$$Lambda$lambda$assertUnmodifiableCollection$8$9, collection));
}

void TestKit::assertUnmodifiableSet($Set* set) {
	assertUnmodifiableCollection(set, $$new(TestKit$$Lambda$lambda$assertUnmodifiableCollection$1$1));
}

void TestKit::assertUnmodifiableSet($Set* set, $Supplier* elementsFactory) {
	assertUnmodifiableCollection(set, elementsFactory);
}

void TestKit::assertUnmodifiableList($List* list) {
	assertUnmodifiableList(list, $$new(TestKit$$Lambda$lambda$assertUnmodifiableCollection$1$1));
}

void TestKit::assertUnmodifiableList($List* list, $Supplier* elementsFactory) {
	assertUnmodifiableList(list, elementsFactory, 3);
}

void TestKit::assertUnmodifiableList($List* list, $Supplier* elementsFactory, int32_t depth) {
	$useLocalObjectStack();
	$Objects::requireNonNull(list, "list"_s);
	$Objects::requireNonNull(elementsFactory, "elementsFactory"_s);
	if (depth < 0) {
		$throwNew($IllegalArgumentException, $$str({"depth: "_s, $$str(depth)}));
	}
	if (depth == 0) {
		return;
	}
	$var($Object, e, $nc(elementsFactory)->get());
	assertUnmodifiableCollection(list, elementsFactory);
	assertUOE($$new(TestKit$$Lambda$lambda$assertUnmodifiableList$11$10, list, e));
	assertUOE($$new(TestKit$$Lambda$lambda$assertUnmodifiableList$12$11, list, e));
	$var($ListIterator, i, $nc(list)->listIterator());
	if ($nc(i)->hasNext()) {
		i->next();
		assertUOE($$new(TestKit$$Lambda$remove$12, i));
		assertUOE($$new(TestKit$$Lambda$lambda$assertUnmodifiableList$13$13, i, e));
		assertUOE($$new(TestKit$$Lambda$lambda$assertUnmodifiableList$14$14, i, e));
	}
	assertUOE($$new(TestKit$$Lambda$lambda$assertUnmodifiableList$15$15, list));
	assertUOE($$new(TestKit$$Lambda$lambda$assertUnmodifiableList$17$16, list, e));
	assertUOE($$new(TestKit$$Lambda$lambda$assertUnmodifiableList$18$17, list, e));
	$var($Comparator, comparator, $new(TestKit$$Lambda$lambda$assertUnmodifiableList$19$18));
	assertUOE($$new(TestKit$$Lambda$lambda$assertUnmodifiableList$20$19, list, comparator));
	assertUnmodifiableList($(list->subList(0, list->size())), elementsFactory, depth - 1);
}

void TestKit::assertUnmodifiableMap($Map* map) {
	assertUnmodifiableMap(map, $$new(TestKit$$Lambda$lambda$assertUnmodifiableMap$21$20));
}

void TestKit::assertUnmodifiableMap($Map* map, $Supplier* entriesFactory) {
	$useLocalObjectStack();
	$Objects::requireNonNull(map, "map"_s);
	$Objects::requireNonNull(entriesFactory, "entriesFactory"_s);
	assertUOE($$new(TestKit$$Lambda$clear$21, $nc(map)));
	$var($Map$Entry, e1, $cast($Map$Entry, $nc(entriesFactory)->get()));
	$var($Object, k, $nc(e1)->getKey());
	$var($Object, v, e1->getValue());
	assertUOE($$new(TestKit$$Lambda$lambda$assertUnmodifiableMap$23$22, map, k, v));
	assertUOE($$new(TestKit$$Lambda$lambda$assertUnmodifiableMap$25$23, map, k, v));
	assertUOE($$new(TestKit$$Lambda$lambda$assertUnmodifiableMap$27$24, map, k, v));
	$var($Set, entrySet, map->entrySet());
	assertUnmodifiableSet(entrySet);
	{
		$var($Iterator, i$, $nc(entrySet)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Map$Entry, e, $cast($Map$Entry, i$->next()));
			{
				assertUOE($$new(TestKit$$Lambda$lambda$assertUnmodifiableMap$28$25, e));
			}
		}
	}
	assertUnmodifiableSet($(map->keySet()));
	assertUOE($$new(TestKit$$Lambda$lambda$assertUnmodifiableMap$30$26, map, k, v));
	assertUOE($$new(TestKit$$Lambda$lambda$assertUnmodifiableMap$31$27, map, k, v));
	$var($Map, m, $new($HashMap));
	m->put(k, v);
	assertUOE($$new(TestKit$$Lambda$lambda$assertUnmodifiableMap$32$28, map, m));
	assertUOE($$new(TestKit$$Lambda$lambda$assertUnmodifiableMap$33$29, map, k, v));
	assertUOE($$new(TestKit$$Lambda$lambda$assertUnmodifiableMap$34$30, map, k));
	assertUOE($$new(TestKit$$Lambda$lambda$assertUnmodifiableMap$35$31, map, k, v));
	assertUOE($$new(TestKit$$Lambda$lambda$assertUnmodifiableMap$36$32, map, k, v));
	assertUOE($$new(TestKit$$Lambda$lambda$assertUnmodifiableMap$37$33, map, k, v));
	assertUOE($$new(TestKit$$Lambda$lambda$assertUnmodifiableMap$39$34, map, v));
	assertUnmodifiableCollection($(map->values()));
}

void TestKit::assertUOE($TestKit$ThrowingProcedure* code) {
	$load($UnsupportedOperationException);
	assertThrows($UnsupportedOperationException::class$, code);
}

void TestKit::lambda$assertUnmodifiableMap$39($Map* map, Object$* v) {
	$nc(map)->replaceAll($$new(TestKit$$Lambda$lambda$assertUnmodifiableMap$22$35, v));
}

void TestKit::lambda$assertUnmodifiableMap$37($Map* map, Object$* k, Object$* v) {
	$nc(map)->replace(k, v, v);
}

void TestKit::lambda$assertUnmodifiableMap$36($Map* map, Object$* k, Object$* v) {
	$nc(map)->replace(k, v);
}

void TestKit::lambda$assertUnmodifiableMap$35($Map* map, Object$* k, Object$* v) {
	$nc(map)->remove(k, v);
}

void TestKit::lambda$assertUnmodifiableMap$34($Map* map, Object$* k) {
	$nc(map)->remove(k);
}

void TestKit::lambda$assertUnmodifiableMap$33($Map* map, Object$* k, Object$* v) {
	$nc(map)->putIfAbsent(k, v);
}

void TestKit::lambda$assertUnmodifiableMap$32($Map* map, $Map* m) {
	$nc(map)->putAll(m);
}

void TestKit::lambda$assertUnmodifiableMap$31($Map* map, Object$* k, Object$* v) {
	$nc(map)->put(k, v);
}

void TestKit::lambda$assertUnmodifiableMap$30($Map* map, Object$* k, Object$* v) {
	$nc(map)->merge(k, v, $$new(TestKit$$Lambda$lambda$assertUnmodifiableMap$22$35, v));
}

void TestKit::lambda$assertUnmodifiableMap$28($Map$Entry* e) {
	$nc(e)->setValue(nullptr);
}

void TestKit::lambda$assertUnmodifiableMap$27($Map* map, Object$* k, Object$* v) {
	$nc(map)->computeIfPresent(k, $$new(TestKit$$Lambda$lambda$assertUnmodifiableMap$22$35, v));
}

void TestKit::lambda$assertUnmodifiableMap$25($Map* map, Object$* k, Object$* v) {
	$nc(map)->computeIfAbsent(k, $$new(TestKit$$Lambda$lambda$assertUnmodifiableList$16$36, v));
}

void TestKit::lambda$assertUnmodifiableMap$23($Map* map, Object$* k, Object$* v) {
	$nc(map)->compute(k, $$new(TestKit$$Lambda$lambda$assertUnmodifiableMap$22$35, v));
}

$Object* TestKit::lambda$assertUnmodifiableMap$22(Object$* v, Object$* k1, Object$* v1) {
	return $of(v);
}

$Map$Entry* TestKit::lambda$assertUnmodifiableMap$21() {
	return $new($AbstractMap$SimpleImmutableEntry, nullptr, nullptr);
}

void TestKit::lambda$assertUnmodifiableList$20($List* list, $Comparator* comparator) {
	$nc(list)->sort(comparator);
}

int32_t TestKit::lambda$assertUnmodifiableList$19(Object$* a, Object$* b) {
	return $Objects::hash($$new($ObjectArray, {
		a,
		b
	}));
}

void TestKit::lambda$assertUnmodifiableList$18($List* list, Object$* e) {
	$nc(list)->set(0, e);
}

void TestKit::lambda$assertUnmodifiableList$17($List* list, Object$* e) {
	$nc(list)->replaceAll($$new(TestKit$$Lambda$lambda$assertUnmodifiableList$16$36, e));
}

$Object* TestKit::lambda$assertUnmodifiableList$16(Object$* e, Object$* x) {
	return $of(e);
}

void TestKit::lambda$assertUnmodifiableList$15($List* list) {
	$nc(list)->remove(0);
}

void TestKit::lambda$assertUnmodifiableList$14($ListIterator* i, Object$* e) {
	$nc(i)->add(e);
}

void TestKit::lambda$assertUnmodifiableList$13($ListIterator* i, Object$* e) {
	$nc(i)->set(e);
}

void TestKit::lambda$assertUnmodifiableList$12($List* list, Object$* e) {
	$nc(list)->addAll(0, $($Collections::singleton(e)));
}

void TestKit::lambda$assertUnmodifiableList$11($List* list, Object$* e) {
	$nc(list)->add(0, e);
}

void TestKit::lambda$assertUnmodifiableCollection$8($Collection* collection) {
	$nc(collection)->retainAll($($Collections::emptyList()));
}

void TestKit::lambda$assertUnmodifiableCollection$7($Collection* collection) {
	$nc(collection)->removeIf($$new(TestKit$$Lambda$lambda$assertUnmodifiableCollection$6$37));
}

bool TestKit::lambda$assertUnmodifiableCollection$6(Object$* x) {
	return true;
}

void TestKit::lambda$assertUnmodifiableCollection$5($Collection* collection, Object$* e) {
	$nc(collection)->removeAll($($Collections::singleton(e)));
}

void TestKit::lambda$assertUnmodifiableCollection$4($Collection* collection, Object$* e) {
	$nc(collection)->remove(e);
}

void TestKit::lambda$assertUnmodifiableCollection$3($Collection* collection, Object$* e) {
	$nc(collection)->addAll($($Collections::singleton(e)));
}

void TestKit::lambda$assertUnmodifiableCollection$2($Collection* collection, Object$* e) {
	$nc(collection)->add(e);
}

$Object* TestKit::lambda$assertUnmodifiableCollection$1() {
	return nullptr;
}

$Object* TestKit::lambda$assertNotThrows$0($TestKit$ThrowingProcedure* code) {
	$nc(code)->run();
	return nullptr;
}

TestKit::TestKit() {
}

$Class* TestKit::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("TestKit$$Lambda$lambda$assertNotThrows$0")) {
			return TestKit$$Lambda$lambda$assertNotThrows$0::load$(name, initialize);
		}
		if (name->equals("TestKit$$Lambda$lambda$assertUnmodifiableCollection$1$1")) {
			return TestKit$$Lambda$lambda$assertUnmodifiableCollection$1$1::load$(name, initialize);
		}
		if (name->equals("TestKit$$Lambda$lambda$assertUnmodifiableCollection$2$2")) {
			return TestKit$$Lambda$lambda$assertUnmodifiableCollection$2$2::load$(name, initialize);
		}
		if (name->equals("TestKit$$Lambda$lambda$assertUnmodifiableCollection$3$3")) {
			return TestKit$$Lambda$lambda$assertUnmodifiableCollection$3$3::load$(name, initialize);
		}
		if (name->equals("TestKit$$Lambda$remove$4")) {
			return TestKit$$Lambda$remove$4::load$(name, initialize);
		}
		if (name->equals("TestKit$$Lambda$clear$5")) {
			return TestKit$$Lambda$clear$5::load$(name, initialize);
		}
		if (name->equals("TestKit$$Lambda$lambda$assertUnmodifiableCollection$4$6")) {
			return TestKit$$Lambda$lambda$assertUnmodifiableCollection$4$6::load$(name, initialize);
		}
		if (name->equals("TestKit$$Lambda$lambda$assertUnmodifiableCollection$5$7")) {
			return TestKit$$Lambda$lambda$assertUnmodifiableCollection$5$7::load$(name, initialize);
		}
		if (name->equals("TestKit$$Lambda$lambda$assertUnmodifiableCollection$7$8")) {
			return TestKit$$Lambda$lambda$assertUnmodifiableCollection$7$8::load$(name, initialize);
		}
		if (name->equals("TestKit$$Lambda$lambda$assertUnmodifiableCollection$8$9")) {
			return TestKit$$Lambda$lambda$assertUnmodifiableCollection$8$9::load$(name, initialize);
		}
		if (name->equals("TestKit$$Lambda$lambda$assertUnmodifiableList$11$10")) {
			return TestKit$$Lambda$lambda$assertUnmodifiableList$11$10::load$(name, initialize);
		}
		if (name->equals("TestKit$$Lambda$lambda$assertUnmodifiableList$12$11")) {
			return TestKit$$Lambda$lambda$assertUnmodifiableList$12$11::load$(name, initialize);
		}
		if (name->equals("TestKit$$Lambda$remove$12")) {
			return TestKit$$Lambda$remove$12::load$(name, initialize);
		}
		if (name->equals("TestKit$$Lambda$lambda$assertUnmodifiableList$13$13")) {
			return TestKit$$Lambda$lambda$assertUnmodifiableList$13$13::load$(name, initialize);
		}
		if (name->equals("TestKit$$Lambda$lambda$assertUnmodifiableList$14$14")) {
			return TestKit$$Lambda$lambda$assertUnmodifiableList$14$14::load$(name, initialize);
		}
		if (name->equals("TestKit$$Lambda$lambda$assertUnmodifiableList$15$15")) {
			return TestKit$$Lambda$lambda$assertUnmodifiableList$15$15::load$(name, initialize);
		}
		if (name->equals("TestKit$$Lambda$lambda$assertUnmodifiableList$17$16")) {
			return TestKit$$Lambda$lambda$assertUnmodifiableList$17$16::load$(name, initialize);
		}
		if (name->equals("TestKit$$Lambda$lambda$assertUnmodifiableList$18$17")) {
			return TestKit$$Lambda$lambda$assertUnmodifiableList$18$17::load$(name, initialize);
		}
		if (name->equals("TestKit$$Lambda$lambda$assertUnmodifiableList$19$18")) {
			return TestKit$$Lambda$lambda$assertUnmodifiableList$19$18::load$(name, initialize);
		}
		if (name->equals("TestKit$$Lambda$lambda$assertUnmodifiableList$20$19")) {
			return TestKit$$Lambda$lambda$assertUnmodifiableList$20$19::load$(name, initialize);
		}
		if (name->equals("TestKit$$Lambda$lambda$assertUnmodifiableMap$21$20")) {
			return TestKit$$Lambda$lambda$assertUnmodifiableMap$21$20::load$(name, initialize);
		}
		if (name->equals("TestKit$$Lambda$clear$21")) {
			return TestKit$$Lambda$clear$21::load$(name, initialize);
		}
		if (name->equals("TestKit$$Lambda$lambda$assertUnmodifiableMap$23$22")) {
			return TestKit$$Lambda$lambda$assertUnmodifiableMap$23$22::load$(name, initialize);
		}
		if (name->equals("TestKit$$Lambda$lambda$assertUnmodifiableMap$25$23")) {
			return TestKit$$Lambda$lambda$assertUnmodifiableMap$25$23::load$(name, initialize);
		}
		if (name->equals("TestKit$$Lambda$lambda$assertUnmodifiableMap$27$24")) {
			return TestKit$$Lambda$lambda$assertUnmodifiableMap$27$24::load$(name, initialize);
		}
		if (name->equals("TestKit$$Lambda$lambda$assertUnmodifiableMap$28$25")) {
			return TestKit$$Lambda$lambda$assertUnmodifiableMap$28$25::load$(name, initialize);
		}
		if (name->equals("TestKit$$Lambda$lambda$assertUnmodifiableMap$30$26")) {
			return TestKit$$Lambda$lambda$assertUnmodifiableMap$30$26::load$(name, initialize);
		}
		if (name->equals("TestKit$$Lambda$lambda$assertUnmodifiableMap$31$27")) {
			return TestKit$$Lambda$lambda$assertUnmodifiableMap$31$27::load$(name, initialize);
		}
		if (name->equals("TestKit$$Lambda$lambda$assertUnmodifiableMap$32$28")) {
			return TestKit$$Lambda$lambda$assertUnmodifiableMap$32$28::load$(name, initialize);
		}
		if (name->equals("TestKit$$Lambda$lambda$assertUnmodifiableMap$33$29")) {
			return TestKit$$Lambda$lambda$assertUnmodifiableMap$33$29::load$(name, initialize);
		}
		if (name->equals("TestKit$$Lambda$lambda$assertUnmodifiableMap$34$30")) {
			return TestKit$$Lambda$lambda$assertUnmodifiableMap$34$30::load$(name, initialize);
		}
		if (name->equals("TestKit$$Lambda$lambda$assertUnmodifiableMap$35$31")) {
			return TestKit$$Lambda$lambda$assertUnmodifiableMap$35$31::load$(name, initialize);
		}
		if (name->equals("TestKit$$Lambda$lambda$assertUnmodifiableMap$36$32")) {
			return TestKit$$Lambda$lambda$assertUnmodifiableMap$36$32::load$(name, initialize);
		}
		if (name->equals("TestKit$$Lambda$lambda$assertUnmodifiableMap$37$33")) {
			return TestKit$$Lambda$lambda$assertUnmodifiableMap$37$33::load$(name, initialize);
		}
		if (name->equals("TestKit$$Lambda$lambda$assertUnmodifiableMap$39$34")) {
			return TestKit$$Lambda$lambda$assertUnmodifiableMap$39$34::load$(name, initialize);
		}
		if (name->equals("TestKit$$Lambda$lambda$assertUnmodifiableMap$22$35")) {
			return TestKit$$Lambda$lambda$assertUnmodifiableMap$22$35::load$(name, initialize);
		}
		if (name->equals("TestKit$$Lambda$lambda$assertUnmodifiableList$16$36")) {
			return TestKit$$Lambda$lambda$assertUnmodifiableList$16$36::load$(name, initialize);
		}
		if (name->equals("TestKit$$Lambda$lambda$assertUnmodifiableCollection$6$37")) {
			return TestKit$$Lambda$lambda$assertUnmodifiableCollection$6$37::load$(name, initialize);
		}
	}
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(TestKit, init$, void)},
		{"assertNotThrows", "(LTestKit$ThrowingProcedure;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(TestKit, assertNotThrows, void, $TestKit$ThrowingProcedure*)},
		{"assertNotThrows", "(LTestKit$ThrowingFunction;)Ljava/lang/Object;", "<V:Ljava/lang/Object;>(LTestKit$ThrowingFunction<TV;>;)TV;", $PUBLIC | $STATIC, $staticMethod(TestKit, assertNotThrows, $Object*, $TestKit$ThrowingFunction*)},
		{"assertThrows", "(Ljava/lang/Class;LTestKit$ThrowingProcedure;)Ljava/lang/Throwable;", "<T:Ljava/lang/Throwable;>(Ljava/lang/Class<TT;>;LTestKit$ThrowingProcedure;)TT;", $PUBLIC | $STATIC, $staticMethod(TestKit, assertThrows, $Throwable*, $Class*, $TestKit$ThrowingProcedure*)},
		{"assertThrows", "(Ljava/lang/Class;Ljava/lang/String;LTestKit$ThrowingProcedure;)Ljava/lang/Throwable;", "<T:Ljava/lang/Throwable;>(Ljava/lang/Class<TT;>;Ljava/lang/String;LTestKit$ThrowingProcedure;)TT;", $PUBLIC | $STATIC, $staticMethod(TestKit, assertThrows, $Throwable*, $Class*, $String*, $TestKit$ThrowingProcedure*)},
		{"assertUOE", "(LTestKit$ThrowingProcedure;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(TestKit, assertUOE, void, $TestKit$ThrowingProcedure*)},
		{"assertUnmodifiableCollection", "(Ljava/util/Collection;)V", "(Ljava/util/Collection<*>;)V", $PUBLIC | $STATIC, $staticMethod(TestKit, assertUnmodifiableCollection, void, $Collection*)},
		{"assertUnmodifiableCollection", "(Ljava/util/Collection;Ljava/util/function/Supplier;)V", "<E:Ljava/lang/Object;>(Ljava/util/Collection<TE;>;Ljava/util/function/Supplier<+TE;>;)V", $PUBLIC | $STATIC, $staticMethod(TestKit, assertUnmodifiableCollection, void, $Collection*, $Supplier*)},
		{"assertUnmodifiableList", "(Ljava/util/List;)V", "(Ljava/util/List<*>;)V", $PUBLIC | $STATIC, $staticMethod(TestKit, assertUnmodifiableList, void, $List*)},
		{"assertUnmodifiableList", "(Ljava/util/List;Ljava/util/function/Supplier;)V", "<E:Ljava/lang/Object;>(Ljava/util/List<TE;>;Ljava/util/function/Supplier<+TE;>;)V", $PUBLIC | $STATIC, $staticMethod(TestKit, assertUnmodifiableList, void, $List*, $Supplier*)},
		{"assertUnmodifiableList", "(Ljava/util/List;Ljava/util/function/Supplier;I)V", "<E:Ljava/lang/Object;>(Ljava/util/List<TE;>;Ljava/util/function/Supplier<+TE;>;I)V", $PRIVATE | $STATIC, $staticMethod(TestKit, assertUnmodifiableList, void, $List*, $Supplier*, int32_t)},
		{"assertUnmodifiableMap", "(Ljava/util/Map;)V", "(Ljava/util/Map<**>;)V", $PUBLIC | $STATIC, $staticMethod(TestKit, assertUnmodifiableMap, void, $Map*)},
		{"assertUnmodifiableMap", "(Ljava/util/Map;Ljava/util/function/Supplier;)V", "<K:Ljava/lang/Object;V:Ljava/lang/Object;>(Ljava/util/Map<TK;TV;>;Ljava/util/function/Supplier<+Ljava/util/Map$Entry<+TK;+TV;>;>;)V", $PUBLIC | $STATIC, $staticMethod(TestKit, assertUnmodifiableMap, void, $Map*, $Supplier*)},
		{"assertUnmodifiableSet", "(Ljava/util/Set;)V", "(Ljava/util/Set<*>;)V", $PUBLIC | $STATIC, $staticMethod(TestKit, assertUnmodifiableSet, void, $Set*)},
		{"assertUnmodifiableSet", "(Ljava/util/Set;Ljava/util/function/Supplier;)V", "<E:Ljava/lang/Object;>(Ljava/util/Set<TE;>;Ljava/util/function/Supplier<+TE;>;)V", $PUBLIC | $STATIC, $staticMethod(TestKit, assertUnmodifiableSet, void, $Set*, $Supplier*)},
		{"lambda$assertNotThrows$0", "(LTestKit$ThrowingProcedure;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(TestKit, lambda$assertNotThrows$0, $Object*, $TestKit$ThrowingProcedure*), "java.lang.Throwable"},
		{"lambda$assertUnmodifiableCollection$1", "()Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(TestKit, lambda$assertUnmodifiableCollection$1, $Object*)},
		{"lambda$assertUnmodifiableCollection$2", "(Ljava/util/Collection;Ljava/lang/Object;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(TestKit, lambda$assertUnmodifiableCollection$2, void, $Collection*, Object$*), "java.lang.Throwable"},
		{"lambda$assertUnmodifiableCollection$3", "(Ljava/util/Collection;Ljava/lang/Object;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(TestKit, lambda$assertUnmodifiableCollection$3, void, $Collection*, Object$*), "java.lang.Throwable"},
		{"lambda$assertUnmodifiableCollection$4", "(Ljava/util/Collection;Ljava/lang/Object;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(TestKit, lambda$assertUnmodifiableCollection$4, void, $Collection*, Object$*), "java.lang.Throwable"},
		{"lambda$assertUnmodifiableCollection$5", "(Ljava/util/Collection;Ljava/lang/Object;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(TestKit, lambda$assertUnmodifiableCollection$5, void, $Collection*, Object$*), "java.lang.Throwable"},
		{"lambda$assertUnmodifiableCollection$6", "(Ljava/lang/Object;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(TestKit, lambda$assertUnmodifiableCollection$6, bool, Object$*)},
		{"lambda$assertUnmodifiableCollection$7", "(Ljava/util/Collection;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(TestKit, lambda$assertUnmodifiableCollection$7, void, $Collection*), "java.lang.Throwable"},
		{"lambda$assertUnmodifiableCollection$8", "(Ljava/util/Collection;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(TestKit, lambda$assertUnmodifiableCollection$8, void, $Collection*), "java.lang.Throwable"},
		{"lambda$assertUnmodifiableList$11", "(Ljava/util/List;Ljava/lang/Object;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(TestKit, lambda$assertUnmodifiableList$11, void, $List*, Object$*), "java.lang.Throwable"},
		{"lambda$assertUnmodifiableList$12", "(Ljava/util/List;Ljava/lang/Object;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(TestKit, lambda$assertUnmodifiableList$12, void, $List*, Object$*), "java.lang.Throwable"},
		{"lambda$assertUnmodifiableList$13", "(Ljava/util/ListIterator;Ljava/lang/Object;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(TestKit, lambda$assertUnmodifiableList$13, void, $ListIterator*, Object$*), "java.lang.Throwable"},
		{"lambda$assertUnmodifiableList$14", "(Ljava/util/ListIterator;Ljava/lang/Object;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(TestKit, lambda$assertUnmodifiableList$14, void, $ListIterator*, Object$*), "java.lang.Throwable"},
		{"lambda$assertUnmodifiableList$15", "(Ljava/util/List;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(TestKit, lambda$assertUnmodifiableList$15, void, $List*), "java.lang.Throwable"},
		{"lambda$assertUnmodifiableList$16", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(TestKit, lambda$assertUnmodifiableList$16, $Object*, Object$*, Object$*)},
		{"lambda$assertUnmodifiableList$17", "(Ljava/util/List;Ljava/lang/Object;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(TestKit, lambda$assertUnmodifiableList$17, void, $List*, Object$*), "java.lang.Throwable"},
		{"lambda$assertUnmodifiableList$18", "(Ljava/util/List;Ljava/lang/Object;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(TestKit, lambda$assertUnmodifiableList$18, void, $List*, Object$*), "java.lang.Throwable"},
		{"lambda$assertUnmodifiableList$19", "(Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(TestKit, lambda$assertUnmodifiableList$19, int32_t, Object$*, Object$*)},
		{"lambda$assertUnmodifiableList$20", "(Ljava/util/List;Ljava/util/Comparator;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(TestKit, lambda$assertUnmodifiableList$20, void, $List*, $Comparator*), "java.lang.Throwable"},
		{"lambda$assertUnmodifiableMap$21", "()Ljava/util/Map$Entry;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(TestKit, lambda$assertUnmodifiableMap$21, $Map$Entry*)},
		{"lambda$assertUnmodifiableMap$22", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(TestKit, lambda$assertUnmodifiableMap$22, $Object*, Object$*, Object$*, Object$*)},
		{"lambda$assertUnmodifiableMap$23", "(Ljava/util/Map;Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(TestKit, lambda$assertUnmodifiableMap$23, void, $Map*, Object$*, Object$*), "java.lang.Throwable"},
		{"lambda$assertUnmodifiableMap$25", "(Ljava/util/Map;Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(TestKit, lambda$assertUnmodifiableMap$25, void, $Map*, Object$*, Object$*), "java.lang.Throwable"},
		{"lambda$assertUnmodifiableMap$27", "(Ljava/util/Map;Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(TestKit, lambda$assertUnmodifiableMap$27, void, $Map*, Object$*, Object$*), "java.lang.Throwable"},
		{"lambda$assertUnmodifiableMap$28", "(Ljava/util/Map$Entry;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(TestKit, lambda$assertUnmodifiableMap$28, void, $Map$Entry*), "java.lang.Throwable"},
		{"lambda$assertUnmodifiableMap$30", "(Ljava/util/Map;Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(TestKit, lambda$assertUnmodifiableMap$30, void, $Map*, Object$*, Object$*), "java.lang.Throwable"},
		{"lambda$assertUnmodifiableMap$31", "(Ljava/util/Map;Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(TestKit, lambda$assertUnmodifiableMap$31, void, $Map*, Object$*, Object$*), "java.lang.Throwable"},
		{"lambda$assertUnmodifiableMap$32", "(Ljava/util/Map;Ljava/util/Map;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(TestKit, lambda$assertUnmodifiableMap$32, void, $Map*, $Map*), "java.lang.Throwable"},
		{"lambda$assertUnmodifiableMap$33", "(Ljava/util/Map;Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(TestKit, lambda$assertUnmodifiableMap$33, void, $Map*, Object$*, Object$*), "java.lang.Throwable"},
		{"lambda$assertUnmodifiableMap$34", "(Ljava/util/Map;Ljava/lang/Object;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(TestKit, lambda$assertUnmodifiableMap$34, void, $Map*, Object$*), "java.lang.Throwable"},
		{"lambda$assertUnmodifiableMap$35", "(Ljava/util/Map;Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(TestKit, lambda$assertUnmodifiableMap$35, void, $Map*, Object$*, Object$*), "java.lang.Throwable"},
		{"lambda$assertUnmodifiableMap$36", "(Ljava/util/Map;Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(TestKit, lambda$assertUnmodifiableMap$36, void, $Map*, Object$*, Object$*), "java.lang.Throwable"},
		{"lambda$assertUnmodifiableMap$37", "(Ljava/util/Map;Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(TestKit, lambda$assertUnmodifiableMap$37, void, $Map*, Object$*, Object$*), "java.lang.Throwable"},
		{"lambda$assertUnmodifiableMap$39", "(Ljava/util/Map;Ljava/lang/Object;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(TestKit, lambda$assertUnmodifiableMap$39, void, $Map*, Object$*), "java.lang.Throwable"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestKit$ThrowingFunction", "TestKit", "ThrowingFunction", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"TestKit$ThrowingProcedure", "TestKit", "ThrowingProcedure", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"TestKit",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"TestKit$ThrowingFunction,TestKit$ThrowingProcedure"
	};
	$loadClass(TestKit, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestKit);
	});
	return class$;
}

$Class* TestKit::class$ = nullptr;