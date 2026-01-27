#include <javax/xml/validation/SchemaFactoryFinder.h>

#include <com/sun/org/apache/xerces/internal/jaxp/validation/XMLSchemaFactory.h>
#include <java/io/File.h>
#include <java/io/FileInputStream.h>
#include <java/io/InputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/AssertionError.h>
#include <java/lang/ClassCastException.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/Error.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/InstantiationException.h>
#include <java/lang/NoSuchMethodException.h>
#include <java/lang/SecurityException.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/InvocationTargetException.h>
#include <java/security/AccessControlContext.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/Properties.h>
#include <java/util/ServiceConfigurationError.h>
#include <java/util/function/Supplier.h>
#include <javax/xml/validation/SchemaFactory.h>
#include <javax/xml/validation/SchemaFactoryConfigurationError.h>
#include <javax/xml/validation/SchemaFactoryFinder$1.h>
#include <javax/xml/validation/SchemaFactoryFinder$2.h>
#include <jdk/xml/internal/SecuritySupport.h>
#include <jcpp.h>

#undef DEFAULT_PACKAGE
#undef SERVICE_CLASS

using $XMLSchemaFactory = ::com::sun::org::apache::xerces::internal::jaxp::validation::XMLSchemaFactory;
using $File = ::java::io::File;
using $InputStream = ::java::io::InputStream;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $Error = ::java::lang::Error;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InstantiationException = ::java::lang::InstantiationException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchMethodException = ::java::lang::NoSuchMethodException;
using $NullPointerException = ::java::lang::NullPointerException;
using $SecurityException = ::java::lang::SecurityException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Constructor = ::java::lang::reflect::Constructor;
using $InvocationTargetException = ::java::lang::reflect::InvocationTargetException;
using $AccessControlContext = ::java::security::AccessControlContext;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Properties = ::java::util::Properties;
using $ServiceConfigurationError = ::java::util::ServiceConfigurationError;
using $Supplier = ::java::util::function::Supplier;
using $SchemaFactory = ::javax::xml::validation::SchemaFactory;
using $SchemaFactoryConfigurationError = ::javax::xml::validation::SchemaFactoryConfigurationError;
using $SchemaFactoryFinder$1 = ::javax::xml::validation::SchemaFactoryFinder$1;
using $SchemaFactoryFinder$2 = ::javax::xml::validation::SchemaFactoryFinder$2;
using $SecuritySupport = ::jdk::xml::internal::SecuritySupport;

