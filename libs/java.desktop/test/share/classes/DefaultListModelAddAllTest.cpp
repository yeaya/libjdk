#include <DefaultListModelAddAllTest.h>
#include <DefaultListModelAddAllTest$MyListDataListener.h>
#include <java/io/Serializable.h>
#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/AbstractCollection.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/TreeSet.h>
#include <java/util/Vector.h>
#include <java/util/function/BiConsumer.h>
#include <java/util/function/ObjIntConsumer.h>
#include <java/util/function/Supplier.h>
#include <java/util/stream/IntStream.h>
#include <javax/swing/DefaultListModel.h>
#include <jcpp.h>

#undef END
#undef START

using $DefaultListModelAddAllTest$MyListDataListener = ::DefaultListModelAddAllTest$MyListDataListener;
using $Serializable = ::java::io::Serializable;
using $ArrayIndexOutOfBoundsException = ::java::lang::ArrayIndexOutOfBoundsException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $AbstractCollection = ::java::util::AbstractCollection;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $TreeSet = ::java::util::TreeSet;
using $Vector = ::java::util::Vector;
using $BiConsumer = ::java::util::function::BiConsumer;
using $ObjIntConsumer = ::java::util::function::ObjIntConsumer;
using $Supplier = ::java::util::function::Supplier;
using $IntStream = ::java::util::stream::IntStream;
using $DefaultListModel = ::javax::swing::DefaultListModel;

class DefaultListModelAddAllTest$$Lambda$Vector : public $Supplier {
	$class(DefaultListModelAddAllTest$$Lambda$Vector, $NO_CLASS_INIT, $Supplier)
public:
	void init$() {
	}
	virtual $Object* get() override {
		return $of($new($Vector));
	}
};
$Class* DefaultListModelAddAllTest$$Lambda$Vector::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DefaultListModelAddAllTest$$Lambda$Vector, init$, void)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(DefaultListModelAddAllTest$$Lambda$Vector, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"DefaultListModelAddAllTest$$Lambda$Vector",
		"java.lang.Object",
		"java.util.function.Supplier",
		nullptr,
		methodInfos$$
	};
	$loadClass(DefaultListModelAddAllTest$$Lambda$Vector, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DefaultListModelAddAllTest$$Lambda$Vector);
	});
	return class$;
}
$Class* DefaultListModelAddAllTest$$Lambda$Vector::class$ = nullptr;

class DefaultListModelAddAllTest$$Lambda$add$1 : public $ObjIntConsumer {
	$class(DefaultListModelAddAllTest$$Lambda$add$1, $NO_CLASS_INIT, $ObjIntConsumer)
public:
	void init$() {
	}
	virtual void accept(Object$* inst$, int32_t arg0) override {
		$sure($Vector, inst$)->add($of(arg0));
	}
};
$Class* DefaultListModelAddAllTest$$Lambda$add$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DefaultListModelAddAllTest$$Lambda$add$1, init$, void)},
		{"accept", "(Ljava/lang/Object;I)V", nullptr, $PUBLIC, $virtualMethod(DefaultListModelAddAllTest$$Lambda$add$1, accept, void, Object$*, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"DefaultListModelAddAllTest$$Lambda$add$1",
		"java.lang.Object",
		"java.util.function.ObjIntConsumer",
		nullptr,
		methodInfos$$
	};
	$loadClass(DefaultListModelAddAllTest$$Lambda$add$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DefaultListModelAddAllTest$$Lambda$add$1);
	});
	return class$;
}
$Class* DefaultListModelAddAllTest$$Lambda$add$1::class$ = nullptr;

