#include <javax/xml/xpath/XPathFactoryFinder.h>
#include <com/sun/org/apache/xpath/internal/jaxp/XPathFactoryImpl.h>
#include <java/io/File.h>
#include <java/io/FileInputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/AssertionError.h>
#include <java/lang/ClassCastException.h>
#include <java/lang/ClassLoader.h>
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
#include <java/util/Properties.h>
#include <java/util/ServiceConfigurationError.h>
#include <java/util/function/Supplier.h>
#include <javax/xml/xpath/XPathFactory.h>
#include <javax/xml/xpath/XPathFactoryConfigurationException.h>
#include <javax/xml/xpath/XPathFactoryFinder$1.h>
#include <javax/xml/xpath/XPathFactoryFinder$2.h>
#include <jdk/xml/internal/SecuritySupport.h>
#include <jcpp.h>

#undef DEFAULT_OBJECT_MODEL_URI
#undef DEFAULT_PACKAGE
#undef SERVICE_CLASS

using $XPathFactoryImpl = ::com::sun::org::apache::xpath::internal::jaxp::XPathFactoryImpl;
using $File = ::java::io::File;
using $Serializable = ::java::io::Serializable;
using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
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
using $InvocationTargetException = ::java::lang::reflect::InvocationTargetException;
using $AccessControlContext = ::java::security::AccessControlContext;
using $AccessController = ::java::security::AccessController;
using $Properties = ::java::util::Properties;
using $ServiceConfigurationError = ::java::util::ServiceConfigurationError;
using $Supplier = ::java::util::function::Supplier;
using $XPathFactory = ::javax::xml::xpath::XPathFactory;
using $XPathFactoryConfigurationException = ::javax::xml::xpath::XPathFactoryConfigurationException;
using $XPathFactoryFinder$1 = ::javax::xml::xpath::XPathFactoryFinder$1;
using $XPathFactoryFinder$2 = ::javax::xml::xpath::XPathFactoryFinder$2;
using $SecuritySupport = ::jdk::xml::internal::SecuritySupport;

namespace javax {
	namespace xml {
		namespace xpath {

class XPathFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$0 : public $Supplier {
	$class(XPathFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$0, $NO_CLASS_INIT, $Supplier)
public:
	void init$(XPathFactoryFinder* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* get() override {
		return $of($nc(inst$)->lambda$debugDisplayClassLoader$0());
	}
	XPathFactoryFinder* inst$ = nullptr;
};
$Class* XPathFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(XPathFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$0, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/xml/xpath/XPathFactoryFinder;)V", nullptr, $PUBLIC, $method(XPathFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$0, init$, void, XPathFactoryFinder*)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(XPathFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$0, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.xml.xpath.XPathFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$0",
		"java.lang.Object",
		"java.util.function.Supplier",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(XPathFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XPathFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$0);
	});
	return class$;
}
$Class* XPathFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$0::class$ = nullptr;

class XPathFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$1$1 : public $Supplier {
	$class(XPathFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$1$1, $NO_CLASS_INIT, $Supplier)
public:
	void init$(XPathFactoryFinder* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* get() override {
		return $of($nc(inst$)->lambda$debugDisplayClassLoader$1());
	}
	XPathFactoryFinder* inst$ = nullptr;
};
$Class* XPathFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$1$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(XPathFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$1$1, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/xml/xpath/XPathFactoryFinder;)V", nullptr, $PUBLIC, $method(XPathFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$1$1, init$, void, XPathFactoryFinder*)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(XPathFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$1$1, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.xml.xpath.XPathFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$1$1",
		"java.lang.Object",
		"java.util.function.Supplier",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(XPathFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XPathFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$1$1);
	});
	return class$;
}
$Class* XPathFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$1$1::class$ = nullptr;

class XPathFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$2$2 : public $Supplier {
	$class(XPathFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$2$2, $NO_CLASS_INIT, $Supplier)
public:
	void init$(XPathFactoryFinder* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* get() override {
		return $of($nc(inst$)->lambda$debugDisplayClassLoader$2());
	}
	XPathFactoryFinder* inst$ = nullptr;
};
$Class* XPathFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$2$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(XPathFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$2$2, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/xml/xpath/XPathFactoryFinder;)V", nullptr, $PUBLIC, $method(XPathFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$2$2, init$, void, XPathFactoryFinder*)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(XPathFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$2$2, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.xml.xpath.XPathFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$2$2",
		"java.lang.Object",
		"java.util.function.Supplier",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(XPathFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$2$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XPathFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$2$2);
	});
	return class$;
}
$Class* XPathFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$2$2::class$ = nullptr;

class XPathFactoryFinder$$Lambda$lambda$newFactory$3$3 : public $Supplier {
	$class(XPathFactoryFinder$$Lambda$lambda$newFactory$3$3, $NO_CLASS_INIT, $Supplier)
public:
	void init$($XPathFactory* f, $String* uri) {
		$set(this, f, f);
		$set(this, uri, uri);
	}
	virtual $Object* get() override {
		return $of(XPathFactoryFinder::lambda$newFactory$3(f, uri));
	}
	$XPathFactory* f = nullptr;
	$String* uri = nullptr;
};
$Class* XPathFactoryFinder$$Lambda$lambda$newFactory$3$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"f", "Ljavax/xml/xpath/XPathFactory;", nullptr, $PUBLIC, $field(XPathFactoryFinder$$Lambda$lambda$newFactory$3$3, f)},
		{"uri", "Ljava/lang/String;", nullptr, $PUBLIC, $field(XPathFactoryFinder$$Lambda$lambda$newFactory$3$3, uri)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/xml/xpath/XPathFactory;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(XPathFactoryFinder$$Lambda$lambda$newFactory$3$3, init$, void, $XPathFactory*, $String*)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(XPathFactoryFinder$$Lambda$lambda$newFactory$3$3, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.xml.xpath.XPathFactoryFinder$$Lambda$lambda$newFactory$3$3",
		"java.lang.Object",
		"java.util.function.Supplier",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(XPathFactoryFinder$$Lambda$lambda$newFactory$3$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XPathFactoryFinder$$Lambda$lambda$newFactory$3$3);
	});
	return class$;
}
$Class* XPathFactoryFinder$$Lambda$lambda$newFactory$3$3::class$ = nullptr;

