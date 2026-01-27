#include <com/sun/org/apache/bcel/internal/util/Repository.h>

#include <com/sun/org/apache/bcel/internal/classfile/JavaClass.h>
#include <jcpp.h>

using $JavaClass = ::com::sun::org::apache::bcel::internal::classfile::JavaClass;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace util {

$MethodInfo _Repository_MethodInfo_[] = {
	{"clear", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Repository, clear, void)},
	{"findClass", "(Ljava/lang/String;)Lcom/sun/org/apache/bcel/internal/classfile/JavaClass;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Repository, findClass, $JavaClass*, $String*)},
	{"loadClass", "(Ljava/lang/String;)Lcom/sun/org/apache/bcel/internal/classfile/JavaClass;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Repository, loadClass, $JavaClass*, $String*), "java.lang.ClassNotFoundException"},
	{"loadClass", "(Ljava/lang/Class;)Lcom/sun/org/apache/bcel/internal/classfile/JavaClass;", "(Ljava/lang/Class<*>;)Lcom/sun/org/apache/bcel/internal/classfile/JavaClass;", $PUBLIC | $ABSTRACT, $virtualMethod(Repository, loadClass, $JavaClass*, $Class*), "java.lang.ClassNotFoundException"},
	{"removeClass", "(Lcom/sun/org/apache/bcel/internal/classfile/JavaClass;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Repository, removeClass, void, $JavaClass*)},
	{"storeClass", "(Lcom/sun/org/apache/bcel/internal/classfile/JavaClass;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Repository, storeClass, void, $JavaClass*)},
	{}
};

$ClassInfo _Repository_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.bcel.internal.util.Repository",
	nullptr,
	nullptr,
	nullptr,
	_Repository_MethodInfo_
};

$Object* allocate$Repository($Class* clazz) {
	return $of($alloc(Repository));
}

$Class* Repository::load$($String* name, bool initialize) {
	$loadClass(Repository, name, initialize, &_Repository_ClassInfo_, allocate$Repository);
	return class$;
}

$Class* Repository::class$ = nullptr;

						} // util
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com