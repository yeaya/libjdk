#include <jdk/xml/internal/SecuritySupport.h>

#include <java/io/File.h>
#include <java/io/FileInputStream.h>
#include <java/io/FileNotFoundException.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/CharSequence.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/SecurityException.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/net/URL.h>
#include <java/security/AccessController.h>
#include <java/security/CodeSource.h>
#include <java/security/PrivilegedAction.h>
#include <java/security/PrivilegedActionException.h>
#include <java/security/PrivilegedExceptionAction.h>
#include <java/security/ProtectionDomain.h>
#include <java/text/MessageFormat.h>
#include <java/util/Locale.h>
#include <java/util/MissingResourceException.h>
#include <java/util/Properties.h>
#include <java/util/ResourceBundle.h>
#include <jcpp.h>

#undef NEWLINE

using $File = ::java::io::File;
using $FileInputStream = ::java::io::FileInputStream;
using $FileNotFoundException = ::java::io::FileNotFoundException;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityException = ::java::lang::SecurityException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $URL = ::java::net::URL;
using $AccessController = ::java::security::AccessController;
using $CodeSource = ::java::security::CodeSource;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $PrivilegedActionException = ::java::security::PrivilegedActionException;
using $PrivilegedExceptionAction = ::java::security::PrivilegedExceptionAction;
using $ProtectionDomain = ::java::security::ProtectionDomain;
using $MessageFormat = ::java::text::MessageFormat;
using $Locale = ::java::util::Locale;
using $MissingResourceException = ::java::util::MissingResourceException;
using $Properties = ::java::util::Properties;
using $ResourceBundle = ::java::util::ResourceBundle;