class XPathFactoryFinder$$Lambda$lambda$newFactory$4$4 : public $Supplier {
	$class(XPathFactoryFinder$$Lambda$lambda$newFactory$4$4, $NO_CLASS_INIT, $Supplier)
public:
	void init$($String* uri) {
		$set(this, uri, uri);
	}
	virtual $Object* get() override {
		return $of(XPathFactoryFinder::lambda$newFactory$4(uri));
	}
	$String* uri = nullptr;
};
$Class* XPathFactoryFinder$$Lambda$lambda$newFactory$4$4::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"uri", "Ljava/lang/String;", nullptr, $PUBLIC, $field(XPathFactoryFinder$$Lambda$lambda$newFactory$4$4, uri)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(XPathFactoryFinder$$Lambda$lambda$newFactory$4$4, init$, void, $String*)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(XPathFactoryFinder$$Lambda$lambda$newFactory$4$4, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.xml.xpath.XPathFactoryFinder$$Lambda$lambda$newFactory$4$4",
		"java.lang.Object",
		"java.util.function.Supplier",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(XPathFactoryFinder$$Lambda$lambda$newFactory$4$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XPathFactoryFinder$$Lambda$lambda$newFactory$4$4);
	});
	return class$;
}
$Class* XPathFactoryFinder$$Lambda$lambda$newFactory$4$4::class$ = nullptr;

class XPathFactoryFinder$$Lambda$lambda$_newFactory$5$5 : public $Supplier {
	$class(XPathFactoryFinder$$Lambda$lambda$_newFactory$5$5, $NO_CLASS_INIT, $Supplier)
public:
	void init$($String* propertyName) {
		$set(this, propertyName, propertyName);
	}
	virtual $Object* get() override {
		return $of(XPathFactoryFinder::lambda$_newFactory$5(propertyName));
	}
	$String* propertyName = nullptr;
};
$Class* XPathFactoryFinder$$Lambda$lambda$_newFactory$5$5::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"propertyName", "Ljava/lang/String;", nullptr, $PUBLIC, $field(XPathFactoryFinder$$Lambda$lambda$_newFactory$5$5, propertyName)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(XPathFactoryFinder$$Lambda$lambda$_newFactory$5$5, init$, void, $String*)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(XPathFactoryFinder$$Lambda$lambda$_newFactory$5$5, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.xml.xpath.XPathFactoryFinder$$Lambda$lambda$_newFactory$5$5",
		"java.lang.Object",
		"java.util.function.Supplier",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(XPathFactoryFinder$$Lambda$lambda$_newFactory$5$5, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XPathFactoryFinder$$Lambda$lambda$_newFactory$5$5);
	});
	return class$;
}
$Class* XPathFactoryFinder$$Lambda$lambda$_newFactory$5$5::class$ = nullptr;

class XPathFactoryFinder$$Lambda$lambda$_newFactory$6$6 : public $Supplier {
	$class(XPathFactoryFinder$$Lambda$lambda$_newFactory$6$6, $NO_CLASS_INIT, $Supplier)
public:
	void init$($String* r) {
		$set(this, r, r);
	}
	virtual $Object* get() override {
		return $of(XPathFactoryFinder::lambda$_newFactory$6(r));
	}
	$String* r = nullptr;
};
$Class* XPathFactoryFinder$$Lambda$lambda$_newFactory$6$6::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"r", "Ljava/lang/String;", nullptr, $PUBLIC, $field(XPathFactoryFinder$$Lambda$lambda$_newFactory$6$6, r)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(XPathFactoryFinder$$Lambda$lambda$_newFactory$6$6, init$, void, $String*)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(XPathFactoryFinder$$Lambda$lambda$_newFactory$6$6, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.xml.xpath.XPathFactoryFinder$$Lambda$lambda$_newFactory$6$6",
		"java.lang.Object",
		"java.util.function.Supplier",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(XPathFactoryFinder$$Lambda$lambda$_newFactory$6$6, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XPathFactoryFinder$$Lambda$lambda$_newFactory$6$6);
	});
	return class$;
}
$Class* XPathFactoryFinder$$Lambda$lambda$_newFactory$6$6::class$ = nullptr;

class XPathFactoryFinder$$Lambda$lambda$_newFactory$7$7 : public $Supplier {
	$class(XPathFactoryFinder$$Lambda$lambda$_newFactory$7$7, $NO_CLASS_INIT, $Supplier)
public:
	void init$() {
	}
	virtual $Object* get() override {
		return $of(XPathFactoryFinder::lambda$_newFactory$7());
	}
};
$Class* XPathFactoryFinder$$Lambda$lambda$_newFactory$7$7::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(XPathFactoryFinder$$Lambda$lambda$_newFactory$7$7, init$, void)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(XPathFactoryFinder$$Lambda$lambda$_newFactory$7$7, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.xml.xpath.XPathFactoryFinder$$Lambda$lambda$_newFactory$7$7",
		"java.lang.Object",
		"java.util.function.Supplier",
		nullptr,
		methodInfos$$
	};
	$loadClass(XPathFactoryFinder$$Lambda$lambda$_newFactory$7$7, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XPathFactoryFinder$$Lambda$lambda$_newFactory$7$7);
	});
	return class$;
}
$Class* XPathFactoryFinder$$Lambda$lambda$_newFactory$7$7::class$ = nullptr;

