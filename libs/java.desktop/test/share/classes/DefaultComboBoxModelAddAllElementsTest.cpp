#include <DefaultComboBoxModelAddAllElementsTest.h>
#include <DefaultComboBoxModelAddAllElementsTest$MyListDataListener.h>
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
#include <javax/swing/DefaultComboBoxModel.h>
#include <jcpp.h>

#undef END
#undef START

using $DefaultComboBoxModelAddAllElementsTest$MyListDataListener = ::DefaultComboBoxModelAddAllElementsTest$MyListDataListener;
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
using $DefaultComboBoxModel = ::javax::swing::DefaultComboBoxModel;

class DefaultComboBoxModelAddAllElementsTest$$Lambda$Vector : public $Supplier {
	$class(DefaultComboBoxModelAddAllElementsTest$$Lambda$Vector, $NO_CLASS_INIT, $Supplier)
public:
	void init$() {
	}
	virtual $Object* get() override {
		 return $of($new($Vector));
	}
};
$Class* DefaultComboBoxModelAddAllElementsTest$$Lambda$Vector::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DefaultComboBoxModelAddAllElementsTest$$Lambda$Vector, init$, void)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(DefaultComboBoxModelAddAllElementsTest$$Lambda$Vector, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"DefaultComboBoxModelAddAllElementsTest$$Lambda$Vector",
		"java.lang.Object",
		"java.util.function.Supplier",
		nullptr,
		methodInfos$$
	};
	$loadClass(DefaultComboBoxModelAddAllElementsTest$$Lambda$Vector, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DefaultComboBoxModelAddAllElementsTest$$Lambda$Vector);
	});
	return class$;
}
$Class* DefaultComboBoxModelAddAllElementsTest$$Lambda$Vector::class$ = nullptr;

class DefaultComboBoxModelAddAllElementsTest$$Lambda$add$1 : public $ObjIntConsumer {
	$class(DefaultComboBoxModelAddAllElementsTest$$Lambda$add$1, $NO_CLASS_INIT, $ObjIntConsumer)
public:
	void init$() {
	}
	virtual void accept(Object$* inst$, int32_t arg0) override {
		$sure($Vector, inst$)->add($of(arg0));
	}
};
$Class* DefaultComboBoxModelAddAllElementsTest$$Lambda$add$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DefaultComboBoxModelAddAllElementsTest$$Lambda$add$1, init$, void)},
		{"accept", "(Ljava/lang/Object;I)V", nullptr, $PUBLIC, $virtualMethod(DefaultComboBoxModelAddAllElementsTest$$Lambda$add$1, accept, void, Object$*, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"DefaultComboBoxModelAddAllElementsTest$$Lambda$add$1",
		"java.lang.Object",
		"java.util.function.ObjIntConsumer",
		nullptr,
		methodInfos$$
	};
	$loadClass(DefaultComboBoxModelAddAllElementsTest$$Lambda$add$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DefaultComboBoxModelAddAllElementsTest$$Lambda$add$1);
	});
	return class$;
}
$Class* DefaultComboBoxModelAddAllElementsTest$$Lambda$add$1::class$ = nullptr;

class DefaultComboBoxModelAddAllElementsTest$$Lambda$addAll$2 : public $BiConsumer {
	$class(DefaultComboBoxModelAddAllElementsTest$$Lambda$addAll$2, $NO_CLASS_INIT, $BiConsumer)
public:
	void init$() {
	}
	virtual void accept(Object$* inst$, Object$* arg0) override {
		$sure($Vector, inst$)->addAll($cast($Collection, arg0));
	}
};
$Class* DefaultComboBoxModelAddAllElementsTest$$Lambda$addAll$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DefaultComboBoxModelAddAllElementsTest$$Lambda$addAll$2, init$, void)},
		{"accept", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(DefaultComboBoxModelAddAllElementsTest$$Lambda$addAll$2, accept, void, Object$*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"DefaultComboBoxModelAddAllElementsTest$$Lambda$addAll$2",
		"java.lang.Object",
		"java.util.function.BiConsumer",
		nullptr,
		methodInfos$$
	};
	$loadClass(DefaultComboBoxModelAddAllElementsTest$$Lambda$addAll$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DefaultComboBoxModelAddAllElementsTest$$Lambda$addAll$2);
	});
	return class$;
}
$Class* DefaultComboBoxModelAddAllElementsTest$$Lambda$addAll$2::class$ = nullptr;