namespace jdk {
	namespace xml {
		namespace internal {

class SecuritySupport$$Lambda$lambda$getSystemProperty$0 : public $PrivilegedAction {
	$class(SecuritySupport$$Lambda$lambda$getSystemProperty$0, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$($String* propName) {
		$set(this, propName, propName);
	}
	virtual $Object* run() override {
		 return $of(SecuritySupport::lambda$getSystemProperty$0(propName));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<SecuritySupport$$Lambda$lambda$getSystemProperty$0>());
	}
	$String* propName = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo SecuritySupport$$Lambda$lambda$getSystemProperty$0::fieldInfos[2] = {
	{"propName", "Ljava/lang/String;", nullptr, $PUBLIC, $field(SecuritySupport$$Lambda$lambda$getSystemProperty$0, propName)},
	{}
};
$MethodInfo SecuritySupport$$Lambda$lambda$getSystemProperty$0::methodInfos[3] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(SecuritySupport$$Lambda$lambda$getSystemProperty$0, init$, void, $String*)},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(SecuritySupport$$Lambda$lambda$getSystemProperty$0, run, $Object*)},
	{}
};
$ClassInfo SecuritySupport$$Lambda$lambda$getSystemProperty$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.xml.internal.SecuritySupport$$Lambda$lambda$getSystemProperty$0",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	fieldInfos,
	methodInfos
};
$Class* SecuritySupport$$Lambda$lambda$getSystemProperty$0::load$($String* name, bool initialize) {
	$loadClass(SecuritySupport$$Lambda$lambda$getSystemProperty$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* SecuritySupport$$Lambda$lambda$getSystemProperty$0::class$ = nullptr;

class SecuritySupport$$Lambda$lambda$isDirectory$1$1 : public $PrivilegedAction {
	$class(SecuritySupport$$Lambda$lambda$isDirectory$1$1, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$($File* f) {
		$set(this, f, f);
	}
	virtual $Object* run() override {
		 return $of(SecuritySupport::lambda$isDirectory$1(f));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<SecuritySupport$$Lambda$lambda$isDirectory$1$1>());
	}
	$File* f = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo SecuritySupport$$Lambda$lambda$isDirectory$1$1::fieldInfos[2] = {
	{"f", "Ljava/io/File;", nullptr, $PUBLIC, $field(SecuritySupport$$Lambda$lambda$isDirectory$1$1, f)},
	{}
};
$MethodInfo SecuritySupport$$Lambda$lambda$isDirectory$1$1::methodInfos[3] = {
	{"<init>", "(Ljava/io/File;)V", nullptr, $PUBLIC, $method(SecuritySupport$$Lambda$lambda$isDirectory$1$1, init$, void, $File*)},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(SecuritySupport$$Lambda$lambda$isDirectory$1$1, run, $Object*)},
	{}
};
$ClassInfo SecuritySupport$$Lambda$lambda$isDirectory$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.xml.internal.SecuritySupport$$Lambda$lambda$isDirectory$1$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	fieldInfos,
	methodInfos
};
$Class* SecuritySupport$$Lambda$lambda$isDirectory$1$1::load$($String* name, bool initialize) {
	$loadClass(SecuritySupport$$Lambda$lambda$isDirectory$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* SecuritySupport$$Lambda$lambda$isDirectory$1$1::class$ = nullptr;

class SecuritySupport$$Lambda$lambda$isFileExists$2$2 : public $PrivilegedAction {
	$class(SecuritySupport$$Lambda$lambda$isFileExists$2$2, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$($File* f) {
		$set(this, f, f);
	}
	virtual $Object* run() override {
		 return $of(SecuritySupport::lambda$isFileExists$2(f));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<SecuritySupport$$Lambda$lambda$isFileExists$2$2>());
	}
	$File* f = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo SecuritySupport$$Lambda$lambda$isFileExists$2$2::fieldInfos[2] = {
	{"f", "Ljava/io/File;", nullptr, $PUBLIC, $field(SecuritySupport$$Lambda$lambda$isFileExists$2$2, f)},
	{}
};
$MethodInfo SecuritySupport$$Lambda$lambda$isFileExists$2$2::methodInfos[3] = {
	{"<init>", "(Ljava/io/File;)V", nullptr, $PUBLIC, $method(SecuritySupport$$Lambda$lambda$isFileExists$2$2, init$, void, $File*)},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(SecuritySupport$$Lambda$lambda$isFileExists$2$2, run, $Object*)},
	{}
};
$ClassInfo SecuritySupport$$Lambda$lambda$isFileExists$2$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.xml.internal.SecuritySupport$$Lambda$lambda$isFileExists$2$2",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	fieldInfos,
	methodInfos
};
$Class* SecuritySupport$$Lambda$lambda$isFileExists$2$2::load$($String* name, bool initialize) {
	$loadClass(SecuritySupport$$Lambda$lambda$isFileExists$2$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* SecuritySupport$$Lambda$lambda$isFileExists$2$2::class$ = nullptr;

class SecuritySupport$$Lambda$lambda$getFileInputStream$3$3 : public $PrivilegedExceptionAction {
	$class(SecuritySupport$$Lambda$lambda$getFileInputStream$3$3, $NO_CLASS_INIT, $PrivilegedExceptionAction)
public:
	void init$($File* file) {
		$set(this, file, file);
	}
	virtual $Object* run() override {
		 return $of(SecuritySupport::lambda$getFileInputStream$3(file));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<SecuritySupport$$Lambda$lambda$getFileInputStream$3$3>());
	}
	$File* file = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo SecuritySupport$$Lambda$lambda$getFileInputStream$3$3::fieldInfos[2] = {
	{"file", "Ljava/io/File;", nullptr, $PUBLIC, $field(SecuritySupport$$Lambda$lambda$getFileInputStream$3$3, file)},
	{}
};
$MethodInfo SecuritySupport$$Lambda$lambda$getFileInputStream$3$3::methodInfos[3] = {
	{"<init>", "(Ljava/io/File;)V", nullptr, $PUBLIC, $method(SecuritySupport$$Lambda$lambda$getFileInputStream$3$3, init$, void, $File*)},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(SecuritySupport$$Lambda$lambda$getFileInputStream$3$3, run, $Object*)},
	{}
};
$ClassInfo SecuritySupport$$Lambda$lambda$getFileInputStream$3$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.xml.internal.SecuritySupport$$Lambda$lambda$getFileInputStream$3$3",
	"java.lang.Object",
	"java.security.PrivilegedExceptionAction",
	fieldInfos,
	methodInfos
};
$Class* SecuritySupport$$Lambda$lambda$getFileInputStream$3$3::load$($String* name, bool initialize) {
	$loadClass(SecuritySupport$$Lambda$lambda$getFileInputStream$3$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* SecuritySupport$$Lambda$lambda$getFileInputStream$3$3::class$ = nullptr;

class SecuritySupport$$Lambda$lambda$getResourceAsStream$4$4 : public $PrivilegedAction {
	$class(SecuritySupport$$Lambda$lambda$getResourceAsStream$4$4, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$($String* name) {
		$set(this, name, name);
	}
	virtual $Object* run() override {
		 return $of(SecuritySupport::lambda$getResourceAsStream$4(name));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<SecuritySupport$$Lambda$lambda$getResourceAsStream$4$4>());
	}
	$String* name = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo SecuritySupport$$Lambda$lambda$getResourceAsStream$4$4::fieldInfos[2] = {
	{"name", "Ljava/lang/String;", nullptr, $PUBLIC, $field(SecuritySupport$$Lambda$lambda$getResourceAsStream$4$4, name)},
	{}
};
$MethodInfo SecuritySupport$$Lambda$lambda$getResourceAsStream$4$4::methodInfos[3] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(SecuritySupport$$Lambda$lambda$getResourceAsStream$4$4, init$, void, $String*)},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(SecuritySupport$$Lambda$lambda$getResourceAsStream$4$4, run, $Object*)},
	{}
};
$ClassInfo SecuritySupport$$Lambda$lambda$getResourceAsStream$4$4::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.xml.internal.SecuritySupport$$Lambda$lambda$getResourceAsStream$4$4",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	fieldInfos,
	methodInfos
};
$Class* SecuritySupport$$Lambda$lambda$getResourceAsStream$4$4::load$($String* name, bool initialize) {
	$loadClass(SecuritySupport$$Lambda$lambda$getResourceAsStream$4$4, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* SecuritySupport$$Lambda$lambda$getResourceAsStream$4$4::class$ = nullptr;

class SecuritySupport$$Lambda$lambda$getResourceBundle$5$5 : public $PrivilegedAction {
	$class(SecuritySupport$$Lambda$lambda$getResourceBundle$5$5, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$($String* bundle, $Locale* locale) {
		$set(this, bundle, bundle);
		$set(this, locale, locale);
	}
	virtual $Object* run() override {
		 return $of(SecuritySupport::lambda$getResourceBundle$5(bundle, locale));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<SecuritySupport$$Lambda$lambda$getResourceBundle$5$5>());
	}
	$String* bundle = nullptr;
	$Locale* locale = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo SecuritySupport$$Lambda$lambda$getResourceBundle$5$5::fieldInfos[3] = {
	{"bundle", "Ljava/lang/String;", nullptr, $PUBLIC, $field(SecuritySupport$$Lambda$lambda$getResourceBundle$5$5, bundle)},
	{"locale", "Ljava/util/Locale;", nullptr, $PUBLIC, $field(SecuritySupport$$Lambda$lambda$getResourceBundle$5$5, locale)},
	{}
};
$MethodInfo SecuritySupport$$Lambda$lambda$getResourceBundle$5$5::methodInfos[3] = {
	{"<init>", "(Ljava/lang/String;Ljava/util/Locale;)V", nullptr, $PUBLIC, $method(SecuritySupport$$Lambda$lambda$getResourceBundle$5$5, init$, void, $String*, $Locale*)},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(SecuritySupport$$Lambda$lambda$getResourceBundle$5$5, run, $Object*)},
	{}
};
$ClassInfo SecuritySupport$$Lambda$lambda$getResourceBundle$5$5::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.xml.internal.SecuritySupport$$Lambda$lambda$getResourceBundle$5$5",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	fieldInfos,
	methodInfos
};
$Class* SecuritySupport$$Lambda$lambda$getResourceBundle$5$5::load$($String* name, bool initialize) {
	$loadClass(SecuritySupport$$Lambda$lambda$getResourceBundle$5$5, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* SecuritySupport$$Lambda$lambda$getResourceBundle$5$5::class$ = nullptr;

class SecuritySupport$$Lambda$lambda$getLastModified$7$6 : public $PrivilegedAction {
	$class(SecuritySupport$$Lambda$lambda$getLastModified$7$6, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$($File* f) {
		$set(this, f, f);
	}
	virtual $Object* run() override {
		 return $of(SecuritySupport::lambda$getLastModified$7(f));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<SecuritySupport$$Lambda$lambda$getLastModified$7$6>());
	}
	$File* f = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo SecuritySupport$$Lambda$lambda$getLastModified$7$6::fieldInfos[2] = {
	{"f", "Ljava/io/File;", nullptr, $PUBLIC, $field(SecuritySupport$$Lambda$lambda$getLastModified$7$6, f)},
	{}
};
$MethodInfo SecuritySupport$$Lambda$lambda$getLastModified$7$6::methodInfos[3] = {
	{"<init>", "(Ljava/io/File;)V", nullptr, $PUBLIC, $method(SecuritySupport$$Lambda$lambda$getLastModified$7$6, init$, void, $File*)},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(SecuritySupport$$Lambda$lambda$getLastModified$7$6, run, $Object*)},
	{}
};
$ClassInfo SecuritySupport$$Lambda$lambda$getLastModified$7$6::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.xml.internal.SecuritySupport$$Lambda$lambda$getLastModified$7$6",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	fieldInfos,
	methodInfos
};
$Class* SecuritySupport$$Lambda$lambda$getLastModified$7$6::load$($String* name, bool initialize) {
	$loadClass(SecuritySupport$$Lambda$lambda$getLastModified$7$6, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* SecuritySupport$$Lambda$lambda$getLastModified$7$6::class$ = nullptr;

class SecuritySupport$$Lambda$lambda$getContextClassLoader$8$7 : public $PrivilegedAction {
	$class(SecuritySupport$$Lambda$lambda$getContextClassLoader$8$7, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$() {
	}
	virtual $Object* run() override {
		 return $of(SecuritySupport::lambda$getContextClassLoader$8());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<SecuritySupport$$Lambda$lambda$getContextClassLoader$8$7>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo SecuritySupport$$Lambda$lambda$getContextClassLoader$8$7::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(SecuritySupport$$Lambda$lambda$getContextClassLoader$8$7, init$, void)},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(SecuritySupport$$Lambda$lambda$getContextClassLoader$8$7, run, $Object*)},
	{}
};
$ClassInfo SecuritySupport$$Lambda$lambda$getContextClassLoader$8$7::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.xml.internal.SecuritySupport$$Lambda$lambda$getContextClassLoader$8$7",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	methodInfos
};
$Class* SecuritySupport$$Lambda$lambda$getContextClassLoader$8$7::load$($String* name, bool initialize) {
	$loadClass(SecuritySupport$$Lambda$lambda$getContextClassLoader$8$7, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* SecuritySupport$$Lambda$lambda$getContextClassLoader$8$7::class$ = nullptr;

class SecuritySupport$$Lambda$lambda$getSystemClassLoader$9$8 : public $PrivilegedAction {
	$class(SecuritySupport$$Lambda$lambda$getSystemClassLoader$9$8, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$() {
	}
	virtual $Object* run() override {
		 return $of(SecuritySupport::lambda$getSystemClassLoader$9());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<SecuritySupport$$Lambda$lambda$getSystemClassLoader$9$8>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo SecuritySupport$$Lambda$lambda$getSystemClassLoader$9$8::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(SecuritySupport$$Lambda$lambda$getSystemClassLoader$9$8, init$, void)},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(SecuritySupport$$Lambda$lambda$getSystemClassLoader$9$8, run, $Object*)},
	{}
};
$ClassInfo SecuritySupport$$Lambda$lambda$getSystemClassLoader$9$8::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.xml.internal.SecuritySupport$$Lambda$lambda$getSystemClassLoader$9$8",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	methodInfos
};
$Class* SecuritySupport$$Lambda$lambda$getSystemClassLoader$9$8::load$($String* name, bool initialize) {
	$loadClass(SecuritySupport$$Lambda$lambda$getSystemClassLoader$9$8, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* SecuritySupport$$Lambda$lambda$getSystemClassLoader$9$8::class$ = nullptr;

class SecuritySupport$$Lambda$lambda$getParentClassLoader$10$9 : public $PrivilegedAction {
	$class(SecuritySupport$$Lambda$lambda$getParentClassLoader$10$9, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$($ClassLoader* cl) {
		$set(this, cl, cl);
	}
	virtual $Object* run() override {
		 return $of(SecuritySupport::lambda$getParentClassLoader$10(cl));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<SecuritySupport$$Lambda$lambda$getParentClassLoader$10$9>());
	}
	$ClassLoader* cl = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo SecuritySupport$$Lambda$lambda$getParentClassLoader$10$9::fieldInfos[2] = {
	{"cl", "Ljava/lang/ClassLoader;", nullptr, $PUBLIC, $field(SecuritySupport$$Lambda$lambda$getParentClassLoader$10$9, cl)},
	{}
};
$MethodInfo SecuritySupport$$Lambda$lambda$getParentClassLoader$10$9::methodInfos[3] = {
	{"<init>", "(Ljava/lang/ClassLoader;)V", nullptr, $PUBLIC, $method(SecuritySupport$$Lambda$lambda$getParentClassLoader$10$9, init$, void, $ClassLoader*)},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(SecuritySupport$$Lambda$lambda$getParentClassLoader$10$9, run, $Object*)},
	{}
};
$ClassInfo SecuritySupport$$Lambda$lambda$getParentClassLoader$10$9::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.xml.internal.SecuritySupport$$Lambda$lambda$getParentClassLoader$10$9",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	fieldInfos,
	methodInfos
};
$Class* SecuritySupport$$Lambda$lambda$getParentClassLoader$10$9::load$($String* name, bool initialize) {
	$loadClass(SecuritySupport$$Lambda$lambda$getParentClassLoader$10$9, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* SecuritySupport$$Lambda$lambda$getParentClassLoader$10$9::class$ = nullptr;

class SecuritySupport$$Lambda$lambda$getClassSource$11$10 : public $PrivilegedAction {
	$class(SecuritySupport$$Lambda$lambda$getClassSource$11$10, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$($Class* cls) {
		this->cls = cls;
	}
	virtual $Object* run() override {
		 return $of(SecuritySupport::lambda$getClassSource$11(cls));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<SecuritySupport$$Lambda$lambda$getClassSource$11$10>());
	}
	$Class* cls = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo SecuritySupport$$Lambda$lambda$getClassSource$11$10::fieldInfos[2] = {
	{"cls", "Ljava/lang/Class;", nullptr, $PUBLIC, $field(SecuritySupport$$Lambda$lambda$getClassSource$11$10, cls)},
	{}
};
$MethodInfo SecuritySupport$$Lambda$lambda$getClassSource$11$10::methodInfos[3] = {
	{"<init>", "(Ljava/lang/Class;)V", nullptr, $PUBLIC, $method(SecuritySupport$$Lambda$lambda$getClassSource$11$10, init$, void, $Class*)},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(SecuritySupport$$Lambda$lambda$getClassSource$11$10, run, $Object*)},
	{}
};
$ClassInfo SecuritySupport$$Lambda$lambda$getClassSource$11$10::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.xml.internal.SecuritySupport$$Lambda$lambda$getClassSource$11$10",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	fieldInfos,
	methodInfos
};
$Class* SecuritySupport$$Lambda$lambda$getClassSource$11$10::load$($String* name, bool initialize) {
	$loadClass(SecuritySupport$$Lambda$lambda$getClassSource$11$10, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* SecuritySupport$$Lambda$lambda$getClassSource$11$10::class$ = nullptr;

class SecuritySupport$$Lambda$lambda$getClassLoader$12$11 : public $PrivilegedAction {
	$class(SecuritySupport$$Lambda$lambda$getClassLoader$12$11, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$() {
	}
	virtual $Object* run() override {
		 return $of(SecuritySupport::lambda$getClassLoader$12());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<SecuritySupport$$Lambda$lambda$getClassLoader$12$11>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo SecuritySupport$$Lambda$lambda$getClassLoader$12$11::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(SecuritySupport$$Lambda$lambda$getClassLoader$12$11, init$, void)},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(SecuritySupport$$Lambda$lambda$getClassLoader$12$11, run, $Object*)},
	{}
};
$ClassInfo SecuritySupport$$Lambda$lambda$getClassLoader$12$11::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.xml.internal.SecuritySupport$$Lambda$lambda$getClassLoader$12$11",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	methodInfos
};
$Class* SecuritySupport$$Lambda$lambda$getClassLoader$12$11::load$($String* name, bool initialize) {
	$loadClass(SecuritySupport$$Lambda$lambda$getClassLoader$12$11, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* SecuritySupport$$Lambda$lambda$getClassLoader$12$11::class$ = nullptr;

class SecuritySupport$$Lambda$lambda$getResourceAsStream$13$12 : public $PrivilegedAction {
	$class(SecuritySupport$$Lambda$lambda$getResourceAsStream$13$12, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$($ClassLoader* cl, $String* name) {
		$set(this, cl, cl);
		$set(this, name, name);
	}
	virtual $Object* run() override {
		 return $of(SecuritySupport::lambda$getResourceAsStream$13(cl, name));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<SecuritySupport$$Lambda$lambda$getResourceAsStream$13$12>());
	}
	$ClassLoader* cl = nullptr;
	$String* name = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo SecuritySupport$$Lambda$lambda$getResourceAsStream$13$12::fieldInfos[3] = {
	{"cl", "Ljava/lang/ClassLoader;", nullptr, $PUBLIC, $field(SecuritySupport$$Lambda$lambda$getResourceAsStream$13$12, cl)},
	{"name", "Ljava/lang/String;", nullptr, $PUBLIC, $field(SecuritySupport$$Lambda$lambda$getResourceAsStream$13$12, name)},
	{}
};
$MethodInfo SecuritySupport$$Lambda$lambda$getResourceAsStream$13$12::methodInfos[3] = {
	{"<init>", "(Ljava/lang/ClassLoader;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(SecuritySupport$$Lambda$lambda$getResourceAsStream$13$12, init$, void, $ClassLoader*, $String*)},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(SecuritySupport$$Lambda$lambda$getResourceAsStream$13$12, run, $Object*)},
	{}
};
$ClassInfo SecuritySupport$$Lambda$lambda$getResourceAsStream$13$12::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.xml.internal.SecuritySupport$$Lambda$lambda$getResourceAsStream$13$12",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	fieldInfos,
	methodInfos
};
$Class* SecuritySupport$$Lambda$lambda$getResourceAsStream$13$12::load$($String* name, bool initialize) {
	$loadClass(SecuritySupport$$Lambda$lambda$getResourceAsStream$13$12, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* SecuritySupport$$Lambda$lambda$getResourceAsStream$13$12::class$ = nullptr;

$FieldInfo _SecuritySupport_FieldInfo_[] = {
	{"NEWLINE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SecuritySupport, NEWLINE)},
	{"cacheProps", "Ljava/util/Properties;", nullptr, $STATIC | $FINAL, $staticField(SecuritySupport, cacheProps)},
	{"firstTime", "Z", nullptr, $STATIC | $VOLATILE, $staticField(SecuritySupport, firstTime)},
	{}
};

$MethodInfo _SecuritySupport_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(SecuritySupport, init$, void)},
	{"checkAccess", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(SecuritySupport, checkAccess, $String*, $String*, $String*, $String*), "java.io.IOException"},
	{"doesFileExist", "(Ljava/io/File;)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(SecuritySupport, doesFileExist, bool, $File*)},
	{"getClassLoader", "()Ljava/lang/ClassLoader;", nullptr, $PUBLIC | $STATIC, $staticMethod(SecuritySupport, getClassLoader, $ClassLoader*), "java.lang.SecurityException"},
	{"getClassSource", "(Ljava/lang/Class;)Ljava/lang/String;", "(Ljava/lang/Class<*>;)Ljava/lang/String;", $PUBLIC | $STATIC, $staticMethod(SecuritySupport, getClassSource, $String*, $Class*)},
	{"getContextClassLoader", "()Ljava/lang/ClassLoader;", nullptr, $PUBLIC | $STATIC, $staticMethod(SecuritySupport, getContextClassLoader, $ClassLoader*)},
	{"getErrorMessage", "(Ljava/util/Locale;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(SecuritySupport, getErrorMessage, $String*, $Locale*, $String*, $String*, $ObjectArray*)},
	{"getFileInputStream", "(Ljava/io/File;)Ljava/io/FileInputStream;", nullptr, $PUBLIC | $STATIC, $staticMethod(SecuritySupport, getFileInputStream, $FileInputStream*, $File*), "java.io.FileNotFoundException"},
	{"getJAXPSystemProperty", "(Ljava/lang/Class;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/lang/Class<TT;>;Ljava/lang/String;Ljava/lang/String;)TT;", $PUBLIC | $STATIC, $staticMethod(SecuritySupport, getJAXPSystemProperty, $Object*, $Class*, $String*, $String*)},
	{"getJAXPSystemProperty", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(SecuritySupport, getJAXPSystemProperty, $String*, $String*)},
	{"getLastModified", "(Ljava/io/File;)J", nullptr, $STATIC, $staticMethod(SecuritySupport, getLastModified, int64_t, $File*)},
	{"getParentClassLoader", "(Ljava/lang/ClassLoader;)Ljava/lang/ClassLoader;", nullptr, $PUBLIC | $STATIC, $staticMethod(SecuritySupport, getParentClassLoader, $ClassLoader*, $ClassLoader*)},
	{"getResourceAsStream", "(Ljava/lang/String;)Ljava/io/InputStream;", nullptr, $PUBLIC | $STATIC, $staticMethod(SecuritySupport, getResourceAsStream, $InputStream*, $String*)},
	{"getResourceAsStream", "(Ljava/lang/ClassLoader;Ljava/lang/String;)Ljava/io/InputStream;", nullptr, $PUBLIC | $STATIC, $staticMethod(SecuritySupport, getResourceAsStream, $InputStream*, $ClassLoader*, $String*)},
	{"getResourceBundle", "(Ljava/lang/String;)Ljava/util/ResourceBundle;", nullptr, $PUBLIC | $STATIC, $staticMethod(SecuritySupport, getResourceBundle, $ResourceBundle*, $String*)},
	{"getResourceBundle", "(Ljava/lang/String;Ljava/util/Locale;)Ljava/util/ResourceBundle;", nullptr, $PUBLIC | $STATIC, $staticMethod(SecuritySupport, getResourceBundle, $ResourceBundle*, $String*, $Locale*)},
	{"getSystemClassLoader", "()Ljava/lang/ClassLoader;", nullptr, $PUBLIC | $STATIC, $staticMethod(SecuritySupport, getSystemClassLoader, $ClassLoader*)},
	{"getSystemProperty", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(SecuritySupport, getSystemProperty, $String*, $String*)},
	{"getSystemProperty", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(SecuritySupport, getSystemProperty, $String*, $String*, $String*)},
	{"getSystemProperty", "(Ljava/lang/Class;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/lang/Class<TT;>;Ljava/lang/String;Ljava/lang/String;)TT;", $PUBLIC | $STATIC, $staticMethod(SecuritySupport, getSystemProperty, $Object*, $Class*, $String*, $String*)},
	{"isDirectory", "(Ljava/io/File;)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(SecuritySupport, isDirectory, bool, $File*)},
	{"isFileExists", "(Ljava/io/File;)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(SecuritySupport, isFileExists, bool, $File*)},
	{"isProtocolAllowed", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(SecuritySupport, isProtocolAllowed, bool, $String*, $String*)},
	{"lambda$getClassLoader$12", "()Ljava/lang/ClassLoader;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(SecuritySupport, lambda$getClassLoader$12, $ClassLoader*)},
	{"lambda$getClassSource$11", "(Ljava/lang/Class;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(SecuritySupport, lambda$getClassSource$11, $String*, $Class*)},
	{"lambda$getContextClassLoader$8", "()Ljava/lang/ClassLoader;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(SecuritySupport, lambda$getContextClassLoader$8, $ClassLoader*)},
	{"lambda$getFileInputStream$3", "(Ljava/io/File;)Ljava/io/FileInputStream;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(SecuritySupport, lambda$getFileInputStream$3, $FileInputStream*, $File*), "java.lang.Exception"},
	{"lambda$getLastModified$7", "(Ljava/io/File;)Ljava/lang/Long;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(SecuritySupport, lambda$getLastModified$7, $Long*, $File*)},
	{"lambda$getParentClassLoader$10", "(Ljava/lang/ClassLoader;)Ljava/lang/ClassLoader;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(SecuritySupport, lambda$getParentClassLoader$10, $ClassLoader*, $ClassLoader*)},
	{"lambda$getResourceAsStream$13", "(Ljava/lang/ClassLoader;Ljava/lang/String;)Ljava/io/InputStream;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(SecuritySupport, lambda$getResourceAsStream$13, $InputStream*, $ClassLoader*, $String*)},
	{"lambda$getResourceAsStream$4", "(Ljava/lang/String;)Ljava/io/InputStream;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(SecuritySupport, lambda$getResourceAsStream$4, $InputStream*, $String*)},
	{"lambda$getResourceBundle$5", "(Ljava/lang/String;Ljava/util/Locale;)Ljava/util/ResourceBundle;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(SecuritySupport, lambda$getResourceBundle$5, $ResourceBundle*, $String*, $Locale*)},
	{"lambda$getSystemClassLoader$9", "()Ljava/lang/ClassLoader;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(SecuritySupport, lambda$getSystemClassLoader$9, $ClassLoader*)},
	{"lambda$getSystemProperty$0", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(SecuritySupport, lambda$getSystemProperty$0, $String*, $String*)},
	{"lambda$isDirectory$1", "(Ljava/io/File;)Ljava/lang/Boolean;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(SecuritySupport, lambda$isDirectory$1, $Boolean*, $File*)},
	{"lambda$isFileExists$2", "(Ljava/io/File;)Ljava/lang/Boolean;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(SecuritySupport, lambda$isFileExists$2, $Boolean*, $File*)},
	{"readJAXPProperty", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(SecuritySupport, readJAXPProperty, $String*, $String*)},
	{"sanitizePath", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(SecuritySupport, sanitizePath, $String*, $String*)},
	{}
};

$ClassInfo _SecuritySupport_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.xml.internal.SecuritySupport",
	"java.lang.Object",
	nullptr,
	_SecuritySupport_FieldInfo_,
	_SecuritySupport_MethodInfo_
};

$Object* allocate$SecuritySupport($Class* clazz) {
	return $of($alloc(SecuritySupport));
}

$String* SecuritySupport::NEWLINE = nullptr;
$Properties* SecuritySupport::cacheProps = nullptr;
$volatile(bool) SecuritySupport::firstTime = false;

void SecuritySupport::init$() {
}

$String* SecuritySupport::getErrorMessage($Locale* locale, $String* bundle, $String* key, $ObjectArray* arguments) {
	$init(SecuritySupport);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($ResourceBundle, rb, nullptr);
	if (locale != nullptr) {
		$assign(rb, $ResourceBundle::getBundle(bundle, locale));
	} else {
		$assign(rb, $ResourceBundle::getBundle(bundle));
	}
	$var($String, msg, $nc(rb)->getString(key));
	if (arguments != nullptr) {
		$assign(msg, $MessageFormat::format(msg, arguments));
	}
	return msg;
}

$String* SecuritySupport::getSystemProperty($String* propName) {
	$init(SecuritySupport);
	$beforeCallerSensitive();
	return $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new(SecuritySupport$$Lambda$lambda$getSystemProperty$0, propName))));
}

$String* SecuritySupport::getSystemProperty($String* propName, $String* defValue) {
	$init(SecuritySupport);
	$var($String, value, getSystemProperty(propName));
	if (value == nullptr) {
		return defValue;
	}
	return value;
}

$Object* SecuritySupport::getSystemProperty($Class* type, $String* propName, $String* defValue) {
	$init(SecuritySupport);
	$useLocalCurrentObjectStackCache();
	$var($String, value, getSystemProperty(propName));
	if (value == nullptr) {
		$assign(value, defValue);
	}
	$load($Integer);
	if ($Integer::class$->isAssignableFrom(type)) {
		return $of($nc(type)->cast($($Integer::valueOf($Integer::parseInt(value)))));
	} else {
		$load($Boolean);
		if ($Boolean::class$->isAssignableFrom(type)) {
			return $of($nc(type)->cast($($Boolean::valueOf($Boolean::parseBoolean(value)))));
		}
	}
	return $of($nc(type)->cast(value));
}

$Object* SecuritySupport::getJAXPSystemProperty($Class* type, $String* propName, $String* defValue) {
	$init(SecuritySupport);
	$useLocalCurrentObjectStackCache();
	$var($String, value, getJAXPSystemProperty(propName));
	if (value == nullptr) {
		$assign(value, defValue);
	}
	$load($Integer);
	if ($Integer::class$->isAssignableFrom(type)) {
		return $of($nc(type)->cast($($Integer::valueOf($Integer::parseInt(value)))));
	} else {
		$load($Boolean);
		if ($Boolean::class$->isAssignableFrom(type)) {
			return $of($nc(type)->cast($($Boolean::valueOf($Boolean::parseBoolean(value)))));
		}
	}
	return $of($nc(type)->cast(value));
}

$String* SecuritySupport::getJAXPSystemProperty($String* propName) {
	$init(SecuritySupport);
	$var($String, value, getSystemProperty(propName));
	if (value == nullptr) {
		$assign(value, readJAXPProperty(propName));
	}
	return value;
}

$String* SecuritySupport::readJAXPProperty($String* propName) {
	$init(SecuritySupport);
	$useLocalCurrentObjectStackCache();
	$var($String, value, nullptr);
	$var($InputStream, is, nullptr);
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				if (SecuritySupport::firstTime) {
					$synchronized(SecuritySupport::cacheProps) {
						if (SecuritySupport::firstTime) {
							$init($File);
							$var($String, configFile, $str({$(getSystemProperty("java.home"_s)), $File::separator, "conf"_s, $File::separator, "jaxp.properties"_s}));
							$var($File, f, $new($File, configFile));
							if (isFileExists(f)) {
								$assign(is, getFileInputStream(f));
								$nc(SecuritySupport::cacheProps)->load(is);
							}
							SecuritySupport::firstTime = false;
						}
					}
				}
				$assign(value, $nc(SecuritySupport::cacheProps)->getProperty(propName));
			} catch ($IOException& ex) {
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			if (is != nullptr) {
				try {
					is->close();
				} catch ($IOException& ex) {
				}
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	return value;
}

bool SecuritySupport::isDirectory($File* f) {
	$init(SecuritySupport);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	return $nc(($cast($Boolean, $($AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new(SecuritySupport$$Lambda$lambda$isDirectory$1$1, f)))))))->booleanValue();
}

bool SecuritySupport::isFileExists($File* f) {
	$init(SecuritySupport);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	return $nc(($cast($Boolean, $($AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new(SecuritySupport$$Lambda$lambda$isFileExists$2$2, f)))))))->booleanValue();
}

$FileInputStream* SecuritySupport::getFileInputStream($File* file) {
	$init(SecuritySupport);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	try {
		return $cast($FileInputStream, $AccessController::doPrivileged(static_cast<$PrivilegedExceptionAction*>($$new(SecuritySupport$$Lambda$lambda$getFileInputStream$3$3, file))));
	} catch ($PrivilegedActionException& e) {
		$throw($cast($FileNotFoundException, $(e->getException())));
	}
	$shouldNotReachHere();
}

$InputStream* SecuritySupport::getResourceAsStream($String* name) {
	$init(SecuritySupport);
	$beforeCallerSensitive();
	return $cast($InputStream, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new(SecuritySupport$$Lambda$lambda$getResourceAsStream$4$4, name))));
}

$ResourceBundle* SecuritySupport::getResourceBundle($String* bundle) {
	$init(SecuritySupport);
	return getResourceBundle(bundle, $($Locale::getDefault()));
}

$ResourceBundle* SecuritySupport::getResourceBundle($String* bundle, $Locale* locale) {
	$init(SecuritySupport);
	$beforeCallerSensitive();
	return $cast($ResourceBundle, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new(SecuritySupport$$Lambda$lambda$getResourceBundle$5$5, bundle, locale))));
}

bool SecuritySupport::doesFileExist($File* f) {
	$init(SecuritySupport);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	return $nc(($cast($Boolean, $($AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new(SecuritySupport$$Lambda$lambda$isFileExists$2$2, f)))))))->booleanValue();
}

int64_t SecuritySupport::getLastModified($File* f) {
	$init(SecuritySupport);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	return $nc(($cast($Long, $($AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new(SecuritySupport$$Lambda$lambda$getLastModified$7$6, f)))))))->longValue();
}

$String* SecuritySupport::sanitizePath($String* uri) {
	$init(SecuritySupport);
	if (uri == nullptr) {
		return ""_s;
	}
	int32_t i = $nc(uri)->lastIndexOf("/"_s);
	if (i > 0) {
		return uri->substring(i + 1, uri->length());
	}
	return ""_s;
}

$String* SecuritySupport::checkAccess($String* systemId, $String* allowedProtocols, $String* accessAny) {
	$init(SecuritySupport);
	$useLocalCurrentObjectStackCache();
	if (systemId == nullptr || (allowedProtocols != nullptr && allowedProtocols->equalsIgnoreCase(accessAny))) {
		return nullptr;
	}
	$var($String, protocol, nullptr);
	if (!$nc(systemId)->contains(":"_s)) {
		$assign(protocol, "file"_s);
	} else {
		$var($URL, url, $new($URL, systemId));
		$assign(protocol, url->getProtocol());
		if ($nc(protocol)->equalsIgnoreCase("jar"_s)) {
			$var($String, path, url->getPath());
			$assign(protocol, $nc(path)->substring(0, path->indexOf(":"_s)));
		} else if (protocol->equalsIgnoreCase("jrt"_s)) {
			$assign(protocol, "file"_s);
		}
	}
	if (isProtocolAllowed(protocol, allowedProtocols)) {
		return nullptr;
	} else {
		return protocol;
	}
}

bool SecuritySupport::isProtocolAllowed($String* protocol, $String* allowedProtocols) {
	$init(SecuritySupport);
	$useLocalCurrentObjectStackCache();
	if (allowedProtocols == nullptr) {
		return false;
	}
	$var($StringArray, temp, $nc(allowedProtocols)->split(","_s));
	{
		$var($StringArray, arr$, temp);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($String, t, arr$->get(i$));
			{
				$assign(t, $nc(t)->trim());
				if (t->equalsIgnoreCase(protocol)) {
					return true;
				}
			}
		}
	}
	return false;
}

$ClassLoader* SecuritySupport::getContextClassLoader() {
	$init(SecuritySupport);
	$beforeCallerSensitive();
	return $cast($ClassLoader, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new(SecuritySupport$$Lambda$lambda$getContextClassLoader$8$7))));
}

$ClassLoader* SecuritySupport::getSystemClassLoader() {
	$init(SecuritySupport);
	$beforeCallerSensitive();
	return $cast($ClassLoader, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new(SecuritySupport$$Lambda$lambda$getSystemClassLoader$9$8))));
}

$ClassLoader* SecuritySupport::getParentClassLoader($ClassLoader* cl) {
	$init(SecuritySupport);
	$beforeCallerSensitive();
	return $cast($ClassLoader, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new(SecuritySupport$$Lambda$lambda$getParentClassLoader$10$9, cl))));
}

$String* SecuritySupport::getClassSource($Class* cls) {
	$init(SecuritySupport);
	$beforeCallerSensitive();
	return $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new(SecuritySupport$$Lambda$lambda$getClassSource$11$10, cls))));
}

$ClassLoader* SecuritySupport::getClassLoader() {
	$init(SecuritySupport);
	$beforeCallerSensitive();
	return $cast($ClassLoader, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new(SecuritySupport$$Lambda$lambda$getClassLoader$12$11))));
}

$InputStream* SecuritySupport::getResourceAsStream($ClassLoader* cl, $String* name) {
	$init(SecuritySupport);
	$beforeCallerSensitive();
	return $cast($InputStream, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new(SecuritySupport$$Lambda$lambda$getResourceAsStream$13$12, cl, name))));
}

