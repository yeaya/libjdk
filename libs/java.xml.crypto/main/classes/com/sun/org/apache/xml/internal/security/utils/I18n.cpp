#include <com/sun/org/apache/xml/internal/security/utils/I18n.h>
#include <com/sun/org/apache/xml/internal/security/Init.h>
#include <com/sun/org/apache/xml/internal/security/utils/Constants.h>
#include <java/text/MessageFormat.h>
#include <java/util/Locale.h>
#include <java/util/ResourceBundle.h>
#include <jcpp.h>

#undef NOT_INITIALIZED_MSG

using $Init = ::com::sun::org::apache::xml::internal::security::Init;
using $Constants = ::com::sun::org::apache::xml::internal::security::utils::Constants;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MessageFormat = ::java::text::MessageFormat;
using $Locale = ::java::util::Locale;
using $ResourceBundle = ::java::util::ResourceBundle;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace utils {

$String* I18n::NOT_INITIALIZED_MSG = nullptr;
$ResourceBundle* I18n::resourceBundle = nullptr;
bool I18n::alreadyInitialized = false;

void I18n::init$() {
}

$String* I18n::translate($String* message, $ObjectArray* args) {
	$init(I18n);
	return getExceptionMessage(message, args);
}

$String* I18n::translate($String* message) {
	$init(I18n);
	return getExceptionMessage(message);
}

$String* I18n::getExceptionMessage($String* msgID) {
	$init(I18n);
	try {
		return $nc(I18n::resourceBundle)->getString(msgID);
	} catch ($Throwable& t) {
		if ($Init::isInitialized()) {
			$init($Constants);
			return $str({"No message with ID \""_s, msgID, "\" found in resource bundle \""_s, $Constants::exceptionMessagesResourceBundleBase, "\""_s});
		}
		return I18n::NOT_INITIALIZED_MSG;
	}
	$shouldNotReachHere();
}

$String* I18n::getExceptionMessage($String* msgID, $Exception* originalException) {
	$init(I18n);
	$useLocalObjectStack();
	try {
		$var($ObjectArray, exArgs, $new($ObjectArray, {$($nc(originalException)->getMessage())}));
		return $MessageFormat::format($($nc(I18n::resourceBundle)->getString(msgID)), exArgs);
	} catch ($Throwable& t) {
		if ($Init::isInitialized()) {
			$var($StringBuilder, var$0, $new($StringBuilder));
			var$0->append("No message with ID \""_s);
			var$0->append(msgID);
			var$0->append("\" found in resource bundle \""_s);
			$init($Constants);
			var$0->append($Constants::exceptionMessagesResourceBundleBase);
			var$0->append("\". Original Exception was a "_s);
			var$0->append($($nc($of(originalException))->getClass()->getName()));
			var$0->append(" and message "_s);
			var$0->append($(originalException->getMessage()));
			return $str(var$0);
		}
		return I18n::NOT_INITIALIZED_MSG;
	}
	$shouldNotReachHere();
}

$String* I18n::getExceptionMessage($String* msgID, $ObjectArray* exArgs) {
	$init(I18n);
	try {
		return $MessageFormat::format($($nc(I18n::resourceBundle)->getString(msgID)), exArgs);
	} catch ($Throwable& t) {
		if ($Init::isInitialized()) {
			$init($Constants);
			return $str({"No message with ID \""_s, msgID, "\" found in resource bundle \""_s, $Constants::exceptionMessagesResourceBundleBase, "\""_s});
		}
		return I18n::NOT_INITIALIZED_MSG;
	}
	$shouldNotReachHere();
}

void I18n::init($String* languageCode, $String* countryCode) {
	$init(I18n);
	$synchronized(class$) {
		$beforeCallerSensitive();
		if (I18n::alreadyInitialized) {
			return;
		}
		$init($Constants);
		$assignStatic(I18n::resourceBundle, $ResourceBundle::getBundle($Constants::exceptionMessagesResourceBundleBase, $$new($Locale, languageCode, countryCode)));
		I18n::alreadyInitialized = true;
	}
}

void I18n::init($ResourceBundle* resourceBundle) {
	$init(I18n);
	$synchronized(class$) {
		if (I18n::alreadyInitialized) {
			return;
		}
		$assignStatic(I18n::resourceBundle, resourceBundle);
		I18n::alreadyInitialized = true;
	}
}

void I18n::clinit$($Class* clazz) {
	$assignStatic(I18n::NOT_INITIALIZED_MSG, "You must initialize the xml-security library correctly before you use it. Call the static method \"com.sun.org.apache.xml.internal.security.Init.init();\" to do that before you use any functionality from that library."_s);
	I18n::alreadyInitialized = false;
}

I18n::I18n() {
}

$Class* I18n::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"NOT_INITIALIZED_MSG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(I18n, NOT_INITIALIZED_MSG)},
		{"resourceBundle", "Ljava/util/ResourceBundle;", nullptr, $PRIVATE | $STATIC, $staticField(I18n, resourceBundle)},
		{"alreadyInitialized", "Z", nullptr, $PRIVATE | $STATIC, $staticField(I18n, alreadyInitialized)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(I18n, init$, void)},
		{"getExceptionMessage", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(I18n, getExceptionMessage, $String*, $String*)},
		{"getExceptionMessage", "(Ljava/lang/String;Ljava/lang/Exception;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(I18n, getExceptionMessage, $String*, $String*, $Exception*)},
		{"getExceptionMessage", "(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(I18n, getExceptionMessage, $String*, $String*, $ObjectArray*)},
		{"init", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $staticMethod(I18n, init, void, $String*, $String*)},
		{"init", "(Ljava/util/ResourceBundle;)V", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $staticMethod(I18n, init, void, $ResourceBundle*)},
		{"translate", "(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(I18n, translate, $String*, $String*, $ObjectArray*)},
		{"translate", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(I18n, translate, $String*, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.org.apache.xml.internal.security.utils.I18n",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(I18n, name, initialize, &classInfo$$, I18n::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(I18n);
	});
	return class$;
}

$Class* I18n::class$ = nullptr;

							} // utils
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com