class DefaultListModelAddAllTest$$Lambda$addAll$2 : public $BiConsumer {
	$class(DefaultListModelAddAllTest$$Lambda$addAll$2, $NO_CLASS_INIT, $BiConsumer)
public:
	void init$() {
	}
	virtual void accept(Object$* inst$, Object$* arg0) override {
		$sure($Vector, inst$)->addAll($cast($Collection, arg0));
	}
};
$Class* DefaultListModelAddAllTest$$Lambda$addAll$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DefaultListModelAddAllTest$$Lambda$addAll$2, init$, void)},
		{"accept", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(DefaultListModelAddAllTest$$Lambda$addAll$2, accept, void, Object$*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"DefaultListModelAddAllTest$$Lambda$addAll$2",
		"java.lang.Object",
		"java.util.function.BiConsumer",
		nullptr,
		methodInfos$$
	};
	$loadClass(DefaultListModelAddAllTest$$Lambda$addAll$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DefaultListModelAddAllTest$$Lambda$addAll$2);
	});
	return class$;
}
$Class* DefaultListModelAddAllTest$$Lambda$addAll$2::class$ = nullptr;

class DefaultListModelAddAllTest$$Lambda$TreeSet$3 : public $Supplier {
	$class(DefaultListModelAddAllTest$$Lambda$TreeSet$3, $NO_CLASS_INIT, $Supplier)
public:
	void init$() {
	}
	virtual $Object* get() override {
		return $of($new($TreeSet));
	}
};
$Class* DefaultListModelAddAllTest$$Lambda$TreeSet$3::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DefaultListModelAddAllTest$$Lambda$TreeSet$3, init$, void)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(DefaultListModelAddAllTest$$Lambda$TreeSet$3, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"DefaultListModelAddAllTest$$Lambda$TreeSet$3",
		"java.lang.Object",
		"java.util.function.Supplier",
		nullptr,
		methodInfos$$
	};
	$loadClass(DefaultListModelAddAllTest$$Lambda$TreeSet$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DefaultListModelAddAllTest$$Lambda$TreeSet$3);
	});
	return class$;
}
$Class* DefaultListModelAddAllTest$$Lambda$TreeSet$3::class$ = nullptr;

class DefaultListModelAddAllTest$$Lambda$add$4 : public $ObjIntConsumer {
	$class(DefaultListModelAddAllTest$$Lambda$add$4, $NO_CLASS_INIT, $ObjIntConsumer)
public:
	void init$() {
	}
	virtual void accept(Object$* inst$, int32_t arg0) override {
		$sure($TreeSet, inst$)->add($of(arg0));
	}
};
$Class* DefaultListModelAddAllTest$$Lambda$add$4::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DefaultListModelAddAllTest$$Lambda$add$4, init$, void)},
		{"accept", "(Ljava/lang/Object;I)V", nullptr, $PUBLIC, $virtualMethod(DefaultListModelAddAllTest$$Lambda$add$4, accept, void, Object$*, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"DefaultListModelAddAllTest$$Lambda$add$4",
		"java.lang.Object",
		"java.util.function.ObjIntConsumer",
		nullptr,
		methodInfos$$
	};
	$loadClass(DefaultListModelAddAllTest$$Lambda$add$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DefaultListModelAddAllTest$$Lambda$add$4);
	});
	return class$;
}
$Class* DefaultListModelAddAllTest$$Lambda$add$4::class$ = nullptr;

class DefaultListModelAddAllTest$$Lambda$addAll$5 : public $BiConsumer {
	$class(DefaultListModelAddAllTest$$Lambda$addAll$5, $NO_CLASS_INIT, $BiConsumer)
public:
	void init$() {
	}
	virtual void accept(Object$* inst$, Object$* arg0) override {
		$sure($TreeSet, inst$)->addAll($cast($Collection, arg0));
	}
};
$Class* DefaultListModelAddAllTest$$Lambda$addAll$5::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DefaultListModelAddAllTest$$Lambda$addAll$5, init$, void)},
		{"accept", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(DefaultListModelAddAllTest$$Lambda$addAll$5, accept, void, Object$*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"DefaultListModelAddAllTest$$Lambda$addAll$5",
		"java.lang.Object",
		"java.util.function.BiConsumer",
		nullptr,
		methodInfos$$
	};
	$loadClass(DefaultListModelAddAllTest$$Lambda$addAll$5, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DefaultListModelAddAllTest$$Lambda$addAll$5);
	});
	return class$;
}
$Class* DefaultListModelAddAllTest$$Lambda$addAll$5::class$ = nullptr;