class XPathFactoryFinder$$Lambda$lambda$_newFactory$8$8 : public $Supplier {
	$class(XPathFactoryFinder$$Lambda$lambda$_newFactory$8$8, $NO_CLASS_INIT, $Supplier)
public:
	void init$($String* propertyName) {
		$set(this, propertyName, propertyName);
	}
	virtual $Object* get() override {
		return $of(XPathFactoryFinder::lambda$_newFactory$8(propertyName));
	}
	$String* propertyName = nullptr;
};
$Class* XPathFactoryFinder$$Lambda$lambda$_newFactory$8$8::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"propertyName", "Ljava/lang/String;", nullptr, $PUBLIC, $field(XPathFactoryFinder$$Lambda$lambda$_newFactory$8$8, propertyName)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(XPathFactoryFinder$$Lambda$lambda$_newFactory$8$8, init$, void, $String*)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(XPathFactoryFinder$$Lambda$lambda$_newFactory$8$8, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.xml.xpath.XPathFactoryFinder$$Lambda$lambda$_newFactory$8$8",
		"java.lang.Object",
		"java.util.function.Supplier",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(XPathFactoryFinder$$Lambda$lambda$_newFactory$8$8, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XPathFactoryFinder$$Lambda$lambda$_newFactory$8$8);
	});
	return class$;
}
$Class* XPathFactoryFinder$$Lambda$lambda$_newFactory$8$8::class$ = nullptr;

class XPathFactoryFinder$$Lambda$lambda$_newFactory$9$9 : public $Supplier {
	$class(XPathFactoryFinder$$Lambda$lambda$_newFactory$9$9, $NO_CLASS_INIT, $Supplier)
public:
	void init$($File* f) {
		$set(this, f, f);
	}
	virtual $Object* get() override {
		return $of(XPathFactoryFinder::lambda$_newFactory$9(f));
	}
	$File* f = nullptr;
};
$Class* XPathFactoryFinder$$Lambda$lambda$_newFactory$9$9::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"f", "Ljava/io/File;", nullptr, $PUBLIC, $field(XPathFactoryFinder$$Lambda$lambda$_newFactory$9$9, f)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/io/File;)V", nullptr, $PUBLIC, $method(XPathFactoryFinder$$Lambda$lambda$_newFactory$9$9, init$, void, $File*)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(XPathFactoryFinder$$Lambda$lambda$_newFactory$9$9, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.xml.xpath.XPathFactoryFinder$$Lambda$lambda$_newFactory$9$9",
		"java.lang.Object",
		"java.util.function.Supplier",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(XPathFactoryFinder$$Lambda$lambda$_newFactory$9$9, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XPathFactoryFinder$$Lambda$lambda$_newFactory$9$9);
	});
	return class$;
}
$Class* XPathFactoryFinder$$Lambda$lambda$_newFactory$9$9::class$ = nullptr;

class XPathFactoryFinder$$Lambda$lambda$_newFactory$10$10 : public $Supplier {
	$class(XPathFactoryFinder$$Lambda$lambda$_newFactory$10$10, $NO_CLASS_INIT, $Supplier)
public:
	void init$($String* factoryClassName) {
		$set(this, factoryClassName, factoryClassName);
	}
	virtual $Object* get() override {
		return $of(XPathFactoryFinder::lambda$_newFactory$10(factoryClassName));
	}
	$String* factoryClassName = nullptr;
};
$Class* XPathFactoryFinder$$Lambda$lambda$_newFactory$10$10::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"factoryClassName", "Ljava/lang/String;", nullptr, $PUBLIC, $field(XPathFactoryFinder$$Lambda$lambda$_newFactory$10$10, factoryClassName)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(XPathFactoryFinder$$Lambda$lambda$_newFactory$10$10, init$, void, $String*)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(XPathFactoryFinder$$Lambda$lambda$_newFactory$10$10, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.xml.xpath.XPathFactoryFinder$$Lambda$lambda$_newFactory$10$10",
		"java.lang.Object",
		"java.util.function.Supplier",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(XPathFactoryFinder$$Lambda$lambda$_newFactory$10$10, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XPathFactoryFinder$$Lambda$lambda$_newFactory$10$10);
	});
	return class$;
}
$Class* XPathFactoryFinder$$Lambda$lambda$_newFactory$10$10::class$ = nullptr;

class XPathFactoryFinder$$Lambda$lambda$_newFactory$11$11 : public $Supplier {
	$class(XPathFactoryFinder$$Lambda$lambda$_newFactory$11$11, $NO_CLASS_INIT, $Supplier)
public:
	void init$() {
	}
	virtual $Object* get() override {
		return $of(XPathFactoryFinder::lambda$_newFactory$11());
	}
};
$Class* XPathFactoryFinder$$Lambda$lambda$_newFactory$11$11::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(XPathFactoryFinder$$Lambda$lambda$_newFactory$11$11, init$, void)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(XPathFactoryFinder$$Lambda$lambda$_newFactory$11$11, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.xml.xpath.XPathFactoryFinder$$Lambda$lambda$_newFactory$11$11",
		"java.lang.Object",
		"java.util.function.Supplier",
		nullptr,
		methodInfos$$
	};
	$loadClass(XPathFactoryFinder$$Lambda$lambda$_newFactory$11$11, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XPathFactoryFinder$$Lambda$lambda$_newFactory$11$11);
	});
	return class$;
}
$Class* XPathFactoryFinder$$Lambda$lambda$_newFactory$11$11::class$ = nullptr;

class XPathFactoryFinder$$Lambda$lambda$_newFactory$12$12 : public $Supplier {
	$class(XPathFactoryFinder$$Lambda$lambda$_newFactory$12$12, $NO_CLASS_INIT, $Supplier)
public:
	void init$() {
	}
	virtual $Object* get() override {
		return $of(XPathFactoryFinder::lambda$_newFactory$12());
	}
};
$Class* XPathFactoryFinder$$Lambda$lambda$_newFactory$12$12::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(XPathFactoryFinder$$Lambda$lambda$_newFactory$12$12, init$, void)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(XPathFactoryFinder$$Lambda$lambda$_newFactory$12$12, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.xml.xpath.XPathFactoryFinder$$Lambda$lambda$_newFactory$12$12",
		"java.lang.Object",
		"java.util.function.Supplier",
		nullptr,
		methodInfos$$
	};
	$loadClass(XPathFactoryFinder$$Lambda$lambda$_newFactory$12$12, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XPathFactoryFinder$$Lambda$lambda$_newFactory$12$12);
	});
	return class$;
}
$Class* XPathFactoryFinder$$Lambda$lambda$_newFactory$12$12::class$ = nullptr;