class DefaultComboBoxModelAddAllElementsTest$$Lambda$TreeSet$3 : public $Supplier {
	$class(DefaultComboBoxModelAddAllElementsTest$$Lambda$TreeSet$3, $NO_CLASS_INIT, $Supplier)
public:
	void init$() {
	}
	virtual $Object* get() override {
		 return $of($new($TreeSet));
	}
};
$Class* DefaultComboBoxModelAddAllElementsTest$$Lambda$TreeSet$3::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DefaultComboBoxModelAddAllElementsTest$$Lambda$TreeSet$3, init$, void)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(DefaultComboBoxModelAddAllElementsTest$$Lambda$TreeSet$3, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"DefaultComboBoxModelAddAllElementsTest$$Lambda$TreeSet$3",
		"java.lang.Object",
		"java.util.function.Supplier",
		nullptr,
		methodInfos$$
	};
	$loadClass(DefaultComboBoxModelAddAllElementsTest$$Lambda$TreeSet$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DefaultComboBoxModelAddAllElementsTest$$Lambda$TreeSet$3);
	});
	return class$;
}
$Class* DefaultComboBoxModelAddAllElementsTest$$Lambda$TreeSet$3::class$ = nullptr;

class DefaultComboBoxModelAddAllElementsTest$$Lambda$add$4 : public $ObjIntConsumer {
	$class(DefaultComboBoxModelAddAllElementsTest$$Lambda$add$4, $NO_CLASS_INIT, $ObjIntConsumer)
public:
	void init$() {
	}
	virtual void accept(Object$* inst$, int32_t arg0) override {
		$sure($TreeSet, inst$)->add($of(arg0));
	}
};
$Class* DefaultComboBoxModelAddAllElementsTest$$Lambda$add$4::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DefaultComboBoxModelAddAllElementsTest$$Lambda$add$4, init$, void)},
		{"accept", "(Ljava/lang/Object;I)V", nullptr, $PUBLIC, $virtualMethod(DefaultComboBoxModelAddAllElementsTest$$Lambda$add$4, accept, void, Object$*, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"DefaultComboBoxModelAddAllElementsTest$$Lambda$add$4",
		"java.lang.Object",
		"java.util.function.ObjIntConsumer",
		nullptr,
		methodInfos$$
	};
	$loadClass(DefaultComboBoxModelAddAllElementsTest$$Lambda$add$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DefaultComboBoxModelAddAllElementsTest$$Lambda$add$4);
	});
	return class$;
}
$Class* DefaultComboBoxModelAddAllElementsTest$$Lambda$add$4::class$ = nullptr;

class DefaultComboBoxModelAddAllElementsTest$$Lambda$addAll$5 : public $BiConsumer {
	$class(DefaultComboBoxModelAddAllElementsTest$$Lambda$addAll$5, $NO_CLASS_INIT, $BiConsumer)
public:
	void init$() {
	}
	virtual void accept(Object$* inst$, Object$* arg0) override {
		$sure($TreeSet, inst$)->addAll($cast($Collection, arg0));
	}
};
$Class* DefaultComboBoxModelAddAllElementsTest$$Lambda$addAll$5::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DefaultComboBoxModelAddAllElementsTest$$Lambda$addAll$5, init$, void)},
		{"accept", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(DefaultComboBoxModelAddAllElementsTest$$Lambda$addAll$5, accept, void, Object$*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"DefaultComboBoxModelAddAllElementsTest$$Lambda$addAll$5",
		"java.lang.Object",
		"java.util.function.BiConsumer",
		nullptr,
		methodInfos$$
	};
	$loadClass(DefaultComboBoxModelAddAllElementsTest$$Lambda$addAll$5, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DefaultComboBoxModelAddAllElementsTest$$Lambda$addAll$5);
	});
	return class$;
}
$Class* DefaultComboBoxModelAddAllElementsTest$$Lambda$addAll$5::class$ = nullptr;