class DefaultListModelAddAllTest$$Lambda$ArrayList$6 : public $Supplier {
	$class(DefaultListModelAddAllTest$$Lambda$ArrayList$6, $NO_CLASS_INIT, $Supplier)
public:
	void init$() {
	}
	virtual $Object* get() override {
		return $of($new($ArrayList));
	}
};
$Class* DefaultListModelAddAllTest$$Lambda$ArrayList$6::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DefaultListModelAddAllTest$$Lambda$ArrayList$6, init$, void)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(DefaultListModelAddAllTest$$Lambda$ArrayList$6, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"DefaultListModelAddAllTest$$Lambda$ArrayList$6",
		"java.lang.Object",
		"java.util.function.Supplier",
		nullptr,
		methodInfos$$
	};
	$loadClass(DefaultListModelAddAllTest$$Lambda$ArrayList$6, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DefaultListModelAddAllTest$$Lambda$ArrayList$6);
	});
	return class$;
}
$Class* DefaultListModelAddAllTest$$Lambda$ArrayList$6::class$ = nullptr;

class DefaultListModelAddAllTest$$Lambda$add$7 : public $ObjIntConsumer {
	$class(DefaultListModelAddAllTest$$Lambda$add$7, $NO_CLASS_INIT, $ObjIntConsumer)
public:
	void init$() {
	}
	virtual void accept(Object$* inst$, int32_t arg0) override {
		$sure($ArrayList, inst$)->add($of(arg0));
	}
};
$Class* DefaultListModelAddAllTest$$Lambda$add$7::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DefaultListModelAddAllTest$$Lambda$add$7, init$, void)},
		{"accept", "(Ljava/lang/Object;I)V", nullptr, $PUBLIC, $virtualMethod(DefaultListModelAddAllTest$$Lambda$add$7, accept, void, Object$*, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"DefaultListModelAddAllTest$$Lambda$add$7",
		"java.lang.Object",
		"java.util.function.ObjIntConsumer",
		nullptr,
		methodInfos$$
	};
	$loadClass(DefaultListModelAddAllTest$$Lambda$add$7, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DefaultListModelAddAllTest$$Lambda$add$7);
	});
	return class$;
}
$Class* DefaultListModelAddAllTest$$Lambda$add$7::class$ = nullptr;

class DefaultListModelAddAllTest$$Lambda$addAll$8 : public $BiConsumer {
	$class(DefaultListModelAddAllTest$$Lambda$addAll$8, $NO_CLASS_INIT, $BiConsumer)
public:
	void init$() {
	}
	virtual void accept(Object$* inst$, Object$* arg0) override {
		$sure($ArrayList, inst$)->addAll($cast($Collection, arg0));
	}
};
$Class* DefaultListModelAddAllTest$$Lambda$addAll$8::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DefaultListModelAddAllTest$$Lambda$addAll$8, init$, void)},
		{"accept", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(DefaultListModelAddAllTest$$Lambda$addAll$8, accept, void, Object$*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"DefaultListModelAddAllTest$$Lambda$addAll$8",
		"java.lang.Object",
		"java.util.function.BiConsumer",
		nullptr,
		methodInfos$$
	};
	$loadClass(DefaultListModelAddAllTest$$Lambda$addAll$8, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DefaultListModelAddAllTest$$Lambda$addAll$8);
	});
	return class$;
}
$Class* DefaultListModelAddAllTest$$Lambda$addAll$8::class$ = nullptr;

$Vector* DefaultListModelAddAllTest::vector = nullptr;
$TreeSet* DefaultListModelAddAllTest::set = nullptr;
$ArrayList* DefaultListModelAddAllTest::arrayList = nullptr;

