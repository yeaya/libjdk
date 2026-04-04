#include <javax/naming/spi/NamingManager$FactoryInitializationError.h>
#include <java/lang/Error.h>
#include <javax/naming/NoInitialContextException.h>
#include <javax/naming/spi/NamingManager.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoInitialContextException = ::javax::naming::NoInitialContextException;

namespace javax {
	namespace naming {
		namespace spi {

void NamingManager$FactoryInitializationError::init$($NoInitialContextException* cause) {
	$Error::init$(cause);
}

$Throwable* NamingManager$FactoryInitializationError::getCause() {
	return $cast($NoInitialContextException, $Error::getCause());
}

NamingManager$FactoryInitializationError::NamingManager$FactoryInitializationError() {
}

NamingManager$FactoryInitializationError::NamingManager$FactoryInitializationError(const NamingManager$FactoryInitializationError& e) : $Error(e) {
}

void NamingManager$FactoryInitializationError::throw$() {
	throw *this;
}

$Class* NamingManager$FactoryInitializationError::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(NamingManager$FactoryInitializationError, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/naming/NoInitialContextException;)V", nullptr, $PRIVATE, $method(NamingManager$FactoryInitializationError, init$, void, $NoInitialContextException*)},
		{"getCause", "()Ljavax/naming/NoInitialContextException;", nullptr, $PUBLIC, $virtualMethod(NamingManager$FactoryInitializationError, getCause, $Throwable*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.naming.spi.NamingManager$FactoryInitializationError", "javax.naming.spi.NamingManager", "FactoryInitializationError", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.naming.spi.NamingManager$FactoryInitializationError",
		"java.lang.Error",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.naming.spi.NamingManager"
	};
	$loadClass(NamingManager$FactoryInitializationError, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NamingManager$FactoryInitializationError);
	});
	return class$;
}

$Class* NamingManager$FactoryInitializationError::class$ = nullptr;

		} // spi
	} // naming
} // javax