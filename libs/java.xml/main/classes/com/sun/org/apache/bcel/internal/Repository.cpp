#include <com/sun/org/apache/bcel/internal/Repository.h>

#include <com/sun/org/apache/bcel/internal/classfile/JavaClass.h>
#include <com/sun/org/apache/bcel/internal/util/Repository.h>
#include <com/sun/org/apache/bcel/internal/util/SyntheticRepository.h>
#include <jcpp.h>

using $JavaClassArray = $Array<::com::sun::org::apache::bcel::internal::classfile::JavaClass>;
using $JavaClass = ::com::sun::org::apache::bcel::internal::classfile::JavaClass;
using $Repository = ::com::sun::org::apache::bcel::internal::util::Repository;
using $SyntheticRepository = ::com::sun::org::apache::bcel::internal::util::SyntheticRepository;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {

$FieldInfo _Repository_FieldInfo_[] = {
	{"repository", "Lcom/sun/org/apache/bcel/internal/util/Repository;", nullptr, $PRIVATE | $STATIC, $staticField(Repository, repository)},
	{}
};

$MethodInfo _Repository_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Repository, init$, void)},
	{"addClass", "(Lcom/sun/org/apache/bcel/internal/classfile/JavaClass;)Lcom/sun/org/apache/bcel/internal/classfile/JavaClass;", nullptr, $PUBLIC | $STATIC, $staticMethod(Repository, addClass, $JavaClass*, $JavaClass*)},
	{"clearCache", "()V", nullptr, $PUBLIC | $STATIC, $staticMethod(Repository, clearCache, void)},
	{"getInterfaces", "(Lcom/sun/org/apache/bcel/internal/classfile/JavaClass;)[Lcom/sun/org/apache/bcel/internal/classfile/JavaClass;", nullptr, $PUBLIC | $STATIC, $staticMethod(Repository, getInterfaces, $JavaClassArray*, $JavaClass*), "java.lang.ClassNotFoundException"},
	{"getInterfaces", "(Ljava/lang/String;)[Lcom/sun/org/apache/bcel/internal/classfile/JavaClass;", nullptr, $PUBLIC | $STATIC, $staticMethod(Repository, getInterfaces, $JavaClassArray*, $String*), "java.lang.ClassNotFoundException"},
	{"getRepository", "()Lcom/sun/org/apache/bcel/internal/util/Repository;", nullptr, $PUBLIC | $STATIC, $staticMethod(Repository, getRepository, $Repository*)},
	{"getSuperClasses", "(Lcom/sun/org/apache/bcel/internal/classfile/JavaClass;)[Lcom/sun/org/apache/bcel/internal/classfile/JavaClass;", nullptr, $PUBLIC | $STATIC, $staticMethod(Repository, getSuperClasses, $JavaClassArray*, $JavaClass*), "java.lang.ClassNotFoundException"},
	{"getSuperClasses", "(Ljava/lang/String;)[Lcom/sun/org/apache/bcel/internal/classfile/JavaClass;", nullptr, $PUBLIC | $STATIC, $staticMethod(Repository, getSuperClasses, $JavaClassArray*, $String*), "java.lang.ClassNotFoundException"},
	{"implementationOf", "(Lcom/sun/org/apache/bcel/internal/classfile/JavaClass;Lcom/sun/org/apache/bcel/internal/classfile/JavaClass;)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(Repository, implementationOf, bool, $JavaClass*, $JavaClass*), "java.lang.ClassNotFoundException"},
	{"implementationOf", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(Repository, implementationOf, bool, $String*, $String*), "java.lang.ClassNotFoundException"},
	{"implementationOf", "(Lcom/sun/org/apache/bcel/internal/classfile/JavaClass;Ljava/lang/String;)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(Repository, implementationOf, bool, $JavaClass*, $String*), "java.lang.ClassNotFoundException"},
	{"implementationOf", "(Ljava/lang/String;Lcom/sun/org/apache/bcel/internal/classfile/JavaClass;)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(Repository, implementationOf, bool, $String*, $JavaClass*), "java.lang.ClassNotFoundException"},
	{"instanceOf", "(Lcom/sun/org/apache/bcel/internal/classfile/JavaClass;Lcom/sun/org/apache/bcel/internal/classfile/JavaClass;)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(Repository, instanceOf, bool, $JavaClass*, $JavaClass*), "java.lang.ClassNotFoundException"},
	{"instanceOf", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(Repository, instanceOf, bool, $String*, $String*), "java.lang.ClassNotFoundException"},
	{"instanceOf", "(Lcom/sun/org/apache/bcel/internal/classfile/JavaClass;Ljava/lang/String;)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(Repository, instanceOf, bool, $JavaClass*, $String*), "java.lang.ClassNotFoundException"},
	{"instanceOf", "(Ljava/lang/String;Lcom/sun/org/apache/bcel/internal/classfile/JavaClass;)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(Repository, instanceOf, bool, $String*, $JavaClass*), "java.lang.ClassNotFoundException"},
	{"lookupClass", "(Ljava/lang/String;)Lcom/sun/org/apache/bcel/internal/classfile/JavaClass;", nullptr, $PUBLIC | $STATIC, $staticMethod(Repository, lookupClass, $JavaClass*, $String*), "java.lang.ClassNotFoundException"},
	{"lookupClass", "(Ljava/lang/Class;)Lcom/sun/org/apache/bcel/internal/classfile/JavaClass;", "(Ljava/lang/Class<*>;)Lcom/sun/org/apache/bcel/internal/classfile/JavaClass;", $PUBLIC | $STATIC, $staticMethod(Repository, lookupClass, $JavaClass*, $Class*), "java.lang.ClassNotFoundException"},
	{"removeClass", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Repository, removeClass, void, $String*)},
	{"removeClass", "(Lcom/sun/org/apache/bcel/internal/classfile/JavaClass;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Repository, removeClass, void, $JavaClass*)},
	{"setRepository", "(Lcom/sun/org/apache/bcel/internal/util/Repository;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Repository, setRepository, void, $Repository*)},
	{}
};

$ClassInfo _Repository_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.org.apache.bcel.internal.Repository",
	"java.lang.Object",
	nullptr,
	_Repository_FieldInfo_,
	_Repository_MethodInfo_
};

$Object* allocate$Repository($Class* clazz) {
	return $of($alloc(Repository));
}

$Repository* Repository::repository = nullptr;

void Repository::init$() {
}

$Repository* Repository::getRepository() {
	$init(Repository);
	return Repository::repository;
}

void Repository::setRepository($Repository* rep) {
	$init(Repository);
	$assignStatic(Repository::repository, rep);
}

$JavaClass* Repository::lookupClass($String* class_name) {
	$init(Repository);
	return $nc(Repository::repository)->loadClass(class_name);
}

$JavaClass* Repository::lookupClass($Class* clazz) {
	$init(Repository);
	return $nc(Repository::repository)->loadClass(clazz);
}

void Repository::clearCache() {
	$init(Repository);
	$nc(Repository::repository)->clear();
}

$JavaClass* Repository::addClass($JavaClass* clazz) {
	$init(Repository);
	$useLocalCurrentObjectStackCache();
	$var($JavaClass, old, $nc(Repository::repository)->findClass($($nc(clazz)->getClassName())));
	$nc(Repository::repository)->storeClass(clazz);
	return old;
}

void Repository::removeClass($String* clazz) {
	$init(Repository);
	$nc(Repository::repository)->removeClass($($nc(Repository::repository)->findClass(clazz)));
}

void Repository::removeClass($JavaClass* clazz) {
	$init(Repository);
	$nc(Repository::repository)->removeClass(clazz);
}

$JavaClassArray* Repository::getSuperClasses($JavaClass* clazz) {
	$init(Repository);
	return $nc(clazz)->getSuperClasses();
}

$JavaClassArray* Repository::getSuperClasses($String* class_name) {
	$init(Repository);
	$var($JavaClass, jc, lookupClass(class_name));
	return getSuperClasses(jc);
}

$JavaClassArray* Repository::getInterfaces($JavaClass* clazz) {
	$init(Repository);
	return $nc(clazz)->getAllInterfaces();
}

$JavaClassArray* Repository::getInterfaces($String* class_name) {
	$init(Repository);
	return getInterfaces($(lookupClass(class_name)));
}

bool Repository::instanceOf($JavaClass* clazz, $JavaClass* super_class) {
	$init(Repository);
	return $nc(clazz)->instanceOf(super_class);
}

bool Repository::instanceOf($String* clazz, $String* super_class) {
	$init(Repository);
	$useLocalCurrentObjectStackCache();
	$var($JavaClass, var$0, lookupClass(clazz));
	return instanceOf(var$0, $(lookupClass(super_class)));
}

bool Repository::instanceOf($JavaClass* clazz, $String* super_class) {
	$init(Repository);
	return instanceOf(clazz, $(lookupClass(super_class)));
}

bool Repository::instanceOf($String* clazz, $JavaClass* super_class) {
	$init(Repository);
	return instanceOf($(lookupClass(clazz)), super_class);
}

bool Repository::implementationOf($JavaClass* clazz, $JavaClass* inter) {
	$init(Repository);
	return $nc(clazz)->implementationOf(inter);
}

bool Repository::implementationOf($String* clazz, $String* inter) {
	$init(Repository);
	$useLocalCurrentObjectStackCache();
	$var($JavaClass, var$0, lookupClass(clazz));
	return implementationOf(var$0, $(lookupClass(inter)));
}

bool Repository::implementationOf($JavaClass* clazz, $String* inter) {
	$init(Repository);
	return implementationOf(clazz, $(lookupClass(inter)));
}

bool Repository::implementationOf($String* clazz, $JavaClass* inter) {
	$init(Repository);
	return implementationOf($(lookupClass(clazz)), inter);
}

void clinit$Repository($Class* class$) {
	$assignStatic(Repository::repository, $SyntheticRepository::getInstance());
}

Repository::Repository() {
}

$Class* Repository::load$($String* name, bool initialize) {
	$loadClass(Repository, name, initialize, &_Repository_ClassInfo_, clinit$Repository, allocate$Repository);
	return class$;
}

$Class* Repository::class$ = nullptr;

					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com