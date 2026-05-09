#include <sun/tools/jar/Validator.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/CharSequence.h>
#include <java/lang/NumberFormatException.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/module/ModuleDescriptor$Exports.h>
#include <java/lang/module/ModuleDescriptor$Opens.h>
#include <java/lang/module/ModuleDescriptor$Provides.h>
#include <java/lang/module/ModuleDescriptor$Requires$Modifier.h>
#include <java/lang/module/ModuleDescriptor$Requires.h>
#include <java/lang/module/ModuleDescriptor.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/HashMap.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Optional.h>
#include <java/util/Set.h>
#include <java/util/TreeMap.h>
#include <java/util/function/BiConsumer.h>
#include <java/util/function/BinaryOperator.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/Function.h>
#include <java/util/function/Predicate.h>
#include <java/util/function/Supplier.h>
#include <java/util/stream/Collector.h>
#include <java/util/stream/Collectors.h>
#include <java/util/stream/Stream.h>
#include <java/util/zip/ZipEntry.h>
#include <java/util/zip/ZipFile.h>
#include <sun/tools/jar/FingerPrint.h>
#include <sun/tools/jar/Main.h>
#include <sun/tools/jar/Validator$InvalidJarException.h>
#include <jcpp.h>

#undef TRANSITIVE
#undef VERSIONS_DIR_LENGTH

using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $Serializable = ::java::io::Serializable;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $ModuleDescriptor = ::java::lang::module::ModuleDescriptor;
using $ModuleDescriptor$Exports = ::java::lang::module::ModuleDescriptor$Exports;
using $ModuleDescriptor$Opens = ::java::lang::module::ModuleDescriptor$Opens;
using $ModuleDescriptor$Provides = ::java::lang::module::ModuleDescriptor$Provides;
using $ModuleDescriptor$Requires = ::java::lang::module::ModuleDescriptor$Requires;
using $ModuleDescriptor$Requires$Modifier = ::java::lang::module::ModuleDescriptor$Requires$Modifier;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $HashMap = ::java::util::HashMap;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $TreeMap = ::java::util::TreeMap;
using $BiConsumer = ::java::util::function::BiConsumer;
using $BinaryOperator = ::java::util::function::BinaryOperator;
using $Consumer = ::java::util::function::Consumer;
using $Function = ::java::util::function::Function;
using $Predicate = ::java::util::function::Predicate;
using $Supplier = ::java::util::function::Supplier;
using $Collectors = ::java::util::stream::Collectors;
using $ZipEntry = ::java::util::zip::ZipEntry;
using $ZipFile = ::java::util::zip::ZipFile;
using $FingerPrint = ::sun::tools::jar::FingerPrint;
using $Main = ::sun::tools::jar::Main;
using $Validator$InvalidJarException = ::sun::tools::jar::Validator$InvalidJarException;

namespace sun {
	namespace tools {
		namespace jar {

class Validator$$Lambda$lambda$validate$0 : public $Predicate {
	$class(Validator$$Lambda$lambda$validate$0, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* e) override {
		return Validator::lambda$validate$0($cast($ZipEntry, e));
	}
};
$Class* Validator$$Lambda$lambda$validate$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Validator$$Lambda$lambda$validate$0, init$, void)},
		{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(Validator$$Lambda$lambda$validate$0, test, bool, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"sun.tools.jar.Validator$$Lambda$lambda$validate$0",
		"java.lang.Object",
		"java.util.function.Predicate",
		nullptr,
		methodInfos$$
	};
	$loadClass(Validator$$Lambda$lambda$validate$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Validator$$Lambda$lambda$validate$0);
	});
	return class$;
}
$Class* Validator$$Lambda$lambda$validate$0::class$ = nullptr;

class Validator$$Lambda$getFingerPrint$1 : public $Function {
	$class(Validator$$Lambda$getFingerPrint$1, $NO_CLASS_INIT, $Function)
public:
	void init$(Validator* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* apply(Object$* ze) override {
		return $nc(inst$)->getFingerPrint($cast($ZipEntry, ze));
	}
	Validator* inst$ = nullptr;
};
$Class* Validator$$Lambda$getFingerPrint$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Validator$$Lambda$getFingerPrint$1, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/tools/jar/Validator;)V", nullptr, $PUBLIC, $method(Validator$$Lambda$getFingerPrint$1, init$, void, Validator*)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Validator$$Lambda$getFingerPrint$1, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"sun.tools.jar.Validator$$Lambda$getFingerPrint$1",
		"java.lang.Object",
		"java.util.function.Function",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Validator$$Lambda$getFingerPrint$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Validator$$Lambda$getFingerPrint$1);
	});
	return class$;
}
$Class* Validator$$Lambda$getFingerPrint$1::class$ = nullptr;

class Validator$$Lambda$isClass$2 : public $Predicate {
	$class(Validator$$Lambda$isClass$2, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* inst$) override {
		return $sure($FingerPrint, inst$)->isClass();
	}
};
$Class* Validator$$Lambda$isClass$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Validator$$Lambda$isClass$2, init$, void)},
		{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(Validator$$Lambda$isClass$2, test, bool, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"sun.tools.jar.Validator$$Lambda$isClass$2",
		"java.lang.Object",
		"java.util.function.Predicate",
		nullptr,
		methodInfos$$
	};
	$loadClass(Validator$$Lambda$isClass$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Validator$$Lambda$isClass$2);
	});
	return class$;
}
$Class* Validator$$Lambda$isClass$2::class$ = nullptr;