$InputStream* SecuritySupport::lambda$getResourceAsStream$13($ClassLoader* cl, $String* name) {
	$init(SecuritySupport);
	$beforeCallerSensitive();
	$var($InputStream, ris, nullptr);
	if (cl == nullptr) {
		$assign(ris, SecuritySupport::class$->getResourceAsStream(name));
	} else {
		$assign(ris, $nc(cl)->getResourceAsStream(name));
	}
	return ris;
}

$ClassLoader* SecuritySupport::lambda$getClassLoader$12() {
	$init(SecuritySupport);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($ClassLoader, cl, $($Thread::currentThread())->getContextClassLoader());
	if (cl == nullptr) {
		$assign(cl, $ClassLoader::getSystemClassLoader());
	}
	return cl;
}

$String* SecuritySupport::lambda$getClassSource$11($Class* cls) {
	$init(SecuritySupport);
	$useLocalCurrentObjectStackCache();
	$var($CodeSource, cs, $nc($($nc(cls)->getProtectionDomain()))->getCodeSource());
	if (cs != nullptr) {
		$var($URL, loc, cs->getLocation());
		return loc != nullptr ? $nc(loc)->toString() : "(no location)"_s;
	} else {
		return "(no code source)"_s;
	}
}

$ClassLoader* SecuritySupport::lambda$getParentClassLoader$10($ClassLoader* cl) {
	$init(SecuritySupport);
	$beforeCallerSensitive();
	$var($ClassLoader, parent, nullptr);
	try {
		$assign(parent, $nc(cl)->getParent());
	} catch ($SecurityException& ex) {
	}
	return (parent == cl) ? ($ClassLoader*)nullptr : parent;
}