class DefaultComboBoxModelAddAllElementsTest$$Lambda$ArrayList$6 : public $Supplier {
	$class(DefaultComboBoxModelAddAllElementsTest$$Lambda$ArrayList$6, $NO_CLASS_INIT, $Supplier)
public:
	void init$() {
	}
	virtual $Object* get() override {
		 return $of($new($ArrayList));
	}
};
$Class* DefaultComboBoxModelAddAllElementsTest$$Lambda$ArrayList$6::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DefaultComboBoxModelAddAllElementsTest$$Lambda$ArrayList$6, init$, void)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(DefaultComboBoxModelAddAllElementsTest$$Lambda$ArrayList$6, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"DefaultComboBoxModelAddAllElementsTest$$Lambda$ArrayList$6",
		"java.lang.Object",
		"java.util.function.Supplier",
		nullptr,
		methodInfos$$
	};
	$loadClass(DefaultComboBoxModelAddAllElementsTest$$Lambda$ArrayList$6, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DefaultComboBoxModelAddAllElementsTest$$Lambda$ArrayList$6);
	});
	return class$;
}
$Class* DefaultComboBoxModelAddAllElementsTest$$Lambda$ArrayList$6::class$ = nullptr;

class DefaultComboBoxModelAddAllElementsTest$$Lambda$add$7 : public $ObjIntConsumer {
	$class(DefaultComboBoxModelAddAllElementsTest$$Lambda$add$7, $NO_CLASS_INIT, $ObjIntConsumer)
public:
	void init$() {
	}
	virtual void accept(Object$* inst$, int32_t arg0) override {
		$sure($ArrayList, inst$)->add($of(arg0));
	}
};
$Class* DefaultComboBoxModelAddAllElementsTest$$Lambda$add$7::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DefaultComboBoxModelAddAllElementsTest$$Lambda$add$7, init$, void)},
		{"accept", "(Ljava/lang/Object;I)V", nullptr, $PUBLIC, $virtualMethod(DefaultComboBoxModelAddAllElementsTest$$Lambda$add$7, accept, void, Object$*, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"DefaultComboBoxModelAddAllElementsTest$$Lambda$add$7",
		"java.lang.Object",
		"java.util.function.ObjIntConsumer",
		nullptr,
		methodInfos$$
	};
	$loadClass(DefaultComboBoxModelAddAllElementsTest$$Lambda$add$7, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DefaultComboBoxModelAddAllElementsTest$$Lambda$add$7);
	});
	return class$;
}
$Class* DefaultComboBoxModelAddAllElementsTest$$Lambda$add$7::class$ = nullptr;

class DefaultComboBoxModelAddAllElementsTest$$Lambda$addAll$8 : public $BiConsumer {
	$class(DefaultComboBoxModelAddAllElementsTest$$Lambda$addAll$8, $NO_CLASS_INIT, $BiConsumer)
public:
	void init$() {
	}
	virtual void accept(Object$* inst$, Object$* arg0) override {
		$sure($ArrayList, inst$)->addAll($cast($Collection, arg0));
	}
};
$Class* DefaultComboBoxModelAddAllElementsTest$$Lambda$addAll$8::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DefaultComboBoxModelAddAllElementsTest$$Lambda$addAll$8, init$, void)},
		{"accept", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(DefaultComboBoxModelAddAllElementsTest$$Lambda$addAll$8, accept, void, Object$*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"DefaultComboBoxModelAddAllElementsTest$$Lambda$addAll$8",
		"java.lang.Object",
		"java.util.function.BiConsumer",
		nullptr,
		methodInfos$$
	};
	$loadClass(DefaultComboBoxModelAddAllElementsTest$$Lambda$addAll$8, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DefaultComboBoxModelAddAllElementsTest$$Lambda$addAll$8);
	});
	return class$;
}
$Class* DefaultComboBoxModelAddAllElementsTest$$Lambda$addAll$8::class$ = nullptr;

$Vector* DefaultComboBoxModelAddAllElementsTest::vector = nullptr;
$TreeSet* DefaultComboBoxModelAddAllElementsTest::set = nullptr;
$ArrayList* DefaultComboBoxModelAddAllElementsTest::arrayList = nullptr;

void DefaultComboBoxModelAddAllElementsTest::init$() {
}

void DefaultComboBoxModelAddAllElementsTest::main($StringArray* args) {
	$init(DefaultComboBoxModelAddAllElementsTest);
	checkAddAll();
	checkAddAllWithIndex();
	$nc($System::out)->println("Test case passed."_s);
}