namespace javax {
	namespace xml {
		namespace validation {

class SchemaFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$0 : public $Supplier {
	$class(SchemaFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$0, $NO_CLASS_INIT, $Supplier)
public:
	void init$(SchemaFactoryFinder* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* get() override {
		 return $of($nc(inst$)->lambda$debugDisplayClassLoader$0());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<SchemaFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$0>());
	}
	SchemaFactoryFinder* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo SchemaFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$0::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(SchemaFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$0, inst$)},
	{}
};
$MethodInfo SchemaFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$0::methodInfos[3] = {
	{"<init>", "(Ljavax/xml/validation/SchemaFactoryFinder;)V", nullptr, $PUBLIC, $method(SchemaFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$0, init$, void, SchemaFactoryFinder*)},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(SchemaFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$0, get, $Object*)},
	{}
};
$ClassInfo SchemaFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.xml.validation.SchemaFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$0",
	"java.lang.Object",
	"java.util.function.Supplier",
	fieldInfos,
	methodInfos
};
$Class* SchemaFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$0::load$($String* name, bool initialize) {
	$loadClass(SchemaFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* SchemaFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$0::class$ = nullptr;

class SchemaFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$1$1 : public $Supplier {
	$class(SchemaFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$1$1, $NO_CLASS_INIT, $Supplier)
public:
	void init$(SchemaFactoryFinder* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* get() override {
		 return $of($nc(inst$)->lambda$debugDisplayClassLoader$1());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<SchemaFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$1$1>());
	}
	SchemaFactoryFinder* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo SchemaFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$1$1::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(SchemaFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$1$1, inst$)},
	{}
};
$MethodInfo SchemaFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$1$1::methodInfos[3] = {
	{"<init>", "(Ljavax/xml/validation/SchemaFactoryFinder;)V", nullptr, $PUBLIC, $method(SchemaFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$1$1, init$, void, SchemaFactoryFinder*)},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(SchemaFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$1$1, get, $Object*)},
	{}
};
$ClassInfo SchemaFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.xml.validation.SchemaFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$1$1",
	"java.lang.Object",
	"java.util.function.Supplier",
	fieldInfos,
	methodInfos
};
$Class* SchemaFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$1$1::load$($String* name, bool initialize) {
	$loadClass(SchemaFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* SchemaFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$1$1::class$ = nullptr;

class SchemaFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$2$2 : public $Supplier {
	$class(SchemaFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$2$2, $NO_CLASS_INIT, $Supplier)
public:
	void init$(SchemaFactoryFinder* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* get() override {
		 return $of($nc(inst$)->lambda$debugDisplayClassLoader$2());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<SchemaFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$2$2>());
	}
	SchemaFactoryFinder* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo SchemaFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$2$2::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(SchemaFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$2$2, inst$)},
	{}
};
$MethodInfo SchemaFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$2$2::methodInfos[3] = {
	{"<init>", "(Ljavax/xml/validation/SchemaFactoryFinder;)V", nullptr, $PUBLIC, $method(SchemaFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$2$2, init$, void, SchemaFactoryFinder*)},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(SchemaFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$2$2, get, $Object*)},
	{}
};
$ClassInfo SchemaFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$2$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.xml.validation.SchemaFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$2$2",
	"java.lang.Object",
	"java.util.function.Supplier",
	fieldInfos,
	methodInfos
};
$Class* SchemaFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$2$2::load$($String* name, bool initialize) {
	$loadClass(SchemaFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$2$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* SchemaFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$2$2::class$ = nullptr;

class SchemaFactoryFinder$$Lambda$lambda$newFactory$3$3 : public $Supplier {
	$class(SchemaFactoryFinder$$Lambda$lambda$newFactory$3$3, $NO_CLASS_INIT, $Supplier)
public:
	void init$($SchemaFactory* f, $String* schemaLanguage) {
		$set(this, f, f);
		$set(this, schemaLanguage, schemaLanguage);
	}
	virtual $Object* get() override {
		 return $of(SchemaFactoryFinder::lambda$newFactory$3(f, schemaLanguage));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<SchemaFactoryFinder$$Lambda$lambda$newFactory$3$3>());
	}
	$SchemaFactory* f = nullptr;
	$String* schemaLanguage = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo SchemaFactoryFinder$$Lambda$lambda$newFactory$3$3::fieldInfos[3] = {
	{"f", "Ljavax/xml/validation/SchemaFactory;", nullptr, $PUBLIC, $field(SchemaFactoryFinder$$Lambda$lambda$newFactory$3$3, f)},
	{"schemaLanguage", "Ljava/lang/String;", nullptr, $PUBLIC, $field(SchemaFactoryFinder$$Lambda$lambda$newFactory$3$3, schemaLanguage)},
	{}
};
$MethodInfo SchemaFactoryFinder$$Lambda$lambda$newFactory$3$3::methodInfos[3] = {
	{"<init>", "(Ljavax/xml/validation/SchemaFactory;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(SchemaFactoryFinder$$Lambda$lambda$newFactory$3$3, init$, void, $SchemaFactory*, $String*)},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(SchemaFactoryFinder$$Lambda$lambda$newFactory$3$3, get, $Object*)},
	{}
};
$ClassInfo SchemaFactoryFinder$$Lambda$lambda$newFactory$3$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.xml.validation.SchemaFactoryFinder$$Lambda$lambda$newFactory$3$3",
	"java.lang.Object",
	"java.util.function.Supplier",
	fieldInfos,
	methodInfos
};
$Class* SchemaFactoryFinder$$Lambda$lambda$newFactory$3$3::load$($String* name, bool initialize) {
	$loadClass(SchemaFactoryFinder$$Lambda$lambda$newFactory$3$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* SchemaFactoryFinder$$Lambda$lambda$newFactory$3$3::class$ = nullptr;

class SchemaFactoryFinder$$Lambda$lambda$newFactory$4$4 : public $Supplier {
	$class(SchemaFactoryFinder$$Lambda$lambda$newFactory$4$4, $NO_CLASS_INIT, $Supplier)
public:
	void init$($String* schemaLanguage) {
		$set(this, schemaLanguage, schemaLanguage);
	}
	virtual $Object* get() override {
		 return $of(SchemaFactoryFinder::lambda$newFactory$4(schemaLanguage));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<SchemaFactoryFinder$$Lambda$lambda$newFactory$4$4>());
	}
	$String* schemaLanguage = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo SchemaFactoryFinder$$Lambda$lambda$newFactory$4$4::fieldInfos[2] = {
	{"schemaLanguage", "Ljava/lang/String;", nullptr, $PUBLIC, $field(SchemaFactoryFinder$$Lambda$lambda$newFactory$4$4, schemaLanguage)},
	{}
};
$MethodInfo SchemaFactoryFinder$$Lambda$lambda$newFactory$4$4::methodInfos[3] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(SchemaFactoryFinder$$Lambda$lambda$newFactory$4$4, init$, void, $String*)},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(SchemaFactoryFinder$$Lambda$lambda$newFactory$4$4, get, $Object*)},
	{}
};
$ClassInfo SchemaFactoryFinder$$Lambda$lambda$newFactory$4$4::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.xml.validation.SchemaFactoryFinder$$Lambda$lambda$newFactory$4$4",
	"java.lang.Object",
	"java.util.function.Supplier",
	fieldInfos,
	methodInfos
};
$Class* SchemaFactoryFinder$$Lambda$lambda$newFactory$4$4::load$($String* name, bool initialize) {
	$loadClass(SchemaFactoryFinder$$Lambda$lambda$newFactory$4$4, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* SchemaFactoryFinder$$Lambda$lambda$newFactory$4$4::class$ = nullptr;

class SchemaFactoryFinder$$Lambda$lambda$_newFactory$5$5 : public $Supplier {
	$class(SchemaFactoryFinder$$Lambda$lambda$_newFactory$5$5, $NO_CLASS_INIT, $Supplier)
public:
	void init$($String* propertyName) {
		$set(this, propertyName, propertyName);
	}
	virtual $Object* get() override {
		 return $of(SchemaFactoryFinder::lambda$_newFactory$5(propertyName));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<SchemaFactoryFinder$$Lambda$lambda$_newFactory$5$5>());
	}
	$String* propertyName = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo SchemaFactoryFinder$$Lambda$lambda$_newFactory$5$5::fieldInfos[2] = {
	{"propertyName", "Ljava/lang/String;", nullptr, $PUBLIC, $field(SchemaFactoryFinder$$Lambda$lambda$_newFactory$5$5, propertyName)},
	{}
};
$MethodInfo SchemaFactoryFinder$$Lambda$lambda$_newFactory$5$5::methodInfos[3] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(SchemaFactoryFinder$$Lambda$lambda$_newFactory$5$5, init$, void, $String*)},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(SchemaFactoryFinder$$Lambda$lambda$_newFactory$5$5, get, $Object*)},
	{}
};
$ClassInfo SchemaFactoryFinder$$Lambda$lambda$_newFactory$5$5::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.xml.validation.SchemaFactoryFinder$$Lambda$lambda$_newFactory$5$5",
	"java.lang.Object",
	"java.util.function.Supplier",
	fieldInfos,
	methodInfos
};
$Class* SchemaFactoryFinder$$Lambda$lambda$_newFactory$5$5::load$($String* name, bool initialize) {
	$loadClass(SchemaFactoryFinder$$Lambda$lambda$_newFactory$5$5, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* SchemaFactoryFinder$$Lambda$lambda$_newFactory$5$5::class$ = nullptr;

class SchemaFactoryFinder$$Lambda$lambda$_newFactory$6$6 : public $Supplier {
	$class(SchemaFactoryFinder$$Lambda$lambda$_newFactory$6$6, $NO_CLASS_INIT, $Supplier)
public:
	void init$($String* r) {
		$set(this, r, r);
	}
	virtual $Object* get() override {
		 return $of(SchemaFactoryFinder::lambda$_newFactory$6(r));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<SchemaFactoryFinder$$Lambda$lambda$_newFactory$6$6>());
	}
	$String* r = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo SchemaFactoryFinder$$Lambda$lambda$_newFactory$6$6::fieldInfos[2] = {
	{"r", "Ljava/lang/String;", nullptr, $PUBLIC, $field(SchemaFactoryFinder$$Lambda$lambda$_newFactory$6$6, r)},
	{}
};
$MethodInfo SchemaFactoryFinder$$Lambda$lambda$_newFactory$6$6::methodInfos[3] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(SchemaFactoryFinder$$Lambda$lambda$_newFactory$6$6, init$, void, $String*)},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(SchemaFactoryFinder$$Lambda$lambda$_newFactory$6$6, get, $Object*)},
	{}
};
$ClassInfo SchemaFactoryFinder$$Lambda$lambda$_newFactory$6$6::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.xml.validation.SchemaFactoryFinder$$Lambda$lambda$_newFactory$6$6",
	"java.lang.Object",
	"java.util.function.Supplier",
	fieldInfos,
	methodInfos
};
$Class* SchemaFactoryFinder$$Lambda$lambda$_newFactory$6$6::load$($String* name, bool initialize) {
	$loadClass(SchemaFactoryFinder$$Lambda$lambda$_newFactory$6$6, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* SchemaFactoryFinder$$Lambda$lambda$_newFactory$6$6::class$ = nullptr;

class SchemaFactoryFinder$$Lambda$lambda$_newFactory$7$7 : public $Supplier {
	$class(SchemaFactoryFinder$$Lambda$lambda$_newFactory$7$7, $NO_CLASS_INIT, $Supplier)
public:
	void init$() {
	}
	virtual $Object* get() override {
		 return $of(SchemaFactoryFinder::lambda$_newFactory$7());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<SchemaFactoryFinder$$Lambda$lambda$_newFactory$7$7>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo SchemaFactoryFinder$$Lambda$lambda$_newFactory$7$7::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(SchemaFactoryFinder$$Lambda$lambda$_newFactory$7$7, init$, void)},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(SchemaFactoryFinder$$Lambda$lambda$_newFactory$7$7, get, $Object*)},
	{}
};
$ClassInfo SchemaFactoryFinder$$Lambda$lambda$_newFactory$7$7::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.xml.validation.SchemaFactoryFinder$$Lambda$lambda$_newFactory$7$7",
	"java.lang.Object",
	"java.util.function.Supplier",
	nullptr,
	methodInfos
};
$Class* SchemaFactoryFinder$$Lambda$lambda$_newFactory$7$7::load$($String* name, bool initialize) {
	$loadClass(SchemaFactoryFinder$$Lambda$lambda$_newFactory$7$7, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* SchemaFactoryFinder$$Lambda$lambda$_newFactory$7$7::class$ = nullptr;

class SchemaFactoryFinder$$Lambda$lambda$_newFactory$8$8 : public $Supplier {
	$class(SchemaFactoryFinder$$Lambda$lambda$_newFactory$8$8, $NO_CLASS_INIT, $Supplier)
public:
	void init$($String* propertyName) {
		$set(this, propertyName, propertyName);
	}
	virtual $Object* get() override {
		 return $of(SchemaFactoryFinder::lambda$_newFactory$8(propertyName));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<SchemaFactoryFinder$$Lambda$lambda$_newFactory$8$8>());
	}
	$String* propertyName = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo SchemaFactoryFinder$$Lambda$lambda$_newFactory$8$8::fieldInfos[2] = {
	{"propertyName", "Ljava/lang/String;", nullptr, $PUBLIC, $field(SchemaFactoryFinder$$Lambda$lambda$_newFactory$8$8, propertyName)},
	{}
};
$MethodInfo SchemaFactoryFinder$$Lambda$lambda$_newFactory$8$8::methodInfos[3] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(SchemaFactoryFinder$$Lambda$lambda$_newFactory$8$8, init$, void, $String*)},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(SchemaFactoryFinder$$Lambda$lambda$_newFactory$8$8, get, $Object*)},
	{}
};
$ClassInfo SchemaFactoryFinder$$Lambda$lambda$_newFactory$8$8::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.xml.validation.SchemaFactoryFinder$$Lambda$lambda$_newFactory$8$8",
	"java.lang.Object",
	"java.util.function.Supplier",
	fieldInfos,
	methodInfos
};
$Class* SchemaFactoryFinder$$Lambda$lambda$_newFactory$8$8::load$($String* name, bool initialize) {
	$loadClass(SchemaFactoryFinder$$Lambda$lambda$_newFactory$8$8, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* SchemaFactoryFinder$$Lambda$lambda$_newFactory$8$8::class$ = nullptr;

class SchemaFactoryFinder$$Lambda$lambda$_newFactory$9$9 : public $Supplier {
	$class(SchemaFactoryFinder$$Lambda$lambda$_newFactory$9$9, $NO_CLASS_INIT, $Supplier)
public:
	void init$($File* f) {
		$set(this, f, f);
	}
	virtual $Object* get() override {
		 return $of(SchemaFactoryFinder::lambda$_newFactory$9(f));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<SchemaFactoryFinder$$Lambda$lambda$_newFactory$9$9>());
	}
	$File* f = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo SchemaFactoryFinder$$Lambda$lambda$_newFactory$9$9::fieldInfos[2] = {
	{"f", "Ljava/io/File;", nullptr, $PUBLIC, $field(SchemaFactoryFinder$$Lambda$lambda$_newFactory$9$9, f)},
	{}
};
$MethodInfo SchemaFactoryFinder$$Lambda$lambda$_newFactory$9$9::methodInfos[3] = {
	{"<init>", "(Ljava/io/File;)V", nullptr, $PUBLIC, $method(SchemaFactoryFinder$$Lambda$lambda$_newFactory$9$9, init$, void, $File*)},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(SchemaFactoryFinder$$Lambda$lambda$_newFactory$9$9, get, $Object*)},
	{}
};
$ClassInfo SchemaFactoryFinder$$Lambda$lambda$_newFactory$9$9::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.xml.validation.SchemaFactoryFinder$$Lambda$lambda$_newFactory$9$9",
	"java.lang.Object",
	"java.util.function.Supplier",
	fieldInfos,
	methodInfos
};
$Class* SchemaFactoryFinder$$Lambda$lambda$_newFactory$9$9::load$($String* name, bool initialize) {
	$loadClass(SchemaFactoryFinder$$Lambda$lambda$_newFactory$9$9, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* SchemaFactoryFinder$$Lambda$lambda$_newFactory$9$9::class$ = nullptr;

class SchemaFactoryFinder$$Lambda$lambda$_newFactory$10$10 : public $Supplier {
	$class(SchemaFactoryFinder$$Lambda$lambda$_newFactory$10$10, $NO_CLASS_INIT, $Supplier)
public:
	void init$($String* factoryClassName) {
		$set(this, factoryClassName, factoryClassName);
	}
	virtual $Object* get() override {
		 return $of(SchemaFactoryFinder::lambda$_newFactory$10(factoryClassName));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<SchemaFactoryFinder$$Lambda$lambda$_newFactory$10$10>());
	}
	$String* factoryClassName = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo SchemaFactoryFinder$$Lambda$lambda$_newFactory$10$10::fieldInfos[2] = {
	{"factoryClassName", "Ljava/lang/String;", nullptr, $PUBLIC, $field(SchemaFactoryFinder$$Lambda$lambda$_newFactory$10$10, factoryClassName)},
	{}
};
$MethodInfo SchemaFactoryFinder$$Lambda$lambda$_newFactory$10$10::methodInfos[3] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(SchemaFactoryFinder$$Lambda$lambda$_newFactory$10$10, init$, void, $String*)},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(SchemaFactoryFinder$$Lambda$lambda$_newFactory$10$10, get, $Object*)},
	{}
};
$ClassInfo SchemaFactoryFinder$$Lambda$lambda$_newFactory$10$10::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.xml.validation.SchemaFactoryFinder$$Lambda$lambda$_newFactory$10$10",
	"java.lang.Object",
	"java.util.function.Supplier",
	fieldInfos,
	methodInfos
};
$Class* SchemaFactoryFinder$$Lambda$lambda$_newFactory$10$10::load$($String* name, bool initialize) {
	$loadClass(SchemaFactoryFinder$$Lambda$lambda$_newFactory$10$10, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* SchemaFactoryFinder$$Lambda$lambda$_newFactory$10$10::class$ = nullptr;

class SchemaFactoryFinder$$Lambda$lambda$_newFactory$11$11 : public $Supplier {
	$class(SchemaFactoryFinder$$Lambda$lambda$_newFactory$11$11, $NO_CLASS_INIT, $Supplier)
public:
	void init$() {
	}
	virtual $Object* get() override {
		 return $of(SchemaFactoryFinder::lambda$_newFactory$11());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<SchemaFactoryFinder$$Lambda$lambda$_newFactory$11$11>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo SchemaFactoryFinder$$Lambda$lambda$_newFactory$11$11::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(SchemaFactoryFinder$$Lambda$lambda$_newFactory$11$11, init$, void)},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(SchemaFactoryFinder$$Lambda$lambda$_newFactory$11$11, get, $Object*)},
	{}
};
$ClassInfo SchemaFactoryFinder$$Lambda$lambda$_newFactory$11$11::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.xml.validation.SchemaFactoryFinder$$Lambda$lambda$_newFactory$11$11",
	"java.lang.Object",
	"java.util.function.Supplier",
	nullptr,
	methodInfos
};
$Class* SchemaFactoryFinder$$Lambda$lambda$_newFactory$11$11::load$($String* name, bool initialize) {
	$loadClass(SchemaFactoryFinder$$Lambda$lambda$_newFactory$11$11, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* SchemaFactoryFinder$$Lambda$lambda$_newFactory$11$11::class$ = nullptr;

class SchemaFactoryFinder$$Lambda$lambda$_newFactory$12$12 : public $Supplier {
	$class(SchemaFactoryFinder$$Lambda$lambda$_newFactory$12$12, $NO_CLASS_INIT, $Supplier)
public:
	void init$() {
	}
	virtual $Object* get() override {
		 return $of(SchemaFactoryFinder::lambda$_newFactory$12());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<SchemaFactoryFinder$$Lambda$lambda$_newFactory$12$12>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo SchemaFactoryFinder$$Lambda$lambda$_newFactory$12$12::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(SchemaFactoryFinder$$Lambda$lambda$_newFactory$12$12, init$, void)},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(SchemaFactoryFinder$$Lambda$lambda$_newFactory$12$12, get, $Object*)},
	{}
};
$ClassInfo SchemaFactoryFinder$$Lambda$lambda$_newFactory$12$12::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.xml.validation.SchemaFactoryFinder$$Lambda$lambda$_newFactory$12$12",
	"java.lang.Object",
	"java.util.function.Supplier",
	nullptr,
	methodInfos
};
$Class* SchemaFactoryFinder$$Lambda$lambda$_newFactory$12$12::load$($String* name, bool initialize) {
	$loadClass(SchemaFactoryFinder$$Lambda$lambda$_newFactory$12$12, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* SchemaFactoryFinder$$Lambda$lambda$_newFactory$12$12::class$ = nullptr;

class SchemaFactoryFinder$$Lambda$lambda$createInstance$13$13 : public $Supplier {
	$class(SchemaFactoryFinder$$Lambda$lambda$createInstance$13$13, $NO_CLASS_INIT, $Supplier)
public:
	void init$($String* className) {
		$set(this, className, className);
	}
	virtual $Object* get() override {
		 return $of(SchemaFactoryFinder::lambda$createInstance$13(className));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<SchemaFactoryFinder$$Lambda$lambda$createInstance$13$13>());
	}
	$String* className = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo SchemaFactoryFinder$$Lambda$lambda$createInstance$13$13::fieldInfos[2] = {
	{"className", "Ljava/lang/String;", nullptr, $PUBLIC, $field(SchemaFactoryFinder$$Lambda$lambda$createInstance$13$13, className)},
	{}
};
$MethodInfo SchemaFactoryFinder$$Lambda$lambda$createInstance$13$13::methodInfos[3] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(SchemaFactoryFinder$$Lambda$lambda$createInstance$13$13, init$, void, $String*)},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(SchemaFactoryFinder$$Lambda$lambda$createInstance$13$13, get, $Object*)},
	{}
};
$ClassInfo SchemaFactoryFinder$$Lambda$lambda$createInstance$13$13::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.xml.validation.SchemaFactoryFinder$$Lambda$lambda$createInstance$13$13",
	"java.lang.Object",
	"java.util.function.Supplier",
	fieldInfos,
	methodInfos
};
$Class* SchemaFactoryFinder$$Lambda$lambda$createInstance$13$13::load$($String* name, bool initialize) {
	$loadClass(SchemaFactoryFinder$$Lambda$lambda$createInstance$13$13, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* SchemaFactoryFinder$$Lambda$lambda$createInstance$13$13::class$ = nullptr;

class SchemaFactoryFinder$$Lambda$lambda$createInstance$14$14 : public $Supplier {
	$class(SchemaFactoryFinder$$Lambda$lambda$createInstance$14$14, $NO_CLASS_INIT, $Supplier)
public:
	void init$($String* className) {
		$set(this, className, className);
	}
	virtual $Object* get() override {
		 return $of(SchemaFactoryFinder::lambda$createInstance$14(className));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<SchemaFactoryFinder$$Lambda$lambda$createInstance$14$14>());
	}
	$String* className = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo SchemaFactoryFinder$$Lambda$lambda$createInstance$14$14::fieldInfos[2] = {
	{"className", "Ljava/lang/String;", nullptr, $PUBLIC, $field(SchemaFactoryFinder$$Lambda$lambda$createInstance$14$14, className)},
	{}
};
$MethodInfo SchemaFactoryFinder$$Lambda$lambda$createInstance$14$14::methodInfos[3] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(SchemaFactoryFinder$$Lambda$lambda$createInstance$14$14, init$, void, $String*)},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(SchemaFactoryFinder$$Lambda$lambda$createInstance$14$14, get, $Object*)},
	{}
};
$ClassInfo SchemaFactoryFinder$$Lambda$lambda$createInstance$14$14::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.xml.validation.SchemaFactoryFinder$$Lambda$lambda$createInstance$14$14",
	"java.lang.Object",
	"java.util.function.Supplier",
	fieldInfos,
	methodInfos
};
$Class* SchemaFactoryFinder$$Lambda$lambda$createInstance$14$14::load$($String* name, bool initialize) {
	$loadClass(SchemaFactoryFinder$$Lambda$lambda$createInstance$14$14, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* SchemaFactoryFinder$$Lambda$lambda$createInstance$14$14::class$ = nullptr;

class SchemaFactoryFinder$$Lambda$lambda$createInstance$15$15 : public $Supplier {
	$class(SchemaFactoryFinder$$Lambda$lambda$createInstance$15$15, $NO_CLASS_INIT, $Supplier)
public:
	void init$($String* className, $Class* clazz) {
		$set(this, className, className);
		this->clazz = clazz;
	}
	virtual $Object* get() override {
		 return $of(SchemaFactoryFinder::lambda$createInstance$15(className, clazz));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<SchemaFactoryFinder$$Lambda$lambda$createInstance$15$15>());
	}
	$String* className = nullptr;
	$Class* clazz = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo SchemaFactoryFinder$$Lambda$lambda$createInstance$15$15::fieldInfos[3] = {
	{"className", "Ljava/lang/String;", nullptr, $PUBLIC, $field(SchemaFactoryFinder$$Lambda$lambda$createInstance$15$15, className)},
	{"clazz", "Ljava/lang/Class;", nullptr, $PUBLIC, $field(SchemaFactoryFinder$$Lambda$lambda$createInstance$15$15, clazz)},
	{}
};
$MethodInfo SchemaFactoryFinder$$Lambda$lambda$createInstance$15$15::methodInfos[3] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/Class;)V", nullptr, $PUBLIC, $method(SchemaFactoryFinder$$Lambda$lambda$createInstance$15$15, init$, void, $String*, $Class*)},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(SchemaFactoryFinder$$Lambda$lambda$createInstance$15$15, get, $Object*)},
	{}
};
$ClassInfo SchemaFactoryFinder$$Lambda$lambda$createInstance$15$15::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.xml.validation.SchemaFactoryFinder$$Lambda$lambda$createInstance$15$15",
	"java.lang.Object",
	"java.util.function.Supplier",
	fieldInfos,
	methodInfos
};
$Class* SchemaFactoryFinder$$Lambda$lambda$createInstance$15$15::load$($String* name, bool initialize) {
	$loadClass(SchemaFactoryFinder$$Lambda$lambda$createInstance$15$15, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* SchemaFactoryFinder$$Lambda$lambda$createInstance$15$15::class$ = nullptr;

class SchemaFactoryFinder$$Lambda$lambda$createInstance$16$16 : public $Supplier {
	$class(SchemaFactoryFinder$$Lambda$lambda$createInstance$16$16, $NO_CLASS_INIT, $Supplier)
public:
	void init$($Class* clazz) {
		this->clazz = clazz;
	}
	virtual $Object* get() override {
		 return $of(SchemaFactoryFinder::lambda$createInstance$16(clazz));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<SchemaFactoryFinder$$Lambda$lambda$createInstance$16$16>());
	}
	$Class* clazz = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo SchemaFactoryFinder$$Lambda$lambda$createInstance$16$16::fieldInfos[2] = {
	{"clazz", "Ljava/lang/Class;", nullptr, $PUBLIC, $field(SchemaFactoryFinder$$Lambda$lambda$createInstance$16$16, clazz)},
	{}
};
$MethodInfo SchemaFactoryFinder$$Lambda$lambda$createInstance$16$16::methodInfos[3] = {
	{"<init>", "(Ljava/lang/Class;)V", nullptr, $PUBLIC, $method(SchemaFactoryFinder$$Lambda$lambda$createInstance$16$16, init$, void, $Class*)},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(SchemaFactoryFinder$$Lambda$lambda$createInstance$16$16, get, $Object*)},
	{}
};
$ClassInfo SchemaFactoryFinder$$Lambda$lambda$createInstance$16$16::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.xml.validation.SchemaFactoryFinder$$Lambda$lambda$createInstance$16$16",
	"java.lang.Object",
	"java.util.function.Supplier",
	fieldInfos,
	methodInfos
};
$Class* SchemaFactoryFinder$$Lambda$lambda$createInstance$16$16::load$($String* name, bool initialize) {
	$loadClass(SchemaFactoryFinder$$Lambda$lambda$createInstance$16$16, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* SchemaFactoryFinder$$Lambda$lambda$createInstance$16$16::class$ = nullptr;

$FieldInfo _SchemaFactoryFinder_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(SchemaFactoryFinder, $assertionsDisabled)},
	{"debug", "Z", nullptr, $PRIVATE | $STATIC, $staticField(SchemaFactoryFinder, debug)},
	{"DEFAULT_PACKAGE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SchemaFactoryFinder, DEFAULT_PACKAGE)},
	{"cacheProps", "Ljava/util/Properties;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SchemaFactoryFinder, cacheProps)},
	{"firstTime", "Z", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(SchemaFactoryFinder, firstTime)},
	{"classLoader", "Ljava/lang/ClassLoader;", nullptr, $PRIVATE | $FINAL, $field(SchemaFactoryFinder, classLoader)},
	{"SERVICE_CLASS", "Ljava/lang/Class;", "Ljava/lang/Class<Ljavax/xml/validation/SchemaFactory;>;", $PRIVATE | $STATIC | $FINAL, $staticField(SchemaFactoryFinder, SERVICE_CLASS)},
	{}
};

$MethodInfo _SchemaFactoryFinder_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/ClassLoader;)V", nullptr, $PUBLIC, $method(SchemaFactoryFinder, init$, void, $ClassLoader*)},
	{"_newFactory", "(Ljava/lang/String;)Ljavax/xml/validation/SchemaFactory;", nullptr, $PRIVATE, $method(SchemaFactoryFinder, _newFactory, $SchemaFactory*, $String*)},
	{"createClass", "(Ljava/lang/String;)Ljava/lang/Class;", "(Ljava/lang/String;)Ljava/lang/Class<*>;", $PRIVATE, $method(SchemaFactoryFinder, createClass, $Class*, $String*)},
	{"createInstance", "(Ljava/lang/String;)Ljavax/xml/validation/SchemaFactory;", nullptr, 0, $virtualMethod(SchemaFactoryFinder, createInstance, $SchemaFactory*, $String*)},
	{"debugDisplayClassLoader", "()V", nullptr, $PRIVATE, $method(SchemaFactoryFinder, debugDisplayClassLoader, void)},
	{"debugPrintln", "(Ljava/util/function/Supplier;)V", "(Ljava/util/function/Supplier<Ljava/lang/String;>;)V", $PRIVATE | $STATIC, $staticMethod(SchemaFactoryFinder, debugPrintln, void, $Supplier*)},
	{"findServiceProvider", "(Ljava/lang/String;)Ljavax/xml/validation/SchemaFactory;", nullptr, $PRIVATE, $method(SchemaFactoryFinder, findServiceProvider, $SchemaFactory*, $String*)},
	{"isSchemaLanguageSupportedBy", "(Ljavax/xml/validation/SchemaFactory;Ljava/lang/String;Ljava/security/AccessControlContext;)Z", nullptr, $PRIVATE, $method(SchemaFactoryFinder, isSchemaLanguageSupportedBy, bool, $SchemaFactory*, $String*, $AccessControlContext*)},
	{"lambda$_newFactory$10", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(SchemaFactoryFinder, lambda$_newFactory$10, $String*, $String*)},
	{"lambda$_newFactory$11", "()Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(SchemaFactoryFinder, lambda$_newFactory$11, $String*)},
	{"lambda$_newFactory$12", "()Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(SchemaFactoryFinder, lambda$_newFactory$12, $String*)},
	{"lambda$_newFactory$5", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(SchemaFactoryFinder, lambda$_newFactory$5, $String*, $String*)},
	{"lambda$_newFactory$6", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(SchemaFactoryFinder, lambda$_newFactory$6, $String*, $String*)},
	{"lambda$_newFactory$7", "()Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(SchemaFactoryFinder, lambda$_newFactory$7, $String*)},
	{"lambda$_newFactory$8", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(SchemaFactoryFinder, lambda$_newFactory$8, $String*, $String*)},
	{"lambda$_newFactory$9", "(Ljava/io/File;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(SchemaFactoryFinder, lambda$_newFactory$9, $String*, $File*)},
	{"lambda$createInstance$13", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(SchemaFactoryFinder, lambda$createInstance$13, $String*, $String*)},
	{"lambda$createInstance$14", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(SchemaFactoryFinder, lambda$createInstance$14, $String*, $String*)},
	{"lambda$createInstance$15", "(Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(SchemaFactoryFinder, lambda$createInstance$15, $String*, $String*, $Class*)},
	{"lambda$createInstance$16", "(Ljava/lang/Class;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(SchemaFactoryFinder, lambda$createInstance$16, $String*, $Class*)},
	{"lambda$debugDisplayClassLoader$0", "()Ljava/lang/String;", nullptr, $PRIVATE | $SYNTHETIC, $method(SchemaFactoryFinder, lambda$debugDisplayClassLoader$0, $String*)},
	{"lambda$debugDisplayClassLoader$1", "()Ljava/lang/String;", nullptr, $PRIVATE | $SYNTHETIC, $method(SchemaFactoryFinder, lambda$debugDisplayClassLoader$1, $String*)},
	{"lambda$debugDisplayClassLoader$2", "()Ljava/lang/String;", nullptr, $PRIVATE | $SYNTHETIC, $method(SchemaFactoryFinder, lambda$debugDisplayClassLoader$2, $String*)},
	{"lambda$newFactory$3", "(Ljavax/xml/validation/SchemaFactory;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(SchemaFactoryFinder, lambda$newFactory$3, $String*, $SchemaFactory*, $String*)},
	{"lambda$newFactory$4", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(SchemaFactoryFinder, lambda$newFactory$4, $String*, $String*)},
	{"newFactory", "(Ljava/lang/String;)Ljavax/xml/validation/SchemaFactory;", nullptr, $PUBLIC, $virtualMethod(SchemaFactoryFinder, newFactory, $SchemaFactory*, $String*)},
	{"which", "(Ljava/lang/Class;)Ljava/lang/String;", "(Ljava/lang/Class<*>;)Ljava/lang/String;", $PRIVATE | $STATIC, $staticMethod(SchemaFactoryFinder, which, $String*, $Class*)},
	{}
};

$InnerClassInfo _SchemaFactoryFinder_InnerClassesInfo_[] = {
	{"javax.xml.validation.SchemaFactoryFinder$2", nullptr, nullptr, 0},
	{"javax.xml.validation.SchemaFactoryFinder$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SchemaFactoryFinder_ClassInfo_ = {
	$ACC_SUPER,
	"javax.xml.validation.SchemaFactoryFinder",
	"java.lang.Object",
	nullptr,
	_SchemaFactoryFinder_FieldInfo_,
	_SchemaFactoryFinder_MethodInfo_,
	nullptr,
	nullptr,
	_SchemaFactoryFinder_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.xml.validation.SchemaFactoryFinder$2,javax.xml.validation.SchemaFactoryFinder$1"
};

$Object* allocate$SchemaFactoryFinder($Class* clazz) {
	return $of($alloc(SchemaFactoryFinder));
}

bool SchemaFactoryFinder::$assertionsDisabled = false;
bool SchemaFactoryFinder::debug = false;
$String* SchemaFactoryFinder::DEFAULT_PACKAGE = nullptr;
$Properties* SchemaFactoryFinder::cacheProps = nullptr;
$volatile(bool) SchemaFactoryFinder::firstTime = false;
$Class* SchemaFactoryFinder::SERVICE_CLASS = nullptr;

void SchemaFactoryFinder::debugPrintln($Supplier* msgGen) {
	$init(SchemaFactoryFinder);
	$useLocalCurrentObjectStackCache();
	if (SchemaFactoryFinder::debug) {
		$nc($System::err)->println($$str({"JAXP: "_s, $cast($String, $($nc(msgGen)->get()))}));
	}
}

void SchemaFactoryFinder::init$($ClassLoader* loader) {
	$set(this, classLoader, loader);
	if (SchemaFactoryFinder::debug) {
		debugDisplayClassLoader();
	}
}

void SchemaFactoryFinder::debugDisplayClassLoader() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	try {
		if (this->classLoader == $SecuritySupport::getContextClassLoader()) {
			debugPrintln(static_cast<$Supplier*>($$new(SchemaFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$0, this)));
			return;
		}
	} catch ($Throwable& unused) {
	}
	if (this->classLoader == $ClassLoader::getSystemClassLoader()) {
		debugPrintln(static_cast<$Supplier*>($$new(SchemaFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$1$1, this)));
		return;
	}
	debugPrintln(static_cast<$Supplier*>($$new(SchemaFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$2$2, this)));
}

$SchemaFactory* SchemaFactoryFinder::newFactory($String* schemaLanguage) {
	$useLocalCurrentObjectStackCache();
	if (schemaLanguage == nullptr) {
		$throwNew($NullPointerException);
	}
	$var($SchemaFactory, f, _newFactory(schemaLanguage));
	if (f != nullptr) {
		debugPrintln(static_cast<$Supplier*>($$new(SchemaFactoryFinder$$Lambda$lambda$newFactory$3$3, f, schemaLanguage)));
	} else {
		debugPrintln(static_cast<$Supplier*>($$new(SchemaFactoryFinder$$Lambda$lambda$newFactory$4$4, schemaLanguage)));
	}
	return f;
}

$SchemaFactory* SchemaFactoryFinder::_newFactory($String* schemaLanguage) {
	$useLocalCurrentObjectStackCache();
	$var($SchemaFactory, sf, nullptr);
	$var($String, propertyName, $str({$($nc(SchemaFactoryFinder::SERVICE_CLASS)->getName()), ":"_s, schemaLanguage}));
	try {
		debugPrintln(static_cast<$Supplier*>($$new(SchemaFactoryFinder$$Lambda$lambda$_newFactory$5$5, propertyName)));
		$var($String, r, $SecuritySupport::getSystemProperty(propertyName));
		if (r != nullptr) {
			debugPrintln(static_cast<$Supplier*>($$new(SchemaFactoryFinder$$Lambda$lambda$_newFactory$6$6, r)));
			$assign(sf, createInstance(r));
			if (sf != nullptr) {
				return sf;
			}
		} else {
			debugPrintln(static_cast<$Supplier*>($$new(SchemaFactoryFinder$$Lambda$lambda$_newFactory$7$7)));
		}
	} catch ($Throwable& t) {
		if (SchemaFactoryFinder::debug) {
			debugPrintln(static_cast<$Supplier*>($$new(SchemaFactoryFinder$$Lambda$lambda$_newFactory$8$8, propertyName)));
			t->printStackTrace();
		}
	}
	$var($String, javah, $SecuritySupport::getSystemProperty("java.home"_s));
	$init($File);
	$var($String, configFile, $str({javah, $File::separator, "conf"_s, $File::separator, "jaxp.properties"_s}));
	try {
		if (SchemaFactoryFinder::firstTime) {
			$synchronized(SchemaFactoryFinder::cacheProps) {
				if (SchemaFactoryFinder::firstTime) {
					$var($File, f, $new($File, configFile));
					SchemaFactoryFinder::firstTime = false;
					if ($SecuritySupport::doesFileExist(f)) {
						debugPrintln(static_cast<$Supplier*>($$new(SchemaFactoryFinder$$Lambda$lambda$_newFactory$9$9, f)));
						$nc(SchemaFactoryFinder::cacheProps)->load($(static_cast<$InputStream*>($SecuritySupport::getFileInputStream(f))));
					}
				}
			}
		}
		$var($String, factoryClassName, $nc(SchemaFactoryFinder::cacheProps)->getProperty(propertyName));
		debugPrintln(static_cast<$Supplier*>($$new(SchemaFactoryFinder$$Lambda$lambda$_newFactory$10$10, factoryClassName)));
		if (factoryClassName != nullptr) {
			$assign(sf, createInstance(factoryClassName));
			if (sf != nullptr) {
				return sf;
			}
		}
	} catch ($Exception& ex) {
		if (SchemaFactoryFinder::debug) {
			ex->printStackTrace();
		}
	}
	$var($SchemaFactory, factoryImpl, findServiceProvider(schemaLanguage));
	if (factoryImpl != nullptr) {
		return factoryImpl;
	}
	if ($nc(schemaLanguage)->equals("http://www.w3.org/2001/XMLSchema"_s)) {
		debugPrintln(static_cast<$Supplier*>($$new(SchemaFactoryFinder$$Lambda$lambda$_newFactory$11$11)));
		return $new($XMLSchemaFactory);
	}
	debugPrintln(static_cast<$Supplier*>($$new(SchemaFactoryFinder$$Lambda$lambda$_newFactory$12$12)));
	return nullptr;
}

$Class* SchemaFactoryFinder::createClass($String* className) {
	$beforeCallerSensitive();
	$Class* clazz = nullptr;
	bool internal = false;
	if ($System::getSecurityManager() != nullptr) {
		if (className != nullptr && className->startsWith(SchemaFactoryFinder::DEFAULT_PACKAGE)) {
			internal = true;
		}
	}
	try {
		if (this->classLoader != nullptr && !internal) {
			clazz = $Class::forName(className, false, this->classLoader);
		} else {
			clazz = $Class::forName(className);
		}
	} catch ($Throwable& t) {
		if (SchemaFactoryFinder::debug) {
			t->printStackTrace();
		}
		return nullptr;
	}
	return clazz;
}

$SchemaFactory* SchemaFactoryFinder::createInstance($String* className) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($SchemaFactory, schemaFactory, nullptr);
	debugPrintln(static_cast<$Supplier*>($$new(SchemaFactoryFinder$$Lambda$lambda$createInstance$13$13, className)));
	$Class* clazz = createClass(className);
	if (clazz == nullptr) {
		debugPrintln(static_cast<$Supplier*>($$new(SchemaFactoryFinder$$Lambda$lambda$createInstance$14$14, className)));
		return nullptr;
	}
	debugPrintln(static_cast<$Supplier*>($$new(SchemaFactoryFinder$$Lambda$lambda$createInstance$15$15, className, clazz)));
	try {
		$load($SchemaFactory);
		if (!$SchemaFactory::class$->isAssignableFrom(clazz)) {
			$throwNew($ClassCastException, $$str({$($nc(clazz)->getName()), " cannot be cast to "_s, $SchemaFactory::class$}));
		}
		$assign(schemaFactory, $cast($SchemaFactory, $nc($($nc(clazz)->getConstructor($$new($ClassArray, 0))))->newInstance($$new($ObjectArray, 0))));
	} catch ($ClassCastException& ex) {
		debugPrintln(static_cast<$Supplier*>($$new(SchemaFactoryFinder$$Lambda$lambda$createInstance$16$16, clazz)));
		if (SchemaFactoryFinder::debug) {
			ex->printStackTrace();
		}
		return nullptr;
	} catch ($IllegalAccessException& ex) {
		debugPrintln(static_cast<$Supplier*>($$new(SchemaFactoryFinder$$Lambda$lambda$createInstance$16$16, clazz)));
		if (SchemaFactoryFinder::debug) {
			ex->printStackTrace();
		}
		return nullptr;
	} catch ($IllegalArgumentException& ex) {
		debugPrintln(static_cast<$Supplier*>($$new(SchemaFactoryFinder$$Lambda$lambda$createInstance$16$16, clazz)));
		if (SchemaFactoryFinder::debug) {
			ex->printStackTrace();
		}
		return nullptr;
	} catch ($InstantiationException& ex) {
		debugPrintln(static_cast<$Supplier*>($$new(SchemaFactoryFinder$$Lambda$lambda$createInstance$16$16, clazz)));
		if (SchemaFactoryFinder::debug) {
			ex->printStackTrace();
		}
		return nullptr;
	} catch ($InvocationTargetException& ex) {
		debugPrintln(static_cast<$Supplier*>($$new(SchemaFactoryFinder$$Lambda$lambda$createInstance$16$16, clazz)));
		if (SchemaFactoryFinder::debug) {
			ex->printStackTrace();
		}
		return nullptr;
	} catch ($NoSuchMethodException& ex) {
		debugPrintln(static_cast<$Supplier*>($$new(SchemaFactoryFinder$$Lambda$lambda$createInstance$16$16, clazz)));
		if (SchemaFactoryFinder::debug) {
			ex->printStackTrace();
		}
		return nullptr;
	} catch ($SecurityException& ex) {
		debugPrintln(static_cast<$Supplier*>($$new(SchemaFactoryFinder$$Lambda$lambda$createInstance$16$16, clazz)));
		if (SchemaFactoryFinder::debug) {
			ex->printStackTrace();
		}
		return nullptr;
	}
	return schemaFactory;
}

bool SchemaFactoryFinder::isSchemaLanguageSupportedBy($SchemaFactory* factory, $String* schemaLanguage, $AccessControlContext* acc) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	return $nc(($cast($Boolean, $($AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($SchemaFactoryFinder$1, this, factory, schemaLanguage)), acc)))))->booleanValue();
}

$SchemaFactory* SchemaFactoryFinder::findServiceProvider($String* schemaLanguage) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	if (!SchemaFactoryFinder::$assertionsDisabled && !(schemaLanguage != nullptr)) {
		$throwNew($AssertionError);
	}
	$var($AccessControlContext, acc, $AccessController::getContext());
	try {
		return $cast($SchemaFactory, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($SchemaFactoryFinder$2, this, schemaLanguage, acc))));
	} catch ($ServiceConfigurationError& error) {
		$throwNew($SchemaFactoryConfigurationError, $$str({"Provider for "_s, SchemaFactoryFinder::SERVICE_CLASS, " cannot be created"_s}), error);
	}
	$shouldNotReachHere();
}