class Validator$$Lambda$mrversion$3 : public $Function {
	$class(Validator$$Lambda$mrversion$3, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$) override {
		return $of($sure($FingerPrint, inst$)->mrversion());
	}
};
$Class* Validator$$Lambda$mrversion$3::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Validator$$Lambda$mrversion$3, init$, void)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Validator$$Lambda$mrversion$3, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"sun.tools.jar.Validator$$Lambda$mrversion$3",
		"java.lang.Object",
		"java.util.function.Function",
		nullptr,
		methodInfos$$
	};
	$loadClass(Validator$$Lambda$mrversion$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Validator$$Lambda$mrversion$3);
	});
	return class$;
}
$Class* Validator$$Lambda$mrversion$3::class$ = nullptr;

class Validator$$Lambda$TreeMap$4 : public $Supplier {
	$class(Validator$$Lambda$TreeMap$4, $NO_CLASS_INIT, $Supplier)
public:
	void init$() {
	}
	virtual $Object* get() override {
		return $of($new($TreeMap));
	}
};
$Class* Validator$$Lambda$TreeMap$4::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Validator$$Lambda$TreeMap$4, init$, void)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Validator$$Lambda$TreeMap$4, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"sun.tools.jar.Validator$$Lambda$TreeMap$4",
		"java.lang.Object",
		"java.util.function.Supplier",
		nullptr,
		methodInfos$$
	};
	$loadClass(Validator$$Lambda$TreeMap$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Validator$$Lambda$TreeMap$4);
	});
	return class$;
}
$Class* Validator$$Lambda$TreeMap$4::class$ = nullptr;

class Validator$$Lambda$className$5 : public $Function {
	$class(Validator$$Lambda$className$5, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$) override {
		return $of($sure($FingerPrint, inst$)->className());
	}
};
$Class* Validator$$Lambda$className$5::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Validator$$Lambda$className$5, init$, void)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Validator$$Lambda$className$5, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"sun.tools.jar.Validator$$Lambda$className$5",
		"java.lang.Object",
		"java.util.function.Function",
		nullptr,
		methodInfos$$
	};
	$loadClass(Validator$$Lambda$className$5, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Validator$$Lambda$className$5);
	});
	return class$;
}
$Class* Validator$$Lambda$className$5::class$ = nullptr;

class Validator$$Lambda$sameNameFingerPrint$6 : public $BinaryOperator {
	$class(Validator$$Lambda$sameNameFingerPrint$6, $NO_CLASS_INIT, $BinaryOperator)
public:
	void init$(Validator* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* apply(Object$* fp1, Object$* fp2) override {
		return $nc(inst$)->sameNameFingerPrint($cast($FingerPrint, fp1), $cast($FingerPrint, fp2));
	}
	Validator* inst$ = nullptr;
};
$Class* Validator$$Lambda$sameNameFingerPrint$6::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Validator$$Lambda$sameNameFingerPrint$6, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/tools/jar/Validator;)V", nullptr, $PUBLIC, $method(Validator$$Lambda$sameNameFingerPrint$6, init$, void, Validator*)},
		{"apply", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Validator$$Lambda$sameNameFingerPrint$6, apply, $Object*, Object$*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"sun.tools.jar.Validator$$Lambda$sameNameFingerPrint$6",
		"java.lang.Object",
		"java.util.function.BinaryOperator",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Validator$$Lambda$sameNameFingerPrint$6, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Validator$$Lambda$sameNameFingerPrint$6);
	});
	return class$;
}
$Class* Validator$$Lambda$sameNameFingerPrint$6::class$ = nullptr;

class Validator$$Lambda$lambda$validate$1$7 : public $BiConsumer {
	$class(Validator$$Lambda$lambda$validate$1$7, $NO_CLASS_INIT, $BiConsumer)
public:
	void init$(Validator* inst) {
		$set(this, inst$, inst);
	}
	virtual void accept(Object$* version, Object$* entries) override {
		$nc(inst$)->lambda$validate$1($cast($Integer, version), $cast($Map, entries));
	}
	Validator* inst$ = nullptr;
};
$Class* Validator$$Lambda$lambda$validate$1$7::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Validator$$Lambda$lambda$validate$1$7, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/tools/jar/Validator;)V", nullptr, $PUBLIC, $method(Validator$$Lambda$lambda$validate$1$7, init$, void, Validator*)},
		{"accept", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(Validator$$Lambda$lambda$validate$1$7, accept, void, Object$*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"sun.tools.jar.Validator$$Lambda$lambda$validate$1$7",
		"java.lang.Object",
		"java.util.function.BiConsumer",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Validator$$Lambda$lambda$validate$1$7, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Validator$$Lambda$lambda$validate$1$7);
	});
	return class$;
}
$Class* Validator$$Lambda$lambda$validate$1$7::class$ = nullptr;