class XPathFactoryFinder$$Lambda$lambda$createInstance$13$13 : public $Supplier {
	$class(XPathFactoryFinder$$Lambda$lambda$createInstance$13$13, $NO_CLASS_INIT, $Supplier)
public:
	void init$($String* className) {
		$set(this, className, className);
	}
	virtual $Object* get() override {
		return $of(XPathFactoryFinder::lambda$createInstance$13(className));
	}
	$String* className = nullptr;
};
$Class* XPathFactoryFinder$$Lambda$lambda$createInstance$13$13::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"className", "Ljava/lang/String;", nullptr, $PUBLIC, $field(XPathFactoryFinder$$Lambda$lambda$createInstance$13$13, className)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(XPathFactoryFinder$$Lambda$lambda$createInstance$13$13, init$, void, $String*)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(XPathFactoryFinder$$Lambda$lambda$createInstance$13$13, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.xml.xpath.XPathFactoryFinder$$Lambda$lambda$createInstance$13$13",
		"java.lang.Object",
		"java.util.function.Supplier",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(XPathFactoryFinder$$Lambda$lambda$createInstance$13$13, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XPathFactoryFinder$$Lambda$lambda$createInstance$13$13);
	});
	return class$;
}
$Class* XPathFactoryFinder$$Lambda$lambda$createInstance$13$13::class$ = nullptr;

class XPathFactoryFinder$$Lambda$lambda$createInstance$14$14 : public $Supplier {
	$class(XPathFactoryFinder$$Lambda$lambda$createInstance$14$14, $NO_CLASS_INIT, $Supplier)
public:
	void init$($String* className) {
		$set(this, className, className);
	}
	virtual $Object* get() override {
		return $of(XPathFactoryFinder::lambda$createInstance$14(className));
	}
	$String* className = nullptr;
};
$Class* XPathFactoryFinder$$Lambda$lambda$createInstance$14$14::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"className", "Ljava/lang/String;", nullptr, $PUBLIC, $field(XPathFactoryFinder$$Lambda$lambda$createInstance$14$14, className)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(XPathFactoryFinder$$Lambda$lambda$createInstance$14$14, init$, void, $String*)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(XPathFactoryFinder$$Lambda$lambda$createInstance$14$14, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.xml.xpath.XPathFactoryFinder$$Lambda$lambda$createInstance$14$14",
		"java.lang.Object",
		"java.util.function.Supplier",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(XPathFactoryFinder$$Lambda$lambda$createInstance$14$14, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XPathFactoryFinder$$Lambda$lambda$createInstance$14$14);
	});
	return class$;
}
$Class* XPathFactoryFinder$$Lambda$lambda$createInstance$14$14::class$ = nullptr;

class XPathFactoryFinder$$Lambda$lambda$createInstance$15$15 : public $Supplier {
	$class(XPathFactoryFinder$$Lambda$lambda$createInstance$15$15, $NO_CLASS_INIT, $Supplier)
public:
	void init$($String* className, $Class* clazz) {
		$set(this, className, className);
		this->clazz = clazz;
	}
	virtual $Object* get() override {
		return $of(XPathFactoryFinder::lambda$createInstance$15(className, clazz));
	}
	$String* className = nullptr;
	$Class* clazz = nullptr;
};
$Class* XPathFactoryFinder$$Lambda$lambda$createInstance$15$15::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"className", "Ljava/lang/String;", nullptr, $PUBLIC, $field(XPathFactoryFinder$$Lambda$lambda$createInstance$15$15, className)},
		{"clazz", "Ljava/lang/Class;", nullptr, $PUBLIC, $field(XPathFactoryFinder$$Lambda$lambda$createInstance$15$15, clazz)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Ljava/lang/Class;)V", nullptr, $PUBLIC, $method(XPathFactoryFinder$$Lambda$lambda$createInstance$15$15, init$, void, $String*, $Class*)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(XPathFactoryFinder$$Lambda$lambda$createInstance$15$15, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.xml.xpath.XPathFactoryFinder$$Lambda$lambda$createInstance$15$15",
		"java.lang.Object",
		"java.util.function.Supplier",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(XPathFactoryFinder$$Lambda$lambda$createInstance$15$15, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XPathFactoryFinder$$Lambda$lambda$createInstance$15$15);
	});
	return class$;
}
$Class* XPathFactoryFinder$$Lambda$lambda$createInstance$15$15::class$ = nullptr;

class XPathFactoryFinder$$Lambda$lambda$createInstance$16$16 : public $Supplier {
	$class(XPathFactoryFinder$$Lambda$lambda$createInstance$16$16, $NO_CLASS_INIT, $Supplier)
public:
	void init$($Class* clazz) {
		this->clazz = clazz;
	}
	virtual $Object* get() override {
		return $of(XPathFactoryFinder::lambda$createInstance$16(clazz));
	}
	$Class* clazz = nullptr;
};
$Class* XPathFactoryFinder$$Lambda$lambda$createInstance$16$16::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"clazz", "Ljava/lang/Class;", nullptr, $PUBLIC, $field(XPathFactoryFinder$$Lambda$lambda$createInstance$16$16, clazz)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Class;)V", nullptr, $PUBLIC, $method(XPathFactoryFinder$$Lambda$lambda$createInstance$16$16, init$, void, $Class*)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(XPathFactoryFinder$$Lambda$lambda$createInstance$16$16, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.xml.xpath.XPathFactoryFinder$$Lambda$lambda$createInstance$16$16",
		"java.lang.Object",
		"java.util.function.Supplier",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(XPathFactoryFinder$$Lambda$lambda$createInstance$16$16, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XPathFactoryFinder$$Lambda$lambda$createInstance$16$16);
	});
	return class$;
}
$Class* XPathFactoryFinder$$Lambda$lambda$createInstance$16$16::class$ = nullptr;