$String* SchemaFactoryFinder::which($Class* clazz) {
	$init(SchemaFactoryFinder);
	return $SecuritySupport::getClassSource(clazz);
}

$String* SchemaFactoryFinder::lambda$createInstance$16($Class* clazz) {
	$init(SchemaFactoryFinder);
	return $str({"could not instantiate "_s, $($nc(clazz)->getName())});
}

$String* SchemaFactoryFinder::lambda$createInstance$15($String* className, $Class* clazz) {
	$init(SchemaFactoryFinder);
	return $str({"loaded "_s, className, " from "_s, $(which(clazz))});
}

$String* SchemaFactoryFinder::lambda$createInstance$14($String* className) {
	$init(SchemaFactoryFinder);
	return $str({"failed to getClass("_s, className, ")"_s});
}

$String* SchemaFactoryFinder::lambda$createInstance$13($String* className) {
	$init(SchemaFactoryFinder);
	return $str({"createInstance("_s, className, ")"_s});
}

$String* SchemaFactoryFinder::lambda$_newFactory$12() {
	$init(SchemaFactoryFinder);
	return "all things were tried, but none was found. bailing out."_s;
}

$String* SchemaFactoryFinder::lambda$_newFactory$11() {
	$init(SchemaFactoryFinder);
	return "attempting to use the platform default XML Schema validator"_s;
}