class Validator$$Lambda$lambda$validateBase$2$8 : public $Consumer {
	$class(Validator$$Lambda$lambda$validateBase$2$8, $NO_CLASS_INIT, $Consumer)
public:
	void init$(Validator* inst, $Map* fps) {
		$set(this, inst$, inst);
		$set(this, fps, fps);
	}
	virtual void accept(Object$* fp) override {
		$nc(inst$)->lambda$validateBase$2(fps, $cast($FingerPrint, fp));
	}
	Validator* inst$ = nullptr;
	$Map* fps = nullptr;
};
$Class* Validator$$Lambda$lambda$validateBase$2$8::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Validator$$Lambda$lambda$validateBase$2$8, inst$)},
		{"fps", "Ljava/util/Map;", nullptr, $PUBLIC, $field(Validator$$Lambda$lambda$validateBase$2$8, fps)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/tools/jar/Validator;Ljava/util/Map;)V", nullptr, $PUBLIC, $method(Validator$$Lambda$lambda$validateBase$2$8, init$, void, Validator*, $Map*)},
		{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(Validator$$Lambda$lambda$validateBase$2$8, accept, void, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"sun.tools.jar.Validator$$Lambda$lambda$validateBase$2$8",
		"java.lang.Object",
		"java.util.function.Consumer",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Validator$$Lambda$lambda$validateBase$2$8, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Validator$$Lambda$lambda$validateBase$2$8);
	});
	return class$;
}
$Class* Validator$$Lambda$lambda$validateBase$2$8::class$ = nullptr;

class Validator$$Lambda$lambda$validateVersioned$3$9 : public $Consumer {
	$class(Validator$$Lambda$lambda$validateVersioned$3$9, $NO_CLASS_INIT, $Consumer)
public:
	void init$(Validator* inst, $Map* fps) {
		$set(this, inst$, inst);
		$set(this, fps, fps);
	}
	virtual void accept(Object$* fp) override {
		$nc(inst$)->lambda$validateVersioned$3(fps, $cast($FingerPrint, fp));
	}
	Validator* inst$ = nullptr;
	$Map* fps = nullptr;
};
$Class* Validator$$Lambda$lambda$validateVersioned$3$9::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Validator$$Lambda$lambda$validateVersioned$3$9, inst$)},
		{"fps", "Ljava/util/Map;", nullptr, $PUBLIC, $field(Validator$$Lambda$lambda$validateVersioned$3$9, fps)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/tools/jar/Validator;Ljava/util/Map;)V", nullptr, $PUBLIC, $method(Validator$$Lambda$lambda$validateVersioned$3$9, init$, void, Validator*, $Map*)},
		{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(Validator$$Lambda$lambda$validateVersioned$3$9, accept, void, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"sun.tools.jar.Validator$$Lambda$lambda$validateVersioned$3$9",
		"java.lang.Object",
		"java.util.function.Consumer",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Validator$$Lambda$lambda$validateVersioned$3$9, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Validator$$Lambda$lambda$validateVersioned$3$9);
	});
	return class$;
}
$Class* Validator$$Lambda$lambda$validateVersioned$3$9::class$ = nullptr;

class Validator$$Lambda$source$10 : public $Function {
	$class(Validator$$Lambda$source$10, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$) override {
		return $of($sure($ModuleDescriptor$Exports, inst$)->source());
	}
};
$Class* Validator$$Lambda$source$10::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Validator$$Lambda$source$10, init$, void)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Validator$$Lambda$source$10, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"sun.tools.jar.Validator$$Lambda$source$10",
		"java.lang.Object",
		"java.util.function.Function",
		nullptr,
		methodInfos$$
	};
	$loadClass(Validator$$Lambda$source$10, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Validator$$Lambda$source$10);
	});
	return class$;
}
$Class* Validator$$Lambda$source$10::class$ = nullptr;

class Validator$$Lambda$remove$11 : public $Consumer {
	$class(Validator$$Lambda$remove$11, $NO_CLASS_INIT, $Consumer)
public:
	void init$($Set* inst) {
		$set(this, inst$, inst);
	}
	virtual void accept(Object$* arg0) override {
		$nc(inst$)->remove(arg0);
	}
	$Set* inst$ = nullptr;
};
$Class* Validator$$Lambda$remove$11::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Validator$$Lambda$remove$11, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/Set;)V", nullptr, $PUBLIC, $method(Validator$$Lambda$remove$11, init$, void, $Set*)},
		{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(Validator$$Lambda$remove$11, accept, void, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"sun.tools.jar.Validator$$Lambda$remove$11",
		"java.lang.Object",
		"java.util.function.Consumer",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Validator$$Lambda$remove$11, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Validator$$Lambda$remove$11);
	});
	return class$;
}
$Class* Validator$$Lambda$remove$11::class$ = nullptr;

class Validator$$Lambda$source$12 : public $Function {
	$class(Validator$$Lambda$source$12, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$) override {
		return $of($sure($ModuleDescriptor$Opens, inst$)->source());
	}
};
$Class* Validator$$Lambda$source$12::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Validator$$Lambda$source$12, init$, void)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Validator$$Lambda$source$12, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"sun.tools.jar.Validator$$Lambda$source$12",
		"java.lang.Object",
		"java.util.function.Function",
		nullptr,
		methodInfos$$
	};
	$loadClass(Validator$$Lambda$source$12, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Validator$$Lambda$source$12);
	});
	return class$;
}
$Class* Validator$$Lambda$source$12::class$ = nullptr;