void DefaultComboBoxModelAddAllElementsTest::checkAddAll() {
	$init(DefaultComboBoxModelAddAllElementsTest);
	$useLocalObjectStack();
	$var($DefaultComboBoxModel, cm, $new($DefaultComboBoxModel));
	cm->addListDataListener($$new($DefaultComboBoxModelAddAllElementsTest$MyListDataListener));
	try {
		cm->addAll($cast($AbstractCollection, DefaultComboBoxModelAddAllElementsTest::arrayList));
		$nc($System::out)->println($$str({"Successfully added "_s, $$str((DefaultComboBoxModelAddAllElementsTest::END - DefaultComboBoxModelAddAllElementsTest::START)), "elements."_s}));
	} catch ($Exception& e) {
		$throwNew($RuntimeException, $$str({"Test case failed. "_s, $(e->getMessage())}));
	}
}

void DefaultComboBoxModelAddAllElementsTest::checkAddAllWithIndex() {
	$init(DefaultComboBoxModelAddAllElementsTest);
	$useLocalObjectStack();
	$var($DefaultComboBoxModel, cm, $new($DefaultComboBoxModel));
	cm->addListDataListener($$new($DefaultComboBoxModelAddAllElementsTest$MyListDataListener));
	cm->addAll($cast($AbstractCollection, DefaultComboBoxModelAddAllElementsTest::set));
	try {
		cm->addAll(DefaultComboBoxModelAddAllElementsTest::START - 1, $cast($AbstractCollection, DefaultComboBoxModelAddAllElementsTest::vector));
		$throwNew($RuntimeException, "Test case failed. Expected failure not reported."_s);
	} catch ($ArrayIndexOutOfBoundsException& e) {
		$nc($System::out)->println("Encountered exception as expected, when trying to add elementsbefore the start of the list."_s);
	}
	try {
		cm->addAll(15, $cast($AbstractCollection, DefaultComboBoxModelAddAllElementsTest::vector));
		$nc($System::out)->println("Successfully added elements at a particular index"_s);
	} catch ($Exception& e) {
		$throwNew($RuntimeException, $$str({"Unexpected failure: "_s, $(e->getMessage())}));
	}
	try {
		cm->addAll(cm->getSize() + 1, $cast($AbstractCollection, DefaultComboBoxModelAddAllElementsTest::vector));
		$throwNew($RuntimeException, "Test case failed. Expected failure not reported."_s);
	} catch ($ArrayIndexOutOfBoundsException& e) {
		$nc($System::out)->println("Encountered exception as expected, when trying to add elementsafter the end of the list."_s);
	}
}

void DefaultComboBoxModelAddAllElementsTest::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$var($Supplier, var$0, $new(DefaultComboBoxModelAddAllElementsTest$$Lambda$Vector));
	$var($ObjIntConsumer, var$1, $new(DefaultComboBoxModelAddAllElementsTest$$Lambda$add$1));
	$assignStatic(DefaultComboBoxModelAddAllElementsTest::vector, $cast($Vector, $$nc($IntStream::range(DefaultComboBoxModelAddAllElementsTest::START, DefaultComboBoxModelAddAllElementsTest::END))->collect(var$0, var$1, $$new(DefaultComboBoxModelAddAllElementsTest$$Lambda$addAll$2))));
	$var($Supplier, var$2, $new(DefaultComboBoxModelAddAllElementsTest$$Lambda$TreeSet$3));
	$var($ObjIntConsumer, var$3, $new(DefaultComboBoxModelAddAllElementsTest$$Lambda$add$4));
	$assignStatic(DefaultComboBoxModelAddAllElementsTest::set, $cast($TreeSet, $$nc($IntStream::range(DefaultComboBoxModelAddAllElementsTest::START, DefaultComboBoxModelAddAllElementsTest::END))->collect(var$2, var$3, $$new(DefaultComboBoxModelAddAllElementsTest$$Lambda$addAll$5))));
	$var($Supplier, var$4, $new(DefaultComboBoxModelAddAllElementsTest$$Lambda$ArrayList$6));
	$var($ObjIntConsumer, var$5, $new(DefaultComboBoxModelAddAllElementsTest$$Lambda$add$7));
	$assignStatic(DefaultComboBoxModelAddAllElementsTest::arrayList, $cast($ArrayList, $$nc($IntStream::range(DefaultComboBoxModelAddAllElementsTest::START, DefaultComboBoxModelAddAllElementsTest::END))->collect(var$4, var$5, $$new(DefaultComboBoxModelAddAllElementsTest$$Lambda$addAll$8))));
}