bool XPathFactoryFinder::$assertionsDisabled = false;
$String* XPathFactoryFinder::DEFAULT_PACKAGE = nullptr;
bool XPathFactoryFinder::debug = false;
$Properties* XPathFactoryFinder::cacheProps = nullptr;
$volatile(bool) XPathFactoryFinder::firstTime = false;
$Class* XPathFactoryFinder::SERVICE_CLASS = nullptr;

void XPathFactoryFinder::debugPrintln($Supplier* msgGen) {
	$init(XPathFactoryFinder);
	$useLocalObjectStack();
	if (XPathFactoryFinder::debug) {
		$nc($System::err)->println($$str({"JAXP: "_s, $$cast($String, $nc(msgGen)->get())}));
	}
}

void XPathFactoryFinder::init$($ClassLoader* loader) {
	$set(this, classLoader, loader);
	if (XPathFactoryFinder::debug) {
		debugDisplayClassLoader();
	}
}

void XPathFactoryFinder::debugDisplayClassLoader() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	try {
		if (this->classLoader == $SecuritySupport::getContextClassLoader()) {
			debugPrintln($$new(XPathFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$0, this));
			return;
		}
	} catch ($Throwable& unused) {
	}
	if (this->classLoader == $ClassLoader::getSystemClassLoader()) {
		debugPrintln($$new(XPathFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$1$1, this));
		return;
	}
	debugPrintln($$new(XPathFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$2$2, this));
}

$XPathFactory* XPathFactoryFinder::newFactory($String* uri) {
	$useLocalObjectStack();
	if (uri == nullptr) {
		$throwNew($NullPointerException);
	}
	$var($XPathFactory, f, _newFactory(uri));
	if (f != nullptr) {
		debugPrintln($$new(XPathFactoryFinder$$Lambda$lambda$newFactory$3$3, f, uri));
	} else {
		debugPrintln($$new(XPathFactoryFinder$$Lambda$lambda$newFactory$4$4, uri));
	}
	return f;
}

$XPathFactory* XPathFactoryFinder::_newFactory($String* uri) {
	$useLocalObjectStack();
	$var($XPathFactory, xpathFactory, nullptr);
	$var($String, propertyName, $str({$(XPathFactoryFinder::SERVICE_CLASS->getName()), ":"_s, uri}));
	try {
		debugPrintln($$new(XPathFactoryFinder$$Lambda$lambda$_newFactory$5$5, propertyName));
		$var($String, r, $SecuritySupport::getSystemProperty(propertyName));
		if (r != nullptr) {
			debugPrintln($$new(XPathFactoryFinder$$Lambda$lambda$_newFactory$6$6, r));
			$assign(xpathFactory, createInstance(r));
			if (xpathFactory != nullptr) {
				return xpathFactory;
			}
		} else {
			debugPrintln($$new(XPathFactoryFinder$$Lambda$lambda$_newFactory$7$7));
		}
	} catch ($Throwable& t) {
		if (XPathFactoryFinder::debug) {
			debugPrintln($$new(XPathFactoryFinder$$Lambda$lambda$_newFactory$8$8, propertyName));
			t->printStackTrace();
		}
	}
	$var($String, javah, $SecuritySupport::getSystemProperty("java.home"_s));
	$init($File);
	$var($String, configFile, $str({javah, $File::separator, "conf"_s, $File::separator, "jaxp.properties"_s}));
	try {
		if (XPathFactoryFinder::firstTime) {
			$synchronized(XPathFactoryFinder::cacheProps) {
				if (XPathFactoryFinder::firstTime) {
					$var($File, f, $new($File, configFile));
					XPathFactoryFinder::firstTime = false;
					if ($SecuritySupport::doesFileExist(f)) {
						debugPrintln($$new(XPathFactoryFinder$$Lambda$lambda$_newFactory$9$9, f));
						XPathFactoryFinder::cacheProps->load($($SecuritySupport::getFileInputStream(f)));
					}
				}
			}
		}
		$var($String, factoryClassName, XPathFactoryFinder::cacheProps->getProperty(propertyName));
		debugPrintln($$new(XPathFactoryFinder$$Lambda$lambda$_newFactory$10$10, factoryClassName));
		if (factoryClassName != nullptr) {
			$assign(xpathFactory, createInstance(factoryClassName));
			if (xpathFactory != nullptr) {
				return xpathFactory;
			}
		}
	} catch ($Exception& ex) {
		if (XPathFactoryFinder::debug) {
			ex->printStackTrace();
		}
	}
	if (!XPathFactoryFinder::$assertionsDisabled && !(xpathFactory == nullptr)) {
		$throwNew($AssertionError);
	}
	$assign(xpathFactory, findServiceProvider(uri));
	if (xpathFactory != nullptr) {
		return xpathFactory;
	}
	$init($XPathFactory);
	if ($nc(uri)->equals($XPathFactory::DEFAULT_OBJECT_MODEL_URI)) {
		debugPrintln($$new(XPathFactoryFinder$$Lambda$lambda$_newFactory$11$11));
		return $new($XPathFactoryImpl);
	}
	debugPrintln($$new(XPathFactoryFinder$$Lambda$lambda$_newFactory$12$12));
	return nullptr;
}