class Validator$$Lambda$providers$13 : public $Function {
	$class(Validator$$Lambda$providers$13, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$) override {
		return $sure($ModuleDescriptor$Provides, inst$)->providers();
	}
};
$Class* Validator$$Lambda$providers$13::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Validator$$Lambda$providers$13, init$, void)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Validator$$Lambda$providers$13, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"sun.tools.jar.Validator$$Lambda$providers$13",
		"java.lang.Object",
		"java.util.function.Function",
		nullptr,
		methodInfos$$
	};
	$loadClass(Validator$$Lambda$providers$13, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Validator$$Lambda$providers$13);
	});
	return class$;
}
$Class* Validator$$Lambda$providers$13::class$ = nullptr;

class Validator$$Lambda$stream$14 : public $Function {
	$class(Validator$$Lambda$stream$14, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$) override {
		return $sure($Collection, inst$)->stream();
	}
};
$Class* Validator$$Lambda$stream$14::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Validator$$Lambda$stream$14, init$, void)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Validator$$Lambda$stream$14, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"sun.tools.jar.Validator$$Lambda$stream$14",
		"java.lang.Object",
		"java.util.function.Function",
		nullptr,
		methodInfos$$
	};
	$loadClass(Validator$$Lambda$stream$14, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Validator$$Lambda$stream$14);
	});
	return class$;
}
$Class* Validator$$Lambda$stream$14::class$ = nullptr;

class Validator$$Lambda$lambda$checkModuleDescriptor$4$15 : public $Predicate {
	$class(Validator$$Lambda$lambda$checkModuleDescriptor$4$15, $NO_CLASS_INIT, $Predicate)
public:
	void init$(Validator* inst) {
		$set(this, inst$, inst);
	}
	virtual bool test(Object$* p) override {
		return $nc(inst$)->lambda$checkModuleDescriptor$4($cast($String, p));
	}
	Validator* inst$ = nullptr;
};
$Class* Validator$$Lambda$lambda$checkModuleDescriptor$4$15::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Validator$$Lambda$lambda$checkModuleDescriptor$4$15, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/tools/jar/Validator;)V", nullptr, $PUBLIC, $method(Validator$$Lambda$lambda$checkModuleDescriptor$4$15, init$, void, Validator*)},
		{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(Validator$$Lambda$lambda$checkModuleDescriptor$4$15, test, bool, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"sun.tools.jar.Validator$$Lambda$lambda$checkModuleDescriptor$4$15",
		"java.lang.Object",
		"java.util.function.Predicate",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Validator$$Lambda$lambda$checkModuleDescriptor$4$15, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Validator$$Lambda$lambda$checkModuleDescriptor$4$15);
	});
	return class$;
}
$Class* Validator$$Lambda$lambda$checkModuleDescriptor$4$15::class$ = nullptr;

class Validator$$Lambda$lambda$checkModuleDescriptor$5$16 : public $Consumer {
	$class(Validator$$Lambda$lambda$checkModuleDescriptor$5$16, $NO_CLASS_INIT, $Consumer)
public:
	void init$(Validator* inst) {
		$set(this, inst$, inst);
	}
	virtual void accept(Object$* p) override {
		$nc(inst$)->lambda$checkModuleDescriptor$5($cast($String, p));
	}
	Validator* inst$ = nullptr;
};
$Class* Validator$$Lambda$lambda$checkModuleDescriptor$5$16::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Validator$$Lambda$lambda$checkModuleDescriptor$5$16, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/tools/jar/Validator;)V", nullptr, $PUBLIC, $method(Validator$$Lambda$lambda$checkModuleDescriptor$5$16, init$, void, Validator*)},
		{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(Validator$$Lambda$lambda$checkModuleDescriptor$5$16, accept, void, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"sun.tools.jar.Validator$$Lambda$lambda$checkModuleDescriptor$5$16",
		"java.lang.Object",
		"java.util.function.Consumer",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Validator$$Lambda$lambda$checkModuleDescriptor$5$16, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Validator$$Lambda$lambda$checkModuleDescriptor$5$16);
	});
	return class$;
}
$Class* Validator$$Lambda$lambda$checkModuleDescriptor$5$16::class$ = nullptr;

void Validator::init$($Main* main, $ZipFile* zf) {
	$set(this, classes, $new($HashMap));
	this->isValid = true;
	$set(this, concealedPkgs, $Collections::emptySet());
	$set(this, main, main);
	$set(this, zf, zf);
	checkModuleDescriptor("module-info.class"_s);
}

bool Validator::validate($Main* main, $ZipFile* zf) {
	return $$new(Validator, main, zf)->validate();
}