DefaultComboBoxModelAddAllElementsTest::DefaultComboBoxModelAddAllElementsTest() {
}

$Class* DefaultComboBoxModelAddAllElementsTest::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("DefaultComboBoxModelAddAllElementsTest$$Lambda$Vector")) {
			return DefaultComboBoxModelAddAllElementsTest$$Lambda$Vector::load$(name, initialize);
		}
		if (name->equals("DefaultComboBoxModelAddAllElementsTest$$Lambda$add$1")) {
			return DefaultComboBoxModelAddAllElementsTest$$Lambda$add$1::load$(name, initialize);
		}
		if (name->equals("DefaultComboBoxModelAddAllElementsTest$$Lambda$addAll$2")) {
			return DefaultComboBoxModelAddAllElementsTest$$Lambda$addAll$2::load$(name, initialize);
		}
		if (name->equals("DefaultComboBoxModelAddAllElementsTest$$Lambda$TreeSet$3")) {
			return DefaultComboBoxModelAddAllElementsTest$$Lambda$TreeSet$3::load$(name, initialize);
		}
		if (name->equals("DefaultComboBoxModelAddAllElementsTest$$Lambda$add$4")) {
			return DefaultComboBoxModelAddAllElementsTest$$Lambda$add$4::load$(name, initialize);
		}
		if (name->equals("DefaultComboBoxModelAddAllElementsTest$$Lambda$addAll$5")) {
			return DefaultComboBoxModelAddAllElementsTest$$Lambda$addAll$5::load$(name, initialize);
		}
		if (name->equals("DefaultComboBoxModelAddAllElementsTest$$Lambda$ArrayList$6")) {
			return DefaultComboBoxModelAddAllElementsTest$$Lambda$ArrayList$6::load$(name, initialize);
		}
		if (name->equals("DefaultComboBoxModelAddAllElementsTest$$Lambda$add$7")) {
			return DefaultComboBoxModelAddAllElementsTest$$Lambda$add$7::load$(name, initialize);
		}
		if (name->equals("DefaultComboBoxModelAddAllElementsTest$$Lambda$addAll$8")) {
			return DefaultComboBoxModelAddAllElementsTest$$Lambda$addAll$8::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"START", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DefaultComboBoxModelAddAllElementsTest, START)},
		{"END", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DefaultComboBoxModelAddAllElementsTest, END)},
		{"vector", "Ljava/util/Vector;", "Ljava/util/Vector<Ljava/lang/Integer;>;", $PRIVATE | $STATIC | $FINAL, $staticField(DefaultComboBoxModelAddAllElementsTest, vector)},
		{"set", "Ljava/util/TreeSet;", "Ljava/util/TreeSet<Ljava/lang/Integer;>;", $PRIVATE | $STATIC | $FINAL, $staticField(DefaultComboBoxModelAddAllElementsTest, set)},
		{"arrayList", "Ljava/util/ArrayList;", "Ljava/util/ArrayList<Ljava/lang/Integer;>;", $PRIVATE | $STATIC | $FINAL, $staticField(DefaultComboBoxModelAddAllElementsTest, arrayList)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DefaultComboBoxModelAddAllElementsTest, init$, void)},
		{"checkAddAll", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(DefaultComboBoxModelAddAllElementsTest, checkAddAll, void)},
		{"checkAddAllWithIndex", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(DefaultComboBoxModelAddAllElementsTest, checkAddAllWithIndex, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(DefaultComboBoxModelAddAllElementsTest, main, void, $StringArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"DefaultComboBoxModelAddAllElementsTest$MyListDataListener", "DefaultComboBoxModelAddAllElementsTest", "MyListDataListener", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"DefaultComboBoxModelAddAllElementsTest",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"DefaultComboBoxModelAddAllElementsTest$MyListDataListener"
	};
	$loadClass(DefaultComboBoxModelAddAllElementsTest, name, initialize, &classInfo$$, DefaultComboBoxModelAddAllElementsTest::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(DefaultComboBoxModelAddAllElementsTest);
	});
	return class$;
}

$Class* DefaultComboBoxModelAddAllElementsTest::class$ = nullptr;