$String* SchemaFactoryFinder::lambda$_newFactory$10($String* factoryClassName) {
	$init(SchemaFactoryFinder);
	return $str({"found "_s, factoryClassName, " in $java.home/conf/jaxp.properties"_s});
}

$String* SchemaFactoryFinder::lambda$_newFactory$9($File* f) {
	$init(SchemaFactoryFinder);
	return $str({"Read properties file "_s, f});
}

$String* SchemaFactoryFinder::lambda$_newFactory$8($String* propertyName) {
	$init(SchemaFactoryFinder);
	return $str({"failed to look up system property \'"_s, propertyName, "\'"_s});
}

$String* SchemaFactoryFinder::lambda$_newFactory$7() {
	$init(SchemaFactoryFinder);
	return "The property is undefined."_s;
}

$String* SchemaFactoryFinder::lambda$_newFactory$6($String* r) {
	$init(SchemaFactoryFinder);
	return $str({"The value is \'"_s, r, "\'"_s});
}

$String* SchemaFactoryFinder::lambda$_newFactory$5($String* propertyName) {
	$init(SchemaFactoryFinder);
	return $str({"Looking up system property \'"_s, propertyName, "\'"_s});
}

$String* SchemaFactoryFinder::lambda$newFactory$4($String* schemaLanguage) {
	$init(SchemaFactoryFinder);
	return $str({"unable to find a factory for "_s, schemaLanguage});
}