void DefaultListModelAddAllTest::init$() {
}

void DefaultListModelAddAllTest::main($StringArray* args) {
	$init(DefaultListModelAddAllTest);
	checkAddAll();
	checkAddAllWithIndex();
	$nc($System::out)->println("Test case passed."_s);
}

void DefaultListModelAddAllTest::checkAddAll() {
	$init(DefaultListModelAddAllTest);
	$useLocalObjectStack();
	$var($DefaultListModel, lm, $new($DefaultListModel));
	lm->addListDataListener($$new($DefaultListModelAddAllTest$MyListDataListener));
	try {
		lm->addAll($cast($AbstractCollection, DefaultListModelAddAllTest::arrayList));
		$nc($System::out)->println($$str({"Successfully added "_s, $$str((DefaultListModelAddAllTest::END - DefaultListModelAddAllTest::START)), "elements."_s}));
	} catch ($Exception& e) {
		$throwNew($RuntimeException, $$str({"Test case failed. "_s, $(e->getMessage())}));
	}
}

void DefaultListModelAddAllTest::checkAddAllWithIndex() {
	$init(DefaultListModelAddAllTest);
	$useLocalObjectStack();
	$var($DefaultListModel, lm, $new($DefaultListModel));
	lm->addListDataListener($$new($DefaultListModelAddAllTest$MyListDataListener));
	lm->addAll($cast($AbstractCollection, DefaultListModelAddAllTest::set));
	try {
		lm->addAll(DefaultListModelAddAllTest::START - 1, $cast($AbstractCollection, DefaultListModelAddAllTest::vector));
		$throwNew($RuntimeException, "Test case failed. Expected failure not reported."_s);
	} catch ($ArrayIndexOutOfBoundsException& e) {
		$nc($System::out)->println("Encountered exception as expected, when trying to add elementsbefore the start of the list."_s);
	}
	try {
		lm->addAll(15, $cast($AbstractCollection, DefaultListModelAddAllTest::vector));
		$nc($System::out)->println("Successfully added elements at a particular index"_s);
	} catch ($Exception& e) {
		$throwNew($RuntimeException, $$str({"Unexpected failure: "_s, $(e->getMessage())}));
	}
	try {
		lm->addAll(lm->getSize() + 1, $cast($AbstractCollection, DefaultListModelAddAllTest::vector));
		$throwNew($RuntimeException, "Test case failed. Expected failure not reported."_s);
	} catch ($ArrayIndexOutOfBoundsException& e) {
		$nc($System::out)->println("Encountered exception as expected, when trying to add elementsafter the end of the list."_s);
	}
}

void DefaultListModelAddAllTest::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$var($Supplier, var$0, $new(DefaultListModelAddAllTest$$Lambda$Vector));
	$var($ObjIntConsumer, var$1, $new(DefaultListModelAddAllTest$$Lambda$add$1));
	$assignStatic(DefaultListModelAddAllTest::vector, $cast($Vector, $$nc($IntStream::range(DefaultListModelAddAllTest::START, DefaultListModelAddAllTest::END))->collect(var$0, var$1, $$new(DefaultListModelAddAllTest$$Lambda$addAll$2))));
	$var($Supplier, var$2, $new(DefaultListModelAddAllTest$$Lambda$TreeSet$3));
	$var($ObjIntConsumer, var$3, $new(DefaultListModelAddAllTest$$Lambda$add$4));
	$assignStatic(DefaultListModelAddAllTest::set, $cast($TreeSet, $$nc($IntStream::range(DefaultListModelAddAllTest::START, DefaultListModelAddAllTest::END))->collect(var$2, var$3, $$new(DefaultListModelAddAllTest$$Lambda$addAll$5))));
	$var($Supplier, var$4, $new(DefaultListModelAddAllTest$$Lambda$ArrayList$6));
	$var($ObjIntConsumer, var$5, $new(DefaultListModelAddAllTest$$Lambda$add$7));
	$assignStatic(DefaultListModelAddAllTest::arrayList, $cast($ArrayList, $$nc($IntStream::range(DefaultListModelAddAllTest::START, DefaultListModelAddAllTest::END))->collect(var$4, var$5, $$new(DefaultListModelAddAllTest$$Lambda$addAll$8))));
}