$Class* XPathFactoryFinder::createClass($String* className) {
	$beforeCallerSensitive();
	$Class* clazz = nullptr;
	bool internal = false;
	if ($System::getSecurityManager() != nullptr) {
		if (className != nullptr && className->startsWith(XPathFactoryFinder::DEFAULT_PACKAGE)) {
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
		if (XPathFactoryFinder::debug) {
			t->printStackTrace();
		}
		return nullptr;
	}
	return clazz;
}

$XPathFactory* XPathFactoryFinder::createInstance($String* className) {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($XPathFactory, xPathFactory, nullptr);
	debugPrintln($$new(XPathFactoryFinder$$Lambda$lambda$createInstance$13$13, className));
	$Class* clazz = createClass(className);
	if (clazz == nullptr) {
		debugPrintln($$new(XPathFactoryFinder$$Lambda$lambda$createInstance$14$14, className));
		return nullptr;
	}
	debugPrintln($$new(XPathFactoryFinder$$Lambda$lambda$createInstance$15$15, className, clazz));
	try {
		$assign(xPathFactory, $cast($XPathFactory, $$nc($nc(clazz)->getConstructor($$new($ClassArray, 0)))->newInstance($$new($ObjectArray, 0))));
	} catch ($ClassCastException& ex) {
		debugPrintln($$new(XPathFactoryFinder$$Lambda$lambda$createInstance$16$16, clazz));
		if (XPathFactoryFinder::debug) {
			ex->printStackTrace();
		}
		return nullptr;
	} catch ($IllegalAccessException& ex) {
		debugPrintln($$new(XPathFactoryFinder$$Lambda$lambda$createInstance$16$16, clazz));
		if (XPathFactoryFinder::debug) {
			ex->printStackTrace();
		}
		return nullptr;
	} catch ($IllegalArgumentException& ex) {
		debugPrintln($$new(XPathFactoryFinder$$Lambda$lambda$createInstance$16$16, clazz));
		if (XPathFactoryFinder::debug) {
			ex->printStackTrace();
		}
		return nullptr;
	} catch ($InstantiationException& ex) {
		debugPrintln($$new(XPathFactoryFinder$$Lambda$lambda$createInstance$16$16, clazz));
		if (XPathFactoryFinder::debug) {
			ex->printStackTrace();
		}
		return nullptr;
	} catch ($InvocationTargetException& ex) {
		debugPrintln($$new(XPathFactoryFinder$$Lambda$lambda$createInstance$16$16, clazz));
		if (XPathFactoryFinder::debug) {
			ex->printStackTrace();
		}
		return nullptr;
	} catch ($NoSuchMethodException& ex) {
		debugPrintln($$new(XPathFactoryFinder$$Lambda$lambda$createInstance$16$16, clazz));
		if (XPathFactoryFinder::debug) {
			ex->printStackTrace();
		}
		return nullptr;
	} catch ($SecurityException& ex) {
		debugPrintln($$new(XPathFactoryFinder$$Lambda$lambda$createInstance$16$16, clazz));
		if (XPathFactoryFinder::debug) {
			ex->printStackTrace();
		}
		return nullptr;
	}
	return xPathFactory;
}

bool XPathFactoryFinder::isObjectModelSupportedBy($XPathFactory* factory, $String* objectModel, $AccessControlContext* acc) {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	return $$sure($Boolean, $AccessController::doPrivileged($$new($XPathFactoryFinder$1, this, factory, objectModel), acc))->booleanValue();
}

$XPathFactory* XPathFactoryFinder::findServiceProvider($String* objectModel) {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	if (!XPathFactoryFinder::$assertionsDisabled && !(objectModel != nullptr)) {
		$throwNew($AssertionError);
	}
	$var($AccessControlContext, acc, $AccessController::getContext());
	try {
		return $cast($XPathFactory, $AccessController::doPrivileged($$new($XPathFactoryFinder$2, this, objectModel, acc)));
	} catch ($ServiceConfigurationError& error) {
		$throwNew($XPathFactoryConfigurationException, error);
	}
	$shouldNotReachHere();
}

$String* XPathFactoryFinder::which($Class* clazz) {
	$init(XPathFactoryFinder);
	return $SecuritySupport::getClassSource(clazz);
}

$String* XPathFactoryFinder::lambda$createInstance$16($Class* clazz) {
	$init(XPathFactoryFinder);
	return $str({"could not instantiate "_s, $($nc(clazz)->getName())});
}

$String* XPathFactoryFinder::lambda$createInstance$15($String* className, $Class* clazz) {
	$init(XPathFactoryFinder);
	return $str({"loaded "_s, className, " from "_s, $(which(clazz))});
}

$String* XPathFactoryFinder::lambda$createInstance$14($String* className) {
	$init(XPathFactoryFinder);
	return $str({"failed to getClass("_s, className, ")"_s});
}

$String* XPathFactoryFinder::lambda$createInstance$13($String* className) {
	$init(XPathFactoryFinder);
	return $str({"createInstance("_s, className, ")"_s});
}

$String* XPathFactoryFinder::lambda$_newFactory$12() {
	$init(XPathFactoryFinder);
	return "all things were tried, but none was found. bailing out."_s;
}

$String* XPathFactoryFinder::lambda$_newFactory$11() {
	$init(XPathFactoryFinder);
	return "attempting to use the platform default W3C DOM XPath lib"_s;
}

$String* XPathFactoryFinder::lambda$_newFactory$10($String* factoryClassName) {
	$init(XPathFactoryFinder);
	return $str({"found "_s, factoryClassName, " in $java.home/conf/jaxp.properties"_s});
}

$String* XPathFactoryFinder::lambda$_newFactory$9($File* f) {
	$init(XPathFactoryFinder);
	return $str({"Read properties file "_s, f});
}

$String* XPathFactoryFinder::lambda$_newFactory$8($String* propertyName) {
	$init(XPathFactoryFinder);
	return $str({"failed to look up system property \'"_s, propertyName, "\'"_s});
}

$String* XPathFactoryFinder::lambda$_newFactory$7() {
	$init(XPathFactoryFinder);
	return "The property is undefined."_s;
}

$String* XPathFactoryFinder::lambda$_newFactory$6($String* r) {
	$init(XPathFactoryFinder);
	return $str({"The value is \'"_s, r, "\'"_s});
}

$String* XPathFactoryFinder::lambda$_newFactory$5($String* propertyName) {
	$init(XPathFactoryFinder);
	return $str({"Looking up system property \'"_s, propertyName, "\'"_s});
}

$String* XPathFactoryFinder::lambda$newFactory$4($String* uri) {
	$init(XPathFactoryFinder);
	return $str({"unable to find a factory for "_s, uri});
}

$String* XPathFactoryFinder::lambda$newFactory$3($XPathFactory* f, $String* uri) {
	$init(XPathFactoryFinder);
	return $str({"factory \'"_s, $($nc($of(f))->getClass()->getName()), "\' was found for "_s, uri});
}

$String* XPathFactoryFinder::lambda$debugDisplayClassLoader$2() {
	return $str({"using class loader ("_s, this->classLoader, ") for search"_s});
}

$String* XPathFactoryFinder::lambda$debugDisplayClassLoader$1() {
	return $str({"using system class loader ("_s, this->classLoader, ") for search"_s});
}

$String* XPathFactoryFinder::lambda$debugDisplayClassLoader$0() {
	return $str({"using thread context class loader ("_s, this->classLoader, ") for search"_s});
}

void XPathFactoryFinder::clinit$($Class* clazz) {
	$assignStatic(XPathFactoryFinder::DEFAULT_PACKAGE, "com.sun.org.apache.xpath.internal"_s);
	XPathFactoryFinder::$assertionsDisabled = !XPathFactoryFinder::class$->desiredAssertionStatus();
	XPathFactoryFinder::debug = false;
	{
		try {
			XPathFactoryFinder::debug = $SecuritySupport::getSystemProperty("jaxp.debug"_s) != nullptr;
		} catch ($Exception& unused) {
			XPathFactoryFinder::debug = false;
		}
	}
	$assignStatic(XPathFactoryFinder::cacheProps, $new($Properties));
	XPathFactoryFinder::firstTime = true;
	$load($XPathFactory);
	$assignStatic(XPathFactoryFinder::SERVICE_CLASS, $XPathFactory::class$);
}

XPathFactoryFinder::XPathFactoryFinder() {
}

$Class* XPathFactoryFinder::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("javax.xml.xpath.XPathFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$0")) {
			return XPathFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$0::load$(name, initialize);
		}
		if (name->equals("javax.xml.xpath.XPathFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$1$1")) {
			return XPathFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$1$1::load$(name, initialize);
		}
		if (name->equals("javax.xml.xpath.XPathFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$2$2")) {
			return XPathFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$2$2::load$(name, initialize);
		}
		if (name->equals("javax.xml.xpath.XPathFactoryFinder$$Lambda$lambda$newFactory$3$3")) {
			return XPathFactoryFinder$$Lambda$lambda$newFactory$3$3::load$(name, initialize);
		}
		if (name->equals("javax.xml.xpath.XPathFactoryFinder$$Lambda$lambda$newFactory$4$4")) {
			return XPathFactoryFinder$$Lambda$lambda$newFactory$4$4::load$(name, initialize);
		}
		if (name->equals("javax.xml.xpath.XPathFactoryFinder$$Lambda$lambda$_newFactory$5$5")) {
			return XPathFactoryFinder$$Lambda$lambda$_newFactory$5$5::load$(name, initialize);
		}
		if (name->equals("javax.xml.xpath.XPathFactoryFinder$$Lambda$lambda$_newFactory$6$6")) {
			return XPathFactoryFinder$$Lambda$lambda$_newFactory$6$6::load$(name, initialize);
		}
		if (name->equals("javax.xml.xpath.XPathFactoryFinder$$Lambda$lambda$_newFactory$7$7")) {
			return XPathFactoryFinder$$Lambda$lambda$_newFactory$7$7::load$(name, initialize);
		}
		if (name->equals("javax.xml.xpath.XPathFactoryFinder$$Lambda$lambda$_newFactory$8$8")) {
			return XPathFactoryFinder$$Lambda$lambda$_newFactory$8$8::load$(name, initialize);
		}
		if (name->equals("javax.xml.xpath.XPathFactoryFinder$$Lambda$lambda$_newFactory$9$9")) {
			return XPathFactoryFinder$$Lambda$lambda$_newFactory$9$9::load$(name, initialize);
		}
		if (name->equals("javax.xml.xpath.XPathFactoryFinder$$Lambda$lambda$_newFactory$10$10")) {
			return XPathFactoryFinder$$Lambda$lambda$_newFactory$10$10::load$(name, initialize);
		}
		if (name->equals("javax.xml.xpath.XPathFactoryFinder$$Lambda$lambda$_newFactory$11$11")) {
			return XPathFactoryFinder$$Lambda$lambda$_newFactory$11$11::load$(name, initialize);
		}
		if (name->equals("javax.xml.xpath.XPathFactoryFinder$$Lambda$lambda$_newFactory$12$12")) {
			return XPathFactoryFinder$$Lambda$lambda$_newFactory$12$12::load$(name, initialize);
		}
		if (name->equals("javax.xml.xpath.XPathFactoryFinder$$Lambda$lambda$createInstance$13$13")) {
			return XPathFactoryFinder$$Lambda$lambda$createInstance$13$13::load$(name, initialize);
		}
		if (name->equals("javax.xml.xpath.XPathFactoryFinder$$Lambda$lambda$createInstance$14$14")) {
			return XPathFactoryFinder$$Lambda$lambda$createInstance$14$14::load$(name, initialize);
		}
		if (name->equals("javax.xml.xpath.XPathFactoryFinder$$Lambda$lambda$createInstance$15$15")) {
			return XPathFactoryFinder$$Lambda$lambda$createInstance$15$15::load$(name, initialize);
		}
		if (name->equals("javax.xml.xpath.XPathFactoryFinder$$Lambda$lambda$createInstance$16$16")) {
			return XPathFactoryFinder$$Lambda$lambda$createInstance$16$16::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(XPathFactoryFinder, $assertionsDisabled)},
		{"DEFAULT_PACKAGE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XPathFactoryFinder, DEFAULT_PACKAGE)},
		{"debug", "Z", nullptr, $PRIVATE | $STATIC, $staticField(XPathFactoryFinder, debug)},
		{"cacheProps", "Ljava/util/Properties;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XPathFactoryFinder, cacheProps)},
		{"firstTime", "Z", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(XPathFactoryFinder, firstTime)},
		{"classLoader", "Ljava/lang/ClassLoader;", nullptr, $PRIVATE | $FINAL, $field(XPathFactoryFinder, classLoader)},
		{"SERVICE_CLASS", "Ljava/lang/Class;", "Ljava/lang/Class<Ljavax/xml/xpath/XPathFactory;>;", $PRIVATE | $STATIC | $FINAL, $staticField(XPathFactoryFinder, SERVICE_CLASS)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/ClassLoader;)V", nullptr, $PUBLIC, $method(XPathFactoryFinder, init$, void, $ClassLoader*)},
		{"_newFactory", "(Ljava/lang/String;)Ljavax/xml/xpath/XPathFactory;", nullptr, $PRIVATE, $method(XPathFactoryFinder, _newFactory, $XPathFactory*, $String*), "javax.xml.xpath.XPathFactoryConfigurationException"},
		{"createClass", "(Ljava/lang/String;)Ljava/lang/Class;", "(Ljava/lang/String;)Ljava/lang/Class<*>;", $PRIVATE, $method(XPathFactoryFinder, createClass, $Class*, $String*)},
		{"createInstance", "(Ljava/lang/String;)Ljavax/xml/xpath/XPathFactory;", nullptr, 0, $virtualMethod(XPathFactoryFinder, createInstance, $XPathFactory*, $String*), "javax.xml.xpath.XPathFactoryConfigurationException"},
		{"debugDisplayClassLoader", "()V", nullptr, $PRIVATE, $method(XPathFactoryFinder, debugDisplayClassLoader, void)},
		{"debugPrintln", "(Ljava/util/function/Supplier;)V", "(Ljava/util/function/Supplier<Ljava/lang/String;>;)V", $PRIVATE | $STATIC, $staticMethod(XPathFactoryFinder, debugPrintln, void, $Supplier*)},
		{"findServiceProvider", "(Ljava/lang/String;)Ljavax/xml/xpath/XPathFactory;", nullptr, $PRIVATE, $method(XPathFactoryFinder, findServiceProvider, $XPathFactory*, $String*), "javax.xml.xpath.XPathFactoryConfigurationException"},
		{"isObjectModelSupportedBy", "(Ljavax/xml/xpath/XPathFactory;Ljava/lang/String;Ljava/security/AccessControlContext;)Z", nullptr, $PRIVATE, $method(XPathFactoryFinder, isObjectModelSupportedBy, bool, $XPathFactory*, $String*, $AccessControlContext*)},
		{"lambda$_newFactory$10", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(XPathFactoryFinder, lambda$_newFactory$10, $String*, $String*)},
		{"lambda$_newFactory$11", "()Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(XPathFactoryFinder, lambda$_newFactory$11, $String*)},
		{"lambda$_newFactory$12", "()Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(XPathFactoryFinder, lambda$_newFactory$12, $String*)},
		{"lambda$_newFactory$5", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(XPathFactoryFinder, lambda$_newFactory$5, $String*, $String*)},
		{"lambda$_newFactory$6", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(XPathFactoryFinder, lambda$_newFactory$6, $String*, $String*)},
		{"lambda$_newFactory$7", "()Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(XPathFactoryFinder, lambda$_newFactory$7, $String*)},
		{"lambda$_newFactory$8", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(XPathFactoryFinder, lambda$_newFactory$8, $String*, $String*)},
		{"lambda$_newFactory$9", "(Ljava/io/File;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(XPathFactoryFinder, lambda$_newFactory$9, $String*, $File*)},
		{"lambda$createInstance$13", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(XPathFactoryFinder, lambda$createInstance$13, $String*, $String*)},
		{"lambda$createInstance$14", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(XPathFactoryFinder, lambda$createInstance$14, $String*, $String*)},
		{"lambda$createInstance$15", "(Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(XPathFactoryFinder, lambda$createInstance$15, $String*, $String*, $Class*)},
		{"lambda$createInstance$16", "(Ljava/lang/Class;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(XPathFactoryFinder, lambda$createInstance$16, $String*, $Class*)},
		{"lambda$debugDisplayClassLoader$0", "()Ljava/lang/String;", nullptr, $PRIVATE | $SYNTHETIC, $method(XPathFactoryFinder, lambda$debugDisplayClassLoader$0, $String*)},
		{"lambda$debugDisplayClassLoader$1", "()Ljava/lang/String;", nullptr, $PRIVATE | $SYNTHETIC, $method(XPathFactoryFinder, lambda$debugDisplayClassLoader$1, $String*)},
		{"lambda$debugDisplayClassLoader$2", "()Ljava/lang/String;", nullptr, $PRIVATE | $SYNTHETIC, $method(XPathFactoryFinder, lambda$debugDisplayClassLoader$2, $String*)},
		{"lambda$newFactory$3", "(Ljavax/xml/xpath/XPathFactory;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(XPathFactoryFinder, lambda$newFactory$3, $String*, $XPathFactory*, $String*)},
		{"lambda$newFactory$4", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(XPathFactoryFinder, lambda$newFactory$4, $String*, $String*)},
		{"newFactory", "(Ljava/lang/String;)Ljavax/xml/xpath/XPathFactory;", nullptr, $PUBLIC, $virtualMethod(XPathFactoryFinder, newFactory, $XPathFactory*, $String*), "javax.xml.xpath.XPathFactoryConfigurationException"},
		{"which", "(Ljava/lang/Class;)Ljava/lang/String;", "(Ljava/lang/Class<*>;)Ljava/lang/String;", $PRIVATE | $STATIC, $staticMethod(XPathFactoryFinder, which, $String*, $Class*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.xml.xpath.XPathFactoryFinder$2", nullptr, nullptr, 0},
		{"javax.xml.xpath.XPathFactoryFinder$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.xml.xpath.XPathFactoryFinder",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"javax.xml.xpath.XPathFactoryFinder$2,javax.xml.xpath.XPathFactoryFinder$1"
	};
	$loadClass(XPathFactoryFinder, name, initialize, &classInfo$$, XPathFactoryFinder::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(XPathFactoryFinder);
	});
	return class$;
}

$Class* XPathFactoryFinder::class$ = nullptr;

		} // xpath
	} // xml
} // javax