$String* SchemaFactoryFinder::lambda$newFactory$3($SchemaFactory* f, $String* schemaLanguage) {
	$init(SchemaFactoryFinder);
	return $str({"factory \'"_s, $($nc($of(f))->getClass()->getName()), "\' was found for "_s, schemaLanguage});
}

$String* SchemaFactoryFinder::lambda$debugDisplayClassLoader$2() {
	return $str({"using class loader ("_s, this->classLoader, ") for search"_s});
}

$String* SchemaFactoryFinder::lambda$debugDisplayClassLoader$1() {
	return $str({"using system class loader ("_s, this->classLoader, ") for search"_s});
}

$String* SchemaFactoryFinder::lambda$debugDisplayClassLoader$0() {
	return $str({"using thread context class loader ("_s, this->classLoader, ") for search"_s});
}

void clinit$SchemaFactoryFinder($Class* class$) {
	$assignStatic(SchemaFactoryFinder::DEFAULT_PACKAGE, "com.sun.org.apache.xerces.internal"_s);
	SchemaFactoryFinder::$assertionsDisabled = !SchemaFactoryFinder::class$->desiredAssertionStatus();
	SchemaFactoryFinder::debug = false;
	$assignStatic(SchemaFactoryFinder::cacheProps, $new($Properties));
	SchemaFactoryFinder::firstTime = true;
	{
		try {
			SchemaFactoryFinder::debug = $SecuritySupport::getSystemProperty("jaxp.debug"_s) != nullptr;
		} catch ($Exception& unused) {
			SchemaFactoryFinder::debug = false;
		}
	}
	$load($SchemaFactory);
	$assignStatic(SchemaFactoryFinder::SERVICE_CLASS, $SchemaFactory::class$);
}