DefaultListModelAddAllTest::DefaultListModelAddAllTest() {
}

$Class* DefaultListModelAddAllTest::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("DefaultListModelAddAllTest$$Lambda$Vector")) {
			return DefaultListModelAddAllTest$$Lambda$Vector::load$(name, initialize);
		}
		if (name->equals("DefaultListModelAddAllTest$$Lambda$add$1")) {
			return DefaultListModelAddAllTest$$Lambda$add$1::load$(name, initialize);
		}
		if (name->equals("DefaultListModelAddAllTest$$Lambda$addAll$2")) {
			return DefaultListModelAddAllTest$$Lambda$addAll$2::load$(name, initialize);
		}
		if (name->equals("DefaultListModelAddAllTest$$Lambda$TreeSet$3")) {
			return DefaultListModelAddAllTest$$Lambda$TreeSet$3::load$(name, initialize);
		}
		if (name->equals("DefaultListModelAddAllTest$$Lambda$add$4")) {
			return DefaultListModelAddAllTest$$Lambda$add$4::load$(name, initialize);
		}
		if (name->equals("DefaultListModelAddAllTest$$Lambda$addAll$5")) {
			return DefaultListModelAddAllTest$$Lambda$addAll$5::load$(name, initialize);
		}
		if (name->equals("DefaultListModelAddAllTest$$Lambda$ArrayList$6")) {
			return DefaultListModelAddAllTest$$Lambda$ArrayList$6::load$(name, initialize);
		}
		if (name->equals("DefaultListModelAddAllTest$$Lambda$add$7")) {
			return DefaultListModelAddAllTest$$Lambda$add$7::load$(name, initialize);
		}
		if (name->equals("DefaultListModelAddAllTest$$Lambda$addAll$8")) {
			return DefaultListModelAddAllTest$$Lambda$addAll$8::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"START", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DefaultListModelAddAllTest, START)},
		{"END", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DefaultListModelAddAllTest, END)},
		{"vector", "Ljava/util/Vector;", "Ljava/util/Vector<Ljava/lang/Integer;>;", $PRIVATE | $STATIC | $FINAL, $staticField(DefaultListModelAddAllTest, vector)},
		{"set", "Ljava/util/TreeSet;", "Ljava/util/TreeSet<Ljava/lang/Integer;>;", $PRIVATE | $STATIC | $FINAL, $staticField(DefaultListModelAddAllTest, set)},
		{"arrayList", "Ljava/util/ArrayList;", "Ljava/util/ArrayList<Ljava/lang/Integer;>;", $PRIVATE | $STATIC | $FINAL, $staticField(DefaultListModelAddAllTest, arrayList)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DefaultListModelAddAllTest, init$, void)},
		{"checkAddAll", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(DefaultListModelAddAllTest, checkAddAll, void)},
		{"checkAddAllWithIndex", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(DefaultListModelAddAllTest, checkAddAllWithIndex, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(DefaultListModelAddAllTest, main, void, $StringArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"DefaultListModelAddAllTest$MyListDataListener", "DefaultListModelAddAllTest", "MyListDataListener", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"DefaultListModelAddAllTest",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"DefaultListModelAddAllTest$MyListDataListener"
	};
	$loadClass(DefaultListModelAddAllTest, name, initialize, &classInfo$$, DefaultListModelAddAllTest::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(DefaultListModelAddAllTest);
	});
	return class$;
}

$Class* DefaultListModelAddAllTest::class$ = nullptr;