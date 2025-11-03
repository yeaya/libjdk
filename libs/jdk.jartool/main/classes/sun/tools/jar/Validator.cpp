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
#include <java/util/AbstractMap.h>
#include <java/util/AbstractSet.h>
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
using $Boolean = ::java::lang::Boolean;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $ModuleDescriptor = ::java::lang::module::ModuleDescriptor;
using $ModuleDescriptor$Exports = ::java::lang::module::ModuleDescriptor$Exports;
using $ModuleDescriptor$Opens = ::java::lang::module::ModuleDescriptor$Opens;
using $ModuleDescriptor$Provides = ::java::lang::module::ModuleDescriptor$Provides;
using $ModuleDescriptor$Requires = ::java::lang::module::ModuleDescriptor$Requires;
using $ModuleDescriptor$Requires$Modifier = ::java::lang::module::ModuleDescriptor$Requires$Modifier;
using $AbstractMap = ::java::util::AbstractMap;
using $AbstractSet = ::java::util::AbstractSet;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $HashMap = ::java::util::HashMap;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Optional = ::java::util::Optional;
using $Set = ::java::util::Set;
using $TreeMap = ::java::util::TreeMap;
using $BiConsumer = ::java::util::function::BiConsumer;
using $BinaryOperator = ::java::util::function::BinaryOperator;
using $Consumer = ::java::util::function::Consumer;
using $Function = ::java::util::function::Function;
using $Predicate = ::java::util::function::Predicate;
using $Supplier = ::java::util::function::Supplier;
using $Collector = ::java::util::stream::Collector;
using $Collectors = ::java::util::stream::Collectors;
using $Stream = ::java::util::stream::Stream;
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
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Validator$$Lambda$lambda$validate$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Validator$$Lambda$lambda$validate$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Validator$$Lambda$lambda$validate$0::*)()>(&Validator$$Lambda$lambda$validate$0::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo Validator$$Lambda$lambda$validate$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.tools.jar.Validator$$Lambda$lambda$validate$0",
	"java.lang.Object",
	"java.util.function.Predicate",
	nullptr,
	methodInfos
};
$Class* Validator$$Lambda$lambda$validate$0::load$($String* name, bool initialize) {
	$loadClass(Validator$$Lambda$lambda$validate$0, name, initialize, &classInfo$, allocate$);
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
		 return $of($nc(inst$)->getFingerPrint($cast($ZipEntry, ze)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Validator$$Lambda$getFingerPrint$1>());
	}
	Validator* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Validator$$Lambda$getFingerPrint$1::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Validator$$Lambda$getFingerPrint$1, inst$)},
	{}
};
$MethodInfo Validator$$Lambda$getFingerPrint$1::methodInfos[3] = {
	{"<init>", "(Lsun/tools/jar/Validator;)V", nullptr, $PUBLIC, $method(static_cast<void(Validator$$Lambda$getFingerPrint$1::*)(Validator*)>(&Validator$$Lambda$getFingerPrint$1::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Validator$$Lambda$getFingerPrint$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.tools.jar.Validator$$Lambda$getFingerPrint$1",
	"java.lang.Object",
	"java.util.function.Function",
	fieldInfos,
	methodInfos
};
$Class* Validator$$Lambda$getFingerPrint$1::load$($String* name, bool initialize) {
	$loadClass(Validator$$Lambda$getFingerPrint$1, name, initialize, &classInfo$, allocate$);
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
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Validator$$Lambda$isClass$2>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Validator$$Lambda$isClass$2::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Validator$$Lambda$isClass$2::*)()>(&Validator$$Lambda$isClass$2::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo Validator$$Lambda$isClass$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.tools.jar.Validator$$Lambda$isClass$2",
	"java.lang.Object",
	"java.util.function.Predicate",
	nullptr,
	methodInfos
};
$Class* Validator$$Lambda$isClass$2::load$($String* name, bool initialize) {
	$loadClass(Validator$$Lambda$isClass$2, name, initialize, &classInfo$, allocate$);
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
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Validator$$Lambda$mrversion$3>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Validator$$Lambda$mrversion$3::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Validator$$Lambda$mrversion$3::*)()>(&Validator$$Lambda$mrversion$3::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Validator$$Lambda$mrversion$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.tools.jar.Validator$$Lambda$mrversion$3",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* Validator$$Lambda$mrversion$3::load$($String* name, bool initialize) {
	$loadClass(Validator$$Lambda$mrversion$3, name, initialize, &classInfo$, allocate$);
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
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Validator$$Lambda$TreeMap$4>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Validator$$Lambda$TreeMap$4::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Validator$$Lambda$TreeMap$4::*)()>(&Validator$$Lambda$TreeMap$4::init$))},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Validator$$Lambda$TreeMap$4::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.tools.jar.Validator$$Lambda$TreeMap$4",
	"java.lang.Object",
	"java.util.function.Supplier",
	nullptr,
	methodInfos
};
$Class* Validator$$Lambda$TreeMap$4::load$($String* name, bool initialize) {
	$loadClass(Validator$$Lambda$TreeMap$4, name, initialize, &classInfo$, allocate$);
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
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Validator$$Lambda$className$5>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Validator$$Lambda$className$5::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Validator$$Lambda$className$5::*)()>(&Validator$$Lambda$className$5::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Validator$$Lambda$className$5::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.tools.jar.Validator$$Lambda$className$5",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* Validator$$Lambda$className$5::load$($String* name, bool initialize) {
	$loadClass(Validator$$Lambda$className$5, name, initialize, &classInfo$, allocate$);
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
		 return $of($nc(inst$)->sameNameFingerPrint($cast($FingerPrint, fp1), $cast($FingerPrint, fp2)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Validator$$Lambda$sameNameFingerPrint$6>());
	}
	Validator* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Validator$$Lambda$sameNameFingerPrint$6::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Validator$$Lambda$sameNameFingerPrint$6, inst$)},
	{}
};
$MethodInfo Validator$$Lambda$sameNameFingerPrint$6::methodInfos[3] = {
	{"<init>", "(Lsun/tools/jar/Validator;)V", nullptr, $PUBLIC, $method(static_cast<void(Validator$$Lambda$sameNameFingerPrint$6::*)(Validator*)>(&Validator$$Lambda$sameNameFingerPrint$6::init$))},
	{"apply", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Validator$$Lambda$sameNameFingerPrint$6::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.tools.jar.Validator$$Lambda$sameNameFingerPrint$6",
	"java.lang.Object",
	"java.util.function.BinaryOperator",
	fieldInfos,
	methodInfos
};
$Class* Validator$$Lambda$sameNameFingerPrint$6::load$($String* name, bool initialize) {
	$loadClass(Validator$$Lambda$sameNameFingerPrint$6, name, initialize, &classInfo$, allocate$);
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
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Validator$$Lambda$lambda$validate$1$7>());
	}
	Validator* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Validator$$Lambda$lambda$validate$1$7::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Validator$$Lambda$lambda$validate$1$7, inst$)},
	{}
};
$MethodInfo Validator$$Lambda$lambda$validate$1$7::methodInfos[3] = {
	{"<init>", "(Lsun/tools/jar/Validator;)V", nullptr, $PUBLIC, $method(static_cast<void(Validator$$Lambda$lambda$validate$1$7::*)(Validator*)>(&Validator$$Lambda$lambda$validate$1$7::init$))},
	{"accept", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Validator$$Lambda$lambda$validate$1$7::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.tools.jar.Validator$$Lambda$lambda$validate$1$7",
	"java.lang.Object",
	"java.util.function.BiConsumer",
	fieldInfos,
	methodInfos
};
$Class* Validator$$Lambda$lambda$validate$1$7::load$($String* name, bool initialize) {
	$loadClass(Validator$$Lambda$lambda$validate$1$7, name, initialize, &classInfo$, allocate$);
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
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Validator$$Lambda$lambda$validateBase$2$8>());
	}
	Validator* inst$ = nullptr;
	$Map* fps = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Validator$$Lambda$lambda$validateBase$2$8::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Validator$$Lambda$lambda$validateBase$2$8, inst$)},
	{"fps", "Ljava/util/Map;", nullptr, $PUBLIC, $field(Validator$$Lambda$lambda$validateBase$2$8, fps)},
	{}
};
$MethodInfo Validator$$Lambda$lambda$validateBase$2$8::methodInfos[3] = {
	{"<init>", "(Lsun/tools/jar/Validator;Ljava/util/Map;)V", nullptr, $PUBLIC, $method(static_cast<void(Validator$$Lambda$lambda$validateBase$2$8::*)(Validator*,$Map*)>(&Validator$$Lambda$lambda$validateBase$2$8::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Validator$$Lambda$lambda$validateBase$2$8::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.tools.jar.Validator$$Lambda$lambda$validateBase$2$8",
	"java.lang.Object",
	"java.util.function.Consumer",
	fieldInfos,
	methodInfos
};
$Class* Validator$$Lambda$lambda$validateBase$2$8::load$($String* name, bool initialize) {
	$loadClass(Validator$$Lambda$lambda$validateBase$2$8, name, initialize, &classInfo$, allocate$);
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
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Validator$$Lambda$lambda$validateVersioned$3$9>());
	}
	Validator* inst$ = nullptr;
	$Map* fps = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Validator$$Lambda$lambda$validateVersioned$3$9::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Validator$$Lambda$lambda$validateVersioned$3$9, inst$)},
	{"fps", "Ljava/util/Map;", nullptr, $PUBLIC, $field(Validator$$Lambda$lambda$validateVersioned$3$9, fps)},
	{}
};
$MethodInfo Validator$$Lambda$lambda$validateVersioned$3$9::methodInfos[3] = {
	{"<init>", "(Lsun/tools/jar/Validator;Ljava/util/Map;)V", nullptr, $PUBLIC, $method(static_cast<void(Validator$$Lambda$lambda$validateVersioned$3$9::*)(Validator*,$Map*)>(&Validator$$Lambda$lambda$validateVersioned$3$9::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Validator$$Lambda$lambda$validateVersioned$3$9::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.tools.jar.Validator$$Lambda$lambda$validateVersioned$3$9",
	"java.lang.Object",
	"java.util.function.Consumer",
	fieldInfos,
	methodInfos
};
$Class* Validator$$Lambda$lambda$validateVersioned$3$9::load$($String* name, bool initialize) {
	$loadClass(Validator$$Lambda$lambda$validateVersioned$3$9, name, initialize, &classInfo$, allocate$);
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
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Validator$$Lambda$source$10>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Validator$$Lambda$source$10::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Validator$$Lambda$source$10::*)()>(&Validator$$Lambda$source$10::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Validator$$Lambda$source$10::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.tools.jar.Validator$$Lambda$source$10",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* Validator$$Lambda$source$10::load$($String* name, bool initialize) {
	$loadClass(Validator$$Lambda$source$10, name, initialize, &classInfo$, allocate$);
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
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Validator$$Lambda$remove$11>());
	}
	$Set* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Validator$$Lambda$remove$11::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Validator$$Lambda$remove$11, inst$)},
	{}
};
$MethodInfo Validator$$Lambda$remove$11::methodInfos[3] = {
	{"<init>", "(Ljava/util/Set;)V", nullptr, $PUBLIC, $method(static_cast<void(Validator$$Lambda$remove$11::*)($Set*)>(&Validator$$Lambda$remove$11::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Validator$$Lambda$remove$11::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.tools.jar.Validator$$Lambda$remove$11",
	"java.lang.Object",
	"java.util.function.Consumer",
	fieldInfos,
	methodInfos
};
$Class* Validator$$Lambda$remove$11::load$($String* name, bool initialize) {
	$loadClass(Validator$$Lambda$remove$11, name, initialize, &classInfo$, allocate$);
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
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Validator$$Lambda$source$12>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Validator$$Lambda$source$12::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Validator$$Lambda$source$12::*)()>(&Validator$$Lambda$source$12::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Validator$$Lambda$source$12::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.tools.jar.Validator$$Lambda$source$12",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* Validator$$Lambda$source$12::load$($String* name, bool initialize) {
	$loadClass(Validator$$Lambda$source$12, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Validator$$Lambda$source$12::class$ = nullptr;

class Validator$$Lambda$providers$13 : public $Function {
	$class(Validator$$Lambda$providers$13, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$) override {
		 return $of($sure($ModuleDescriptor$Provides, inst$)->providers());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Validator$$Lambda$providers$13>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Validator$$Lambda$providers$13::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Validator$$Lambda$providers$13::*)()>(&Validator$$Lambda$providers$13::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Validator$$Lambda$providers$13::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.tools.jar.Validator$$Lambda$providers$13",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* Validator$$Lambda$providers$13::load$($String* name, bool initialize) {
	$loadClass(Validator$$Lambda$providers$13, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Validator$$Lambda$providers$13::class$ = nullptr;

class Validator$$Lambda$stream$14 : public $Function {
	$class(Validator$$Lambda$stream$14, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$) override {
		 return $of($sure($Collection, inst$)->stream());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Validator$$Lambda$stream$14>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Validator$$Lambda$stream$14::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Validator$$Lambda$stream$14::*)()>(&Validator$$Lambda$stream$14::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Validator$$Lambda$stream$14::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.tools.jar.Validator$$Lambda$stream$14",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* Validator$$Lambda$stream$14::load$($String* name, bool initialize) {
	$loadClass(Validator$$Lambda$stream$14, name, initialize, &classInfo$, allocate$);
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
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Validator$$Lambda$lambda$checkModuleDescriptor$4$15>());
	}
	Validator* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Validator$$Lambda$lambda$checkModuleDescriptor$4$15::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Validator$$Lambda$lambda$checkModuleDescriptor$4$15, inst$)},
	{}
};
$MethodInfo Validator$$Lambda$lambda$checkModuleDescriptor$4$15::methodInfos[3] = {
	{"<init>", "(Lsun/tools/jar/Validator;)V", nullptr, $PUBLIC, $method(static_cast<void(Validator$$Lambda$lambda$checkModuleDescriptor$4$15::*)(Validator*)>(&Validator$$Lambda$lambda$checkModuleDescriptor$4$15::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo Validator$$Lambda$lambda$checkModuleDescriptor$4$15::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.tools.jar.Validator$$Lambda$lambda$checkModuleDescriptor$4$15",
	"java.lang.Object",
	"java.util.function.Predicate",
	fieldInfos,
	methodInfos
};
$Class* Validator$$Lambda$lambda$checkModuleDescriptor$4$15::load$($String* name, bool initialize) {
	$loadClass(Validator$$Lambda$lambda$checkModuleDescriptor$4$15, name, initialize, &classInfo$, allocate$);
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
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Validator$$Lambda$lambda$checkModuleDescriptor$5$16>());
	}
	Validator* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Validator$$Lambda$lambda$checkModuleDescriptor$5$16::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Validator$$Lambda$lambda$checkModuleDescriptor$5$16, inst$)},
	{}
};
$MethodInfo Validator$$Lambda$lambda$checkModuleDescriptor$5$16::methodInfos[3] = {
	{"<init>", "(Lsun/tools/jar/Validator;)V", nullptr, $PUBLIC, $method(static_cast<void(Validator$$Lambda$lambda$checkModuleDescriptor$5$16::*)(Validator*)>(&Validator$$Lambda$lambda$checkModuleDescriptor$5$16::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Validator$$Lambda$lambda$checkModuleDescriptor$5$16::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.tools.jar.Validator$$Lambda$lambda$checkModuleDescriptor$5$16",
	"java.lang.Object",
	"java.util.function.Consumer",
	fieldInfos,
	methodInfos
};
$Class* Validator$$Lambda$lambda$checkModuleDescriptor$5$16::load$($String* name, bool initialize) {
	$loadClass(Validator$$Lambda$lambda$checkModuleDescriptor$5$16, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Validator$$Lambda$lambda$checkModuleDescriptor$5$16::class$ = nullptr;

$FieldInfo _Validator_FieldInfo_[] = {
	{"classes", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Lsun/tools/jar/FingerPrint;>;", $PRIVATE | $FINAL, $field(Validator, classes)},
	{"main", "Lsun/tools/jar/Main;", nullptr, $PRIVATE | $FINAL, $field(Validator, main)},
	{"zf", "Ljava/util/zip/ZipFile;", nullptr, $PRIVATE | $FINAL, $field(Validator, zf)},
	{"isValid", "Z", nullptr, $PRIVATE, $field(Validator, isValid)},
	{"concealedPkgs", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/String;>;", $PRIVATE, $field(Validator, concealedPkgs)},
	{"md", "Ljava/lang/module/ModuleDescriptor;", nullptr, $PRIVATE, $field(Validator, md)},
	{"mdName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Validator, mdName)},
	{}
};

$MethodInfo _Validator_MethodInfo_[] = {
	{"<init>", "(Lsun/tools/jar/Main;Ljava/util/zip/ZipFile;)V", nullptr, $PRIVATE, $method(static_cast<void(Validator::*)($Main*,$ZipFile*)>(&Validator::init$))},
	{"checkClassName", "(Lsun/tools/jar/FingerPrint;)Z", nullptr, $PRIVATE, $method(static_cast<bool(Validator::*)($FingerPrint*)>(&Validator::checkClassName))},
	{"checkModuleDescriptor", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(Validator::*)($String*)>(&Validator::checkModuleDescriptor))},
	{"checkNestedClass", "(Lsun/tools/jar/FingerPrint;Ljava/util/Map;)Z", "(Lsun/tools/jar/FingerPrint;Ljava/util/Map<Ljava/lang/String;Lsun/tools/jar/FingerPrint;>;)Z", $PRIVATE, $method(static_cast<bool(Validator::*)($FingerPrint*,$Map*)>(&Validator::checkNestedClass))},
	{"className", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($String*)>(&Validator::className))},
	{"error", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(Validator::*)($String*)>(&Validator::error))},
	{"errorAndInvalid", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(Validator::*)($String*)>(&Validator::errorAndInvalid))},
	{"getFingerPrint", "(Ljava/util/zip/ZipEntry;)Lsun/tools/jar/FingerPrint;", nullptr, $PRIVATE, $method(static_cast<$FingerPrint*(Validator::*)($ZipEntry*)>(&Validator::getFingerPrint))},
	{"isConcealed", "(Ljava/lang/String;)Z", nullptr, $PRIVATE, $method(static_cast<bool(Validator::*)($String*)>(&Validator::isConcealed))},
	{"isPlatformModule", "(Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($String*)>(&Validator::isPlatformModule))},
	{"lambda$checkModuleDescriptor$4", "(Ljava/lang/String;)Z", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<bool(Validator::*)($String*)>(&Validator::lambda$checkModuleDescriptor$4))},
	{"lambda$checkModuleDescriptor$5", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(Validator::*)($String*)>(&Validator::lambda$checkModuleDescriptor$5))},
	{"lambda$validate$0", "(Ljava/util/zip/ZipEntry;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($ZipEntry*)>(&Validator::lambda$validate$0))},
	{"lambda$validate$1", "(Ljava/lang/Integer;Ljava/util/Map;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(Validator::*)($Integer*,$Map*)>(&Validator::lambda$validate$1))},
	{"lambda$validateBase$2", "(Ljava/util/Map;Lsun/tools/jar/FingerPrint;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(Validator::*)($Map*,$FingerPrint*)>(&Validator::lambda$validateBase$2))},
	{"lambda$validateVersioned$3", "(Ljava/util/Map;Lsun/tools/jar/FingerPrint;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(Validator::*)($Map*,$FingerPrint*)>(&Validator::lambda$validateVersioned$3))},
	{"sameNameFingerPrint", "(Lsun/tools/jar/FingerPrint;Lsun/tools/jar/FingerPrint;)Lsun/tools/jar/FingerPrint;", nullptr, $PRIVATE, $method(static_cast<$FingerPrint*(Validator::*)($FingerPrint*,$FingerPrint*)>(&Validator::sameNameFingerPrint))},
	{"validate", "(Lsun/tools/jar/Main;Ljava/util/zip/ZipFile;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($Main*,$ZipFile*)>(&Validator::validate)), "java.io.IOException"},
	{"validate", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(Validator::*)()>(&Validator::validate))},
	{"validateBase", "(Ljava/util/Map;)V", "(Ljava/util/Map<Ljava/lang/String;Lsun/tools/jar/FingerPrint;>;)V", $PUBLIC, $method(static_cast<void(Validator::*)($Map*)>(&Validator::validateBase))},
	{"validateVersioned", "(Ljava/util/Map;)V", "(Ljava/util/Map<Ljava/lang/String;Lsun/tools/jar/FingerPrint;>;)V", $PUBLIC, $method(static_cast<void(Validator::*)($Map*)>(&Validator::validateVersioned))},
	{"warn", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(Validator::*)($String*)>(&Validator::warn))},
	{}
};

$InnerClassInfo _Validator_InnerClassesInfo_[] = {
	{"sun.tools.jar.Validator$InvalidJarException", "sun.tools.jar.Validator", "InvalidJarException", $STATIC},
	{}
};

$ClassInfo _Validator_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.tools.jar.Validator",
	"java.lang.Object",
	nullptr,
	_Validator_FieldInfo_,
	_Validator_MethodInfo_,
	nullptr,
	nullptr,
	_Validator_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.tools.jar.Validator$InvalidJarException"
};

$Object* allocate$Validator($Class* clazz) {
	return $of($alloc(Validator));
}

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
	$useLocalCurrentObjectStackCache();
	try {
		$var($Function, var$0, static_cast<$Function*>($new(Validator$$Lambda$mrversion$3)));
		$var($Supplier, var$1, static_cast<$Supplier*>($new(Validator$$Lambda$TreeMap$4)));
		$var($Function, var$2, static_cast<$Function*>($new(Validator$$Lambda$className$5)));
		$var($Function, var$3, $Function::identity());
		$nc(($cast($TreeMap, $($nc($($nc($($nc($($nc($($nc(this->zf)->stream()))->filter(static_cast<$Predicate*>($$new(Validator$$Lambda$lambda$validate$0)))))->map(static_cast<$Function*>($$new(Validator$$Lambda$getFingerPrint$1, this)))))->filter(static_cast<$Predicate*>($$new(Validator$$Lambda$isClass$2)))))->collect($($Collectors::groupingBy(var$0, var$1, $($Collectors::toMap(var$2, var$3, static_cast<$BinaryOperator*>($$new(Validator$$Lambda$sameNameFingerPrint$6, this)))))))))))->forEach(static_cast<$BiConsumer*>($$new(Validator$$Lambda$lambda$validate$1$7, this)));
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
	$useLocalCurrentObjectStackCache();
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
		{
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
		}
	} catch ($IOException& x) {
		$throwNew($Validator$InvalidJarException, $(x->getMessage()));
	}
	$shouldNotReachHere();
}

void Validator::validateBase($Map* fps) {
	$useLocalCurrentObjectStackCache();
	$nc($($nc(fps)->values()))->forEach(static_cast<$Consumer*>($$new(Validator$$Lambda$lambda$validateBase$2$8, this, fps)));
}

void Validator::validateVersioned($Map* fps) {
	$useLocalCurrentObjectStackCache();
	$nc($($nc(fps)->values()))->forEach(static_cast<$Consumer*>($$new(Validator$$Lambda$lambda$validateVersioned$3$9, this, fps)));
}

void Validator::checkModuleDescriptor($String* miName) {
	$useLocalCurrentObjectStackCache();
	$var($ZipEntry, ze, $nc(this->zf)->getEntry(miName));
	if (ze != nullptr) {
		try {
			$var($InputStream, jis, $nc(this->zf)->getInputStream(ze));
			{
				$var($Throwable, var$0, nullptr);
				bool return$1 = false;
				try {
					try {
						$var($ModuleDescriptor, md, $ModuleDescriptor::read(jis));
						$var($ModuleDescriptor, base, this->md);
						if (base == nullptr) {
							$set(this, concealedPkgs, $new($HashSet, $(static_cast<$Collection*>($nc(md)->packages()))));
							$nc($($nc($($nc($($nc(md)->exports()))->stream()))->map(static_cast<$Function*>($$new(Validator$$Lambda$source$10)))))->forEach(static_cast<$Consumer*>($$new(Validator$$Lambda$remove$11, static_cast<$Set*>($nc(this->concealedPkgs)))));
							$nc($($nc($($nc($(md->opens()))->stream()))->map(static_cast<$Function*>($$new(Validator$$Lambda$source$12)))))->forEach(static_cast<$Consumer*>($$new(Validator$$Lambda$remove$11, static_cast<$Set*>($nc(this->concealedPkgs)))));
							if ($nc($($nc($($nc($($nc($($nc($($nc($(md->provides()))->stream()))->map(static_cast<$Function*>($$new(Validator$$Lambda$providers$13)))))->flatMap(static_cast<$Function*>($$new(Validator$$Lambda$stream$14)))))->filter(static_cast<$Predicate*>($$new(Validator$$Lambda$lambda$checkModuleDescriptor$4$15, this)))))->peek(static_cast<$Consumer*>($$new(Validator$$Lambda$lambda$checkModuleDescriptor$5$16, this)))))->count() != 0) {
								this->isValid = false;
								return$1 = true;
								goto $finally;
							}
							$set(this, md, md);
							$set(this, mdName, miName);
							return$1 = true;
							goto $finally;
						}
						if (!$nc($($nc(base)->name()))->equals($($nc(md)->name()))) {
							errorAndInvalid($($Main::getMsg("error.validator.info.name.notequal"_s)));
						}
						if (!$nc($($nc(base)->requires()))->equals($($nc(md)->requires()))) {
							$var($Set, baseRequires, base->requires());
							{
								$var($Iterator, i$, $nc($($nc(md)->requires()))->iterator());
								for (; $nc(i$)->hasNext();) {
									$var($ModuleDescriptor$Requires, r, $cast($ModuleDescriptor$Requires, i$->next()));
									{
										if ($nc(baseRequires)->contains(r)) {
											continue;
										}
										$init($ModuleDescriptor$Requires$Modifier);
										if ($nc($($nc(r)->modifiers()))->contains($ModuleDescriptor$Requires$Modifier::TRANSITIVE)) {
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
						if (!$nc($($nc(base)->exports()))->equals($($nc(md)->exports()))) {
							errorAndInvalid($($Main::getMsg("error.validator.info.exports.notequal"_s)));
						}
						if (!$nc($($nc(base)->opens()))->equals($($nc(md)->opens()))) {
							errorAndInvalid($($Main::getMsg("error.validator.info.opens.notequal"_s)));
						}
						if (!$nc($($nc(base)->provides()))->equals($($nc(md)->provides()))) {
							errorAndInvalid($($Main::getMsg("error.validator.info.provides.notequal"_s)));
						}
						if (!$nc($($nc(base)->mainClass()))->equals($($nc(md)->mainClass()))) {
							errorAndInvalid($($Main::formatMsg("error.validator.info.manclass.notequal"_s, $(ze->getName()))));
						}
						if (!$nc($($nc(base)->version()))->equals($($nc(md)->version()))) {
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
			}
		} catch ($Exception& x) {
			errorAndInvalid($$str({$(x->getMessage()), " : "_s, miName}));
		}
	}
}

bool Validator::checkClassName($FingerPrint* fp) {
	$useLocalCurrentObjectStackCache();
	if ($nc($($nc(fp)->className()))->equals($(className($(fp->basename()))))) {
		return true;
	}
	$var($String, var$0, "error.validator.names.mismatch"_s);
	$var($String, var$1, $nc(fp)->entryName());
	error($($Main::formatMsg2(var$0, var$1, $($nc($(fp->className()))->replace(static_cast<$CharSequence*>("/"_s), static_cast<$CharSequence*>("."_s))))));
	return this->isValid = false;
}

bool Validator::checkNestedClass($FingerPrint* fp, $Map* outerClasses) {
	$useLocalCurrentObjectStackCache();
	if ($nc(outerClasses)->containsKey($($nc(fp)->outerClassName()))) {
		return true;
	}
	error($($Main::formatMsg("error.validator.isolated.nested.class"_s, $($nc(fp)->entryName()))));
	return this->isValid = false;
}

bool Validator::isConcealed($String* className) {
	$useLocalCurrentObjectStackCache();
	if ($nc(this->concealedPkgs)->isEmpty()) {
		return false;
	}
	int32_t idx = $nc(className)->lastIndexOf((int32_t)u'/');
	$var($String, pkgName, idx != -1 ? $(className->substring(0, idx))->replace(u'/', u'.') : ""_s);
	return $nc(this->concealedPkgs)->contains(pkgName);
}

bool Validator::isPlatformModule($String* name) {
	bool var$0 = $nc(name)->startsWith("java."_s);
	return var$0 || $nc(name)->startsWith("jdk."_s);
}

$String* Validator::className($String* entryName) {
	return $nc(entryName)->endsWith(".class"_s) ? $nc(entryName)->substring(0, entryName->length() - 6) : ($String*)nullptr;
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
	$useLocalCurrentObjectStackCache();
	if ("module-info.class"_s->equals($($nc(fp)->basename()))) {
		checkModuleDescriptor($($nc(fp)->entryName()));
		return;
	}
	$var($FingerPrint, matchFp, $cast($FingerPrint, $nc(this->classes)->get($($nc(fp)->className()))));
	if (matchFp == nullptr) {
		if ($nc(fp)->isNestedClass()) {
			checkNestedClass(fp, fps);
			return;
		}
		if ($nc(fp)->isPublicClass()) {
			if (!isConcealed($(fp->className()))) {
				errorAndInvalid($($Main::formatMsg("error.validator.new.public.class"_s, $(fp->entryName()))));
				return;
			}
			warn($($Main::formatMsg("warn.validator.concealed.public.class"_s, $(fp->entryName()))));
		}
		$nc(this->classes)->put($($nc(fp)->className()), fp);
		return;
	}
	if ($nc(fp)->isIdentical(matchFp)) {
		warn($($Main::formatMsg("warn.validator.identical.entry"_s, $(fp->entryName()))));
		return;
	}
	if ($nc(fp)->isNestedClass()) {
		checkNestedClass(fp, fps);
		return;
	}
	if (!$nc(fp)->isCompatibleVersion(matchFp)) {
		errorAndInvalid($($Main::formatMsg("error.validator.incompatible.class.version"_s, $(fp->entryName()))));
		return;
	}
	if (!$nc(fp)->isSameAPI(matchFp)) {
		errorAndInvalid($($Main::formatMsg("error.validator.different.api"_s, $(fp->entryName()))));
		return;
	}
	if (!checkClassName(fp)) {
		return;
	}
	$nc(this->classes)->put($($nc(fp)->className()), fp);
	return;
}

void Validator::lambda$validateBase$2($Map* fps, $FingerPrint* fp) {
	if (!checkClassName(fp)) {
		return;
	}
	if ($nc(fp)->isNestedClass()) {
		checkNestedClass(fp, fps);
	}
	$nc(this->classes)->put($($nc(fp)->className()), fp);
}

void Validator::lambda$validate$1($Integer* version, $Map* entries) {
	if ($nc(version)->intValue() == 0) {
		validateBase(entries);
	} else {
		validateVersioned(entries);
	}
}

bool Validator::lambda$validate$0($ZipEntry* e) {
	return $nc($($nc(e)->getName()))->endsWith(".class"_s);
}

Validator::Validator() {
}

$Class* Validator::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Validator$$Lambda$lambda$validate$0::classInfo$.name)) {
			return Validator$$Lambda$lambda$validate$0::load$(name, initialize);
		}
		if (name->equals(Validator$$Lambda$getFingerPrint$1::classInfo$.name)) {
			return Validator$$Lambda$getFingerPrint$1::load$(name, initialize);
		}
		if (name->equals(Validator$$Lambda$isClass$2::classInfo$.name)) {
			return Validator$$Lambda$isClass$2::load$(name, initialize);
		}
		if (name->equals(Validator$$Lambda$mrversion$3::classInfo$.name)) {
			return Validator$$Lambda$mrversion$3::load$(name, initialize);
		}
		if (name->equals(Validator$$Lambda$TreeMap$4::classInfo$.name)) {
			return Validator$$Lambda$TreeMap$4::load$(name, initialize);
		}
		if (name->equals(Validator$$Lambda$className$5::classInfo$.name)) {
			return Validator$$Lambda$className$5::load$(name, initialize);
		}
		if (name->equals(Validator$$Lambda$sameNameFingerPrint$6::classInfo$.name)) {
			return Validator$$Lambda$sameNameFingerPrint$6::load$(name, initialize);
		}
		if (name->equals(Validator$$Lambda$lambda$validate$1$7::classInfo$.name)) {
			return Validator$$Lambda$lambda$validate$1$7::load$(name, initialize);
		}
		if (name->equals(Validator$$Lambda$lambda$validateBase$2$8::classInfo$.name)) {
			return Validator$$Lambda$lambda$validateBase$2$8::load$(name, initialize);
		}
		if (name->equals(Validator$$Lambda$lambda$validateVersioned$3$9::classInfo$.name)) {
			return Validator$$Lambda$lambda$validateVersioned$3$9::load$(name, initialize);
		}
		if (name->equals(Validator$$Lambda$source$10::classInfo$.name)) {
			return Validator$$Lambda$source$10::load$(name, initialize);
		}
		if (name->equals(Validator$$Lambda$remove$11::classInfo$.name)) {
			return Validator$$Lambda$remove$11::load$(name, initialize);
		}
		if (name->equals(Validator$$Lambda$source$12::classInfo$.name)) {
			return Validator$$Lambda$source$12::load$(name, initialize);
		}
		if (name->equals(Validator$$Lambda$providers$13::classInfo$.name)) {
			return Validator$$Lambda$providers$13::load$(name, initialize);
		}
		if (name->equals(Validator$$Lambda$stream$14::classInfo$.name)) {
			return Validator$$Lambda$stream$14::load$(name, initialize);
		}
		if (name->equals(Validator$$Lambda$lambda$checkModuleDescriptor$4$15::classInfo$.name)) {
			return Validator$$Lambda$lambda$checkModuleDescriptor$4$15::load$(name, initialize);
		}
		if (name->equals(Validator$$Lambda$lambda$checkModuleDescriptor$5$16::classInfo$.name)) {
			return Validator$$Lambda$lambda$checkModuleDescriptor$5$16::load$(name, initialize);
		}
	}
	$loadClass(Validator, name, initialize, &_Validator_ClassInfo_, allocate$Validator);
	return class$;
}

$Class* Validator::class$ = nullptr;

		} // jar
	} // tools
} // sun