SchemaFactoryFinder::SchemaFactoryFinder() {
}

$Class* SchemaFactoryFinder::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(SchemaFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$0::classInfo$.name)) {
			return SchemaFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$0::load$(name, initialize);
		}
		if (name->equals(SchemaFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$1$1::classInfo$.name)) {
			return SchemaFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$1$1::load$(name, initialize);
		}
		if (name->equals(SchemaFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$2$2::classInfo$.name)) {
			return SchemaFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$2$2::load$(name, initialize);
		}
		if (name->equals(SchemaFactoryFinder$$Lambda$lambda$newFactory$3$3::classInfo$.name)) {
			return SchemaFactoryFinder$$Lambda$lambda$newFactory$3$3::load$(name, initialize);
		}
		if (name->equals(SchemaFactoryFinder$$Lambda$lambda$newFactory$4$4::classInfo$.name)) {
			return SchemaFactoryFinder$$Lambda$lambda$newFactory$4$4::load$(name, initialize);
		}
		if (name->equals(SchemaFactoryFinder$$Lambda$lambda$_newFactory$5$5::classInfo$.name)) {
			return SchemaFactoryFinder$$Lambda$lambda$_newFactory$5$5::load$(name, initialize);
		}
		if (name->equals(SchemaFactoryFinder$$Lambda$lambda$_newFactory$6$6::classInfo$.name)) {
			return SchemaFactoryFinder$$Lambda$lambda$_newFactory$6$6::load$(name, initialize);
		}
		if (name->equals(SchemaFactoryFinder$$Lambda$lambda$_newFactory$7$7::classInfo$.name)) {
			return SchemaFactoryFinder$$Lambda$lambda$_newFactory$7$7::load$(name, initialize);
		}
		if (name->equals(SchemaFactoryFinder$$Lambda$lambda$_newFactory$8$8::classInfo$.name)) {
			return SchemaFactoryFinder$$Lambda$lambda$_newFactory$8$8::load$(name, initialize);
		}
		if (name->equals(SchemaFactoryFinder$$Lambda$lambda$_newFactory$9$9::classInfo$.name)) {
			return SchemaFactoryFinder$$Lambda$lambda$_newFactory$9$9::load$(name, initialize);
		}
		if (name->equals(SchemaFactoryFinder$$Lambda$lambda$_newFactory$10$10::classInfo$.name)) {
			return SchemaFactoryFinder$$Lambda$lambda$_newFactory$10$10::load$(name, initialize);
		}
		if (name->equals(SchemaFactoryFinder$$Lambda$lambda$_newFactory$11$11::classInfo$.name)) {
			return SchemaFactoryFinder$$Lambda$lambda$_newFactory$11$11::load$(name, initialize);
		}
		if (name->equals(SchemaFactoryFinder$$Lambda$lambda$_newFactory$12$12::classInfo$.name)) {
			return SchemaFactoryFinder$$Lambda$lambda$_newFactory$12$12::load$(name, initialize);
		}
		if (name->equals(SchemaFactoryFinder$$Lambda$lambda$createInstance$13$13::classInfo$.name)) {
			return SchemaFactoryFinder$$Lambda$lambda$createInstance$13$13::load$(name, initialize);
		}
		if (name->equals(SchemaFactoryFinder$$Lambda$lambda$createInstance$14$14::classInfo$.name)) {
			return SchemaFactoryFinder$$Lambda$lambda$createInstance$14$14::load$(name, initialize);
		}
		if (name->equals(SchemaFactoryFinder$$Lambda$lambda$createInstance$15$15::classInfo$.name)) {
			return SchemaFactoryFinder$$Lambda$lambda$createInstance$15$15::load$(name, initialize);
		}
		if (name->equals(SchemaFactoryFinder$$Lambda$lambda$createInstance$16$16::classInfo$.name)) {
			return SchemaFactoryFinder$$Lambda$lambda$createInstance$16$16::load$(name, initialize);
		}
	}
	$loadClass(SchemaFactoryFinder, name, initialize, &_SchemaFactoryFinder_ClassInfo_, clinit$SchemaFactoryFinder, allocate$SchemaFactoryFinder);
	return class$;
}

$Class* SchemaFactoryFinder::class$ = nullptr;

		} // validation
	} // xml
} // javax