bool Validator::validate() {
	$useLocalObjectStack();
	try {
		$var($Function, var$0, $new(Validator$$Lambda$mrversion$3));
		$var($Supplier, var$1, $new(Validator$$Lambda$TreeMap$4));
		$var($Function, var$2, $new(Validator$$Lambda$className$5));
		$var($Function, var$3, $Function::identity());
		$$sure($TreeMap, $$nc($$nc($$nc($$nc($nc(this->zf)->stream())->filter($$new(Validator$$Lambda$lambda$validate$0)))->map($$new(Validator$$Lambda$getFingerPrint$1, this)))->filter($$new(Validator$$Lambda$isClass$2)))->collect($($Collectors::groupingBy(var$0, var$1, $($Collectors::toMap(var$2, var$3, $$new(Validator$$Lambda$sameNameFingerPrint$6, this)))))))->forEach($$new(Validator$$Lambda$lambda$validate$1$7, this));
	} catch ($Validator$InvalidJarException& e) {
		errorAndInvalid($(e->getMessage()));
	}
	return this->isValid;
}

$FingerPrint* Validator::sameNameFingerPrint($FingerPrint* fp1, $FingerPrint* fp2) {
	checkClassName(fp1);
	checkClassName(fp2);
	return fp2;
}

$FingerPrint* Validator::getFingerPrint($ZipEntry* ze) {
	$useLocalObjectStack();
	$var($String, ename, $nc(ze)->getName());
	$var($String, bname, ename);
	int32_t version = 0;
	if ($nc(ename)->startsWith("META-INF/versions/"_s)) {
		$init($Main);
		int32_t n = ename->indexOf("/"_s, $Main::VERSIONS_DIR_LENGTH);
		if (n == -1) {
			$throwNew($Validator$InvalidJarException, $($Main::formatMsg("error.validator.version.notnumber"_s, ename)));
		}
		try {
			version = $Integer::parseInt(ename, $Main::VERSIONS_DIR_LENGTH, n, 10);
		} catch ($NumberFormatException& x) {
			$throwNew($Validator$InvalidJarException, $($Main::formatMsg("error.validator.version.notnumber"_s, ename)));
		}
		if (n == ename->length()) {
			$throwNew($Validator$InvalidJarException, $($Main::formatMsg("error.validator.entryname.tooshort"_s, ename)));
		}
		$assign(bname, ename->substring(n + 1));
	}
	try {
		$var($InputStream, is, $nc(this->zf)->getInputStream(ze));
		$var($Throwable, var$0, nullptr);
		$var($FingerPrint, var$2, nullptr);
		bool return$1 = false;
		try {
			try {
				$assign(var$2, $new($FingerPrint, bname, ename, version, $($nc(is)->readAllBytes())));
				return$1 = true;
				goto $finally;
			} catch ($Throwable& t$) {
				if (is != nullptr) {
					try {
						is->close();
					} catch ($Throwable& x2) {
						t$->addSuppressed(x2);
					}
				}
				$throw(t$);
			}
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			if (is != nullptr) {
				is->close();
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	} catch ($IOException& x) {
		$throwNew($Validator$InvalidJarException, $(x->getMessage()));
	}
	$shouldNotReachHere();
}

void Validator::validateBase($Map* fps) {
	$useLocalObjectStack();
	$$nc($nc(fps)->values())->forEach($$new(Validator$$Lambda$lambda$validateBase$2$8, this, fps));
}

void Validator::validateVersioned($Map* fps) {
	$useLocalObjectStack();
	$$nc($nc(fps)->values())->forEach($$new(Validator$$Lambda$lambda$validateVersioned$3$9, this, fps));
}

void Validator::checkModuleDescriptor($String* miName) {
	$useLocalObjectStack();
	$var($ZipEntry, ze, $nc(this->zf)->getEntry(miName));
	if (ze != nullptr) {
		try {
			$var($InputStream, jis, this->zf->getInputStream(ze));
			$var($Throwable, var$0, nullptr);
			bool return$1 = false;
			try {
				try {
					$var($ModuleDescriptor, md, $ModuleDescriptor::read(jis));
					$var($ModuleDescriptor, base, this->md);
					if (base == nullptr) {
						$set(this, concealedPkgs, $new($HashSet, $($nc(md)->packages())));
						$$nc($$nc($$nc(md->exports())->stream())->map($$new(Validator$$Lambda$source$10)))->forEach($$new(Validator$$Lambda$remove$11, this->concealedPkgs));
						$$nc($$nc($$nc(md->opens())->stream())->map($$new(Validator$$Lambda$source$12)))->forEach($$new(Validator$$Lambda$remove$11, $nc(this->concealedPkgs)));
						if ($$nc($$nc($$nc($$nc($$nc($$nc(md->provides())->stream())->map($$new(Validator$$Lambda$providers$13)))->flatMap($$new(Validator$$Lambda$stream$14)))->filter($$new(Validator$$Lambda$lambda$checkModuleDescriptor$4$15, this)))->peek($$new(Validator$$Lambda$lambda$checkModuleDescriptor$5$16, this)))->count() != 0) {
							this->isValid = false;
							return$1 = true;
							goto $finally;
						}
						$set(this, md, md);
						$set(this, mdName, miName);
						return$1 = true;
						goto $finally;
					}
					if (!$$nc($nc(base)->name())->equals($($nc(md)->name()))) {
						errorAndInvalid($($Main::getMsg("error.validator.info.name.notequal"_s)));
					}
					if (!$$nc(base->requires())->equals($(md->requires()))) {
						$var($Set, baseRequires, base->requires());
						{
							$var($Iterator, i$, $$nc(md->requires())->iterator());
							for (; $nc(i$)->hasNext();) {
								$var($ModuleDescriptor$Requires, r, $cast($ModuleDescriptor$Requires, i$->next()));
								{
									if ($nc(baseRequires)->contains(r)) {
										continue;
									}
									$init($ModuleDescriptor$Requires$Modifier);
									if ($$nc($nc(r)->modifiers())->contains($ModuleDescriptor$Requires$Modifier::TRANSITIVE)) {
										errorAndInvalid($($Main::getMsg("error.validator.info.requires.transitive"_s)));
									} else if (!isPlatformModule($(r->name()))) {
										errorAndInvalid($($Main::getMsg("error.validator.info.requires.added"_s)));
									}
								}
							}
						}
						{
							$var($Iterator, i$, $nc(baseRequires)->iterator());
							for (; $nc(i$)->hasNext();) {
								$var($ModuleDescriptor$Requires, r, $cast($ModuleDescriptor$Requires, i$->next()));
								{
									$var($Set, mdRequires, md->requires());
									if ($nc(mdRequires)->contains(r)) {
										continue;
									}
									if (!isPlatformModule($($nc(r)->name()))) {
										errorAndInvalid($($Main::getMsg("error.validator.info.requires.dropped"_s)));
									}
								}
							}
						}
					}
					if (!$$nc(base->exports())->equals($(md->exports()))) {
						errorAndInvalid($($Main::getMsg("error.validator.info.exports.notequal"_s)));
					}
					if (!$$nc(base->opens())->equals($(md->opens()))) {
						errorAndInvalid($($Main::getMsg("error.validator.info.opens.notequal"_s)));
					}
					if (!$$nc(base->provides())->equals($(md->provides()))) {
						errorAndInvalid($($Main::getMsg("error.validator.info.provides.notequal"_s)));
					}
					if (!$$nc(base->mainClass())->equals($(md->mainClass()))) {
						errorAndInvalid($($Main::formatMsg("error.validator.info.manclass.notequal"_s, $(ze->getName()))));
					}
					if (!$$nc(base->version())->equals($(md->version()))) {
						errorAndInvalid($($Main::formatMsg("error.validator.info.version.notequal"_s, $(ze->getName()))));
					}
				} catch ($Throwable& t$) {
					if (jis != nullptr) {
						try {
							jis->close();
						} catch ($Throwable& x2) {
							t$->addSuppressed(x2);
						}
					}
					$throw(t$);
				}
			} catch ($Throwable& var$2) {
				$assign(var$0, var$2);
			} $finally: {
				if (jis != nullptr) {
					jis->close();
				}
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
			if (return$1) {
				return;
			}
		} catch ($Exception& x) {
			errorAndInvalid($$str({$(x->getMessage()), " : "_s, miName}));
		}
	}
}

bool Validator::checkClassName($FingerPrint* fp) {
	$useLocalObjectStack();
	if ($$nc($nc(fp)->className())->equals($(className($($nc(fp)->basename()))))) {
		return true;
	}
	$var($String, var$0, "error.validator.names.mismatch"_s);
	$var($String, var$1, fp->entryName());
	error($($Main::formatMsg2(var$0, var$1, $($$nc(fp->className())->replace("/"_s, "."_s)))));
	return this->isValid = false;
}

bool Validator::checkNestedClass($FingerPrint* fp, $Map* outerClasses) {
	$useLocalObjectStack();
	if ($nc(outerClasses)->containsKey($($nc(fp)->outerClassName()))) {
		return true;
	}
	error($($Main::formatMsg("error.validator.isolated.nested.class"_s, $(fp->entryName()))));
	return this->isValid = false;
}

bool Validator::isConcealed($String* className) {
	$useLocalObjectStack();
	if ($nc(this->concealedPkgs)->isEmpty()) {
		return false;
	}
	int32_t idx = $nc(className)->lastIndexOf(u'/');
	$var($String, pkgName, idx != -1 ? $(className->substring(0, idx))->replace(u'/', u'.') : ""_s);
	return this->concealedPkgs->contains(pkgName);
}

bool Validator::isPlatformModule($String* name) {
	bool var$0 = $nc(name)->startsWith("java."_s);
	return var$0 || name->startsWith("jdk."_s);
}

$String* Validator::className($String* entryName) {
	return $nc(entryName)->endsWith(".class"_s) ? entryName->substring(0, entryName->length() - 6) : ($String*)nullptr;
}

void Validator::error($String* msg) {
	$nc(this->main)->error(msg);
}

void Validator::errorAndInvalid($String* msg) {
	$nc(this->main)->error(msg);
	this->isValid = false;
}

void Validator::warn($String* msg) {
	$nc(this->main)->warn(msg);
}

void Validator::lambda$checkModuleDescriptor$5($String* p) {
	error($($Main::formatMsg("error.missing.provider"_s, p)));
}

bool Validator::lambda$checkModuleDescriptor$4($String* p) {
	return $nc(this->zf)->getEntry($($Main::toBinaryName(p))) == nullptr;
}

void Validator::lambda$validateVersioned$3($Map* fps, $FingerPrint* fp) {
	$useLocalObjectStack();
	if ("module-info.class"_s->equals($($nc(fp)->basename()))) {
		checkModuleDescriptor($(fp->entryName()));
		return;
	}
	$var($FingerPrint, matchFp, $cast($FingerPrint, this->classes->get($(fp->className()))));
	if (matchFp == nullptr) {
		if (fp->isNestedClass()) {
			checkNestedClass(fp, fps);
			return;
		}
		if (fp->isPublicClass()) {
			if (!isConcealed($(fp->className()))) {
				errorAndInvalid($($Main::formatMsg("error.validator.new.public.class"_s, $(fp->entryName()))));
				return;
			}
			warn($($Main::formatMsg("warn.validator.concealed.public.class"_s, $(fp->entryName()))));
		}
		this->classes->put($(fp->className()), fp);
		return;
	}
	if (fp->isIdentical(matchFp)) {
		warn($($Main::formatMsg("warn.validator.identical.entry"_s, $(fp->entryName()))));
		return;
	}
	if (fp->isNestedClass()) {
		checkNestedClass(fp, fps);
		return;
	}
	if (!fp->isCompatibleVersion(matchFp)) {
		errorAndInvalid($($Main::formatMsg("error.validator.incompatible.class.version"_s, $(fp->entryName()))));
		return;
	}
	if (!fp->isSameAPI(matchFp)) {
		errorAndInvalid($($Main::formatMsg("error.validator.different.api"_s, $(fp->entryName()))));
		return;
	}
	if (!checkClassName(fp)) {
		return;
	}
	this->classes->put($(fp->className()), fp);
	return;
}

void Validator::lambda$validateBase$2($Map* fps, $FingerPrint* fp) {
	if (!checkClassName(fp)) {
		return;
	}
	if ($nc(fp)->isNestedClass()) {
		checkNestedClass(fp, fps);
	}
	this->classes->put($(fp->className()), fp);
}

void Validator::lambda$validate$1($Integer* version, $Map* entries) {
	if ($nc(version)->intValue() == 0) {
		validateBase(entries);
	} else {
		validateVersioned(entries);
	}
}

bool Validator::lambda$validate$0($ZipEntry* e) {
	return $$nc($nc(e)->getName())->endsWith(".class"_s);
}

Validator::Validator() {
}

$Class* Validator::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("sun.tools.jar.Validator$$Lambda$lambda$validate$0")) {
			return Validator$$Lambda$lambda$validate$0::load$(name, initialize);
		}
		if (name->equals("sun.tools.jar.Validator$$Lambda$getFingerPrint$1")) {
			return Validator$$Lambda$getFingerPrint$1::load$(name, initialize);
		}
		if (name->equals("sun.tools.jar.Validator$$Lambda$isClass$2")) {
			return Validator$$Lambda$isClass$2::load$(name, initialize);
		}
		if (name->equals("sun.tools.jar.Validator$$Lambda$mrversion$3")) {
			return Validator$$Lambda$mrversion$3::load$(name, initialize);
		}
		if (name->equals("sun.tools.jar.Validator$$Lambda$TreeMap$4")) {
			return Validator$$Lambda$TreeMap$4::load$(name, initialize);
		}
		if (name->equals("sun.tools.jar.Validator$$Lambda$className$5")) {
			return Validator$$Lambda$className$5::load$(name, initialize);
		}
		if (name->equals("sun.tools.jar.Validator$$Lambda$sameNameFingerPrint$6")) {
			return Validator$$Lambda$sameNameFingerPrint$6::load$(name, initialize);
		}
		if (name->equals("sun.tools.jar.Validator$$Lambda$lambda$validate$1$7")) {
			return Validator$$Lambda$lambda$validate$1$7::load$(name, initialize);
		}
		if (name->equals("sun.tools.jar.Validator$$Lambda$lambda$validateBase$2$8")) {
			return Validator$$Lambda$lambda$validateBase$2$8::load$(name, initialize);
		}
		if (name->equals("sun.tools.jar.Validator$$Lambda$lambda$validateVersioned$3$9")) {
			return Validator$$Lambda$lambda$validateVersioned$3$9::load$(name, initialize);
		}
		if (name->equals("sun.tools.jar.Validator$$Lambda$source$10")) {
			return Validator$$Lambda$source$10::load$(name, initialize);
		}
		if (name->equals("sun.tools.jar.Validator$$Lambda$remove$11")) {
			return Validator$$Lambda$remove$11::load$(name, initialize);
		}
		if (name->equals("sun.tools.jar.Validator$$Lambda$source$12")) {
			return Validator$$Lambda$source$12::load$(name, initialize);
		}
		if (name->equals("sun.tools.jar.Validator$$Lambda$providers$13")) {
			return Validator$$Lambda$providers$13::load$(name, initialize);
		}
		if (name->equals("sun.tools.jar.Validator$$Lambda$stream$14")) {
			return Validator$$Lambda$stream$14::load$(name, initialize);
		}
		if (name->equals("sun.tools.jar.Validator$$Lambda$lambda$checkModuleDescriptor$4$15")) {
			return Validator$$Lambda$lambda$checkModuleDescriptor$4$15::load$(name, initialize);
		}
		if (name->equals("sun.tools.jar.Validator$$Lambda$lambda$checkModuleDescriptor$5$16")) {
			return Validator$$Lambda$lambda$checkModuleDescriptor$5$16::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"classes", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Lsun/tools/jar/FingerPrint;>;", $PRIVATE | $FINAL, $field(Validator, classes)},
		{"main", "Lsun/tools/jar/Main;", nullptr, $PRIVATE | $FINAL, $field(Validator, main)},
		{"zf", "Ljava/util/zip/ZipFile;", nullptr, $PRIVATE | $FINAL, $field(Validator, zf)},
		{"isValid", "Z", nullptr, $PRIVATE, $field(Validator, isValid)},
		{"concealedPkgs", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/String;>;", $PRIVATE, $field(Validator, concealedPkgs)},
		{"md", "Ljava/lang/module/ModuleDescriptor;", nullptr, $PRIVATE, $field(Validator, md)},
		{"mdName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Validator, mdName)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/tools/jar/Main;Ljava/util/zip/ZipFile;)V", nullptr, $PRIVATE, $method(Validator, init$, void, $Main*, $ZipFile*)},
		{"checkClassName", "(Lsun/tools/jar/FingerPrint;)Z", nullptr, $PRIVATE, $method(Validator, checkClassName, bool, $FingerPrint*)},
		{"checkModuleDescriptor", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(Validator, checkModuleDescriptor, void, $String*)},
		{"checkNestedClass", "(Lsun/tools/jar/FingerPrint;Ljava/util/Map;)Z", "(Lsun/tools/jar/FingerPrint;Ljava/util/Map<Ljava/lang/String;Lsun/tools/jar/FingerPrint;>;)Z", $PRIVATE, $method(Validator, checkNestedClass, bool, $FingerPrint*, $Map*)},
		{"className", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(Validator, className, $String*, $String*)},
		{"error", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(Validator, error, void, $String*)},
		{"errorAndInvalid", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(Validator, errorAndInvalid, void, $String*)},
		{"getFingerPrint", "(Ljava/util/zip/ZipEntry;)Lsun/tools/jar/FingerPrint;", nullptr, $PRIVATE, $method(Validator, getFingerPrint, $FingerPrint*, $ZipEntry*)},
		{"isConcealed", "(Ljava/lang/String;)Z", nullptr, $PRIVATE, $method(Validator, isConcealed, bool, $String*)},
		{"isPlatformModule", "(Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(Validator, isPlatformModule, bool, $String*)},
		{"lambda$checkModuleDescriptor$4", "(Ljava/lang/String;)Z", nullptr, $PRIVATE | $SYNTHETIC, $method(Validator, lambda$checkModuleDescriptor$4, bool, $String*)},
		{"lambda$checkModuleDescriptor$5", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(Validator, lambda$checkModuleDescriptor$5, void, $String*)},
		{"lambda$validate$0", "(Ljava/util/zip/ZipEntry;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Validator, lambda$validate$0, bool, $ZipEntry*)},
		{"lambda$validate$1", "(Ljava/lang/Integer;Ljava/util/Map;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(Validator, lambda$validate$1, void, $Integer*, $Map*)},
		{"lambda$validateBase$2", "(Ljava/util/Map;Lsun/tools/jar/FingerPrint;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(Validator, lambda$validateBase$2, void, $Map*, $FingerPrint*)},
		{"lambda$validateVersioned$3", "(Ljava/util/Map;Lsun/tools/jar/FingerPrint;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(Validator, lambda$validateVersioned$3, void, $Map*, $FingerPrint*)},
		{"sameNameFingerPrint", "(Lsun/tools/jar/FingerPrint;Lsun/tools/jar/FingerPrint;)Lsun/tools/jar/FingerPrint;", nullptr, $PRIVATE, $method(Validator, sameNameFingerPrint, $FingerPrint*, $FingerPrint*, $FingerPrint*)},
		{"validate", "(Lsun/tools/jar/Main;Ljava/util/zip/ZipFile;)Z", nullptr, $STATIC, $staticMethod(Validator, validate, bool, $Main*, $ZipFile*), "java.io.IOException"},
		{"validate", "()Z", nullptr, $PRIVATE, $method(Validator, validate, bool)},
		{"validateBase", "(Ljava/util/Map;)V", "(Ljava/util/Map<Ljava/lang/String;Lsun/tools/jar/FingerPrint;>;)V", $PUBLIC, $method(Validator, validateBase, void, $Map*)},
		{"validateVersioned", "(Ljava/util/Map;)V", "(Ljava/util/Map<Ljava/lang/String;Lsun/tools/jar/FingerPrint;>;)V", $PUBLIC, $method(Validator, validateVersioned, void, $Map*)},
		{"warn", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(Validator, warn, void, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.tools.jar.Validator$InvalidJarException", "sun.tools.jar.Validator", "InvalidJarException", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.tools.jar.Validator",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.tools.jar.Validator$InvalidJarException"
	};
	$loadClass(Validator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Validator);
	});
	return class$;
}

$Class* Validator::class$ = nullptr;

		} // jar
	} // tools
} // sun