$ClassLoader* SecuritySupport::lambda$getSystemClassLoader$9() {
	$init(SecuritySupport);
	$beforeCallerSensitive();
	$var($ClassLoader, cl, nullptr);
	try {
		$assign(cl, $ClassLoader::getSystemClassLoader());
	} catch ($SecurityException& ex) {
	}
	return cl;
}

$ClassLoader* SecuritySupport::lambda$getContextClassLoader$8() {
	$init(SecuritySupport);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($ClassLoader, cl, $($Thread::currentThread())->getContextClassLoader());
	if (cl == nullptr) {
		$assign(cl, $ClassLoader::getSystemClassLoader());
	}
	return cl;
}

$Long* SecuritySupport::lambda$getLastModified$7($File* f) {
	$init(SecuritySupport);
	return $Long::valueOf($nc(f)->lastModified());
}

$ResourceBundle* SecuritySupport::lambda$getResourceBundle$5($String* bundle, $Locale* locale) {
	$init(SecuritySupport);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	try {
		return $ResourceBundle::getBundle(bundle, locale);
	} catch ($MissingResourceException& e) {
		try {
			return $ResourceBundle::getBundle(bundle, $$new($Locale, "en"_s, "US"_s));
		} catch ($MissingResourceException& e2) {
			$throwNew($MissingResourceException, $$str({"Could not load any resource bundle by "_s, bundle}), bundle, ""_s);
		}
	}
	$shouldNotReachHere();
}

$InputStream* SecuritySupport::lambda$getResourceAsStream$4($String* name) {
	$init(SecuritySupport);
	$beforeCallerSensitive();
	return SecuritySupport::class$->getResourceAsStream($$str({"/"_s, name}));
}

$FileInputStream* SecuritySupport::lambda$getFileInputStream$3($File* file) {
	$init(SecuritySupport);
	return $new($FileInputStream, file);
}

$Boolean* SecuritySupport::lambda$isFileExists$2($File* f) {
	$init(SecuritySupport);
	return $Boolean::valueOf($nc(f)->exists());
}

$Boolean* SecuritySupport::lambda$isDirectory$1($File* f) {
	$init(SecuritySupport);
	return $Boolean::valueOf($nc(f)->isDirectory());
}

$String* SecuritySupport::lambda$getSystemProperty$0($String* propName) {
	$init(SecuritySupport);
	return $System::getProperty(propName);
}

void clinit$SecuritySupport($Class* class$) {
	$assignStatic(SecuritySupport::NEWLINE, $System::lineSeparator());
	$assignStatic(SecuritySupport::cacheProps, $new($Properties));
	SecuritySupport::firstTime = true;
}

SecuritySupport::SecuritySupport() {
}

$Class* SecuritySupport::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(SecuritySupport$$Lambda$lambda$getSystemProperty$0::classInfo$.name)) {
			return SecuritySupport$$Lambda$lambda$getSystemProperty$0::load$(name, initialize);
		}
		if (name->equals(SecuritySupport$$Lambda$lambda$isDirectory$1$1::classInfo$.name)) {
			return SecuritySupport$$Lambda$lambda$isDirectory$1$1::load$(name, initialize);
		}
		if (name->equals(SecuritySupport$$Lambda$lambda$isFileExists$2$2::classInfo$.name)) {
			return SecuritySupport$$Lambda$lambda$isFileExists$2$2::load$(name, initialize);
		}
		if (name->equals(SecuritySupport$$Lambda$lambda$getFileInputStream$3$3::classInfo$.name)) {
			return SecuritySupport$$Lambda$lambda$getFileInputStream$3$3::load$(name, initialize);
		}
		if (name->equals(SecuritySupport$$Lambda$lambda$getResourceAsStream$4$4::classInfo$.name)) {
			return SecuritySupport$$Lambda$lambda$getResourceAsStream$4$4::load$(name, initialize);
		}
		if (name->equals(SecuritySupport$$Lambda$lambda$getResourceBundle$5$5::classInfo$.name)) {
			return SecuritySupport$$Lambda$lambda$getResourceBundle$5$5::load$(name, initialize);
		}
		if (name->equals(SecuritySupport$$Lambda$lambda$getLastModified$7$6::classInfo$.name)) {
			return SecuritySupport$$Lambda$lambda$getLastModified$7$6::load$(name, initialize);
		}
		if (name->equals(SecuritySupport$$Lambda$lambda$getContextClassLoader$8$7::classInfo$.name)) {
			return SecuritySupport$$Lambda$lambda$getContextClassLoader$8$7::load$(name, initialize);
		}
		if (name->equals(SecuritySupport$$Lambda$lambda$getSystemClassLoader$9$8::classInfo$.name)) {
			return SecuritySupport$$Lambda$lambda$getSystemClassLoader$9$8::load$(name, initialize);
		}
		if (name->equals(SecuritySupport$$Lambda$lambda$getParentClassLoader$10$9::classInfo$.name)) {
			return SecuritySupport$$Lambda$lambda$getParentClassLoader$10$9::load$(name, initialize);
		}
		if (name->equals(SecuritySupport$$Lambda$lambda$getClassSource$11$10::classInfo$.name)) {
			return SecuritySupport$$Lambda$lambda$getClassSource$11$10::load$(name, initialize);
		}
		if (name->equals(SecuritySupport$$Lambda$lambda$getClassLoader$12$11::classInfo$.name)) {
			return SecuritySupport$$Lambda$lambda$getClassLoader$12$11::load$(name, initialize);
		}
		if (name->equals(SecuritySupport$$Lambda$lambda$getResourceAsStream$13$12::classInfo$.name)) {
			return SecuritySupport$$Lambda$lambda$getResourceAsStream$13$12::load$(name, initialize);
		}
	}
	$loadClass(SecuritySupport, name, initialize, &_SecuritySupport_ClassInfo_, clinit$SecuritySupport, allocate$SecuritySupport);
	return class$;
}

$Class* SecuritySupport::class$ = nullptr;

		} // internal
	} // xml
} // jdk