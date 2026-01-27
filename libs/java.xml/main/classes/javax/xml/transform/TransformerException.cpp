#include <javax/xml/transform/TransformerException.h>

#include <java/io/FilterOutputStream.h>
#include <java/io/OutputStream.h>
#include <java/io/PrintWriter.h>
#include <java/io/Serializable.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/NoSuchMethodException.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/InvocationTargetException.h>
#include <java/lang/reflect/Method.h>
#include <java/net/URL.h>
#include <java/security/AccessControlContext.h>
#include <java/security/AccessController.h>
#include <java/security/CodeSigner.h>
#include <java/security/CodeSource.h>
#include <java/security/PermissionCollection.h>
#include <java/security/Permissions.h>
#include <java/security/PrivilegedAction.h>
#include <java/security/ProtectionDomain.h>
#include <java/util/Objects.h>
#include <javax/xml/transform/SourceLocator.h>
#include <jcpp.h>

using $CodeSignerArray = $Array<::java::security::CodeSigner>;
using $ProtectionDomainArray = $Array<::java::security::ProtectionDomain>;
using $FilterOutputStream = ::java::io::FilterOutputStream;
using $OutputStream = ::java::io::OutputStream;
using $PrintStream = ::java::io::PrintStream;
using $PrintWriter = ::java::io::PrintWriter;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchMethodException = ::java::lang::NoSuchMethodException;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $InvocationTargetException = ::java::lang::reflect::InvocationTargetException;
using $Method = ::java::lang::reflect::Method;
using $URL = ::java::net::URL;
using $AccessControlContext = ::java::security::AccessControlContext;
using $AccessController = ::java::security::AccessController;
using $CodeSource = ::java::security::CodeSource;
using $PermissionCollection = ::java::security::PermissionCollection;
using $Permissions = ::java::security::Permissions;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $ProtectionDomain = ::java::security::ProtectionDomain;
using $Objects = ::java::util::Objects;
using $SourceLocator = ::javax::xml::transform::SourceLocator;

namespace javax {
	namespace xml {
		namespace transform {

class TransformerException$$Lambda$lambda$getLocationAsString$0 : public $PrivilegedAction {
	$class(TransformerException$$Lambda$lambda$getLocationAsString$0, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$(TransformerException* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* run() override {
		 return $of($nc(inst$)->lambda$getLocationAsString$0());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TransformerException$$Lambda$lambda$getLocationAsString$0>());
	}
	TransformerException* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo TransformerException$$Lambda$lambda$getLocationAsString$0::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TransformerException$$Lambda$lambda$getLocationAsString$0, inst$)},
	{}
};
$MethodInfo TransformerException$$Lambda$lambda$getLocationAsString$0::methodInfos[3] = {
	{"<init>", "(Ljavax/xml/transform/TransformerException;)V", nullptr, $PUBLIC, $method(TransformerException$$Lambda$lambda$getLocationAsString$0, init$, void, TransformerException*)},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(TransformerException$$Lambda$lambda$getLocationAsString$0, run, $Object*)},
	{}
};
$ClassInfo TransformerException$$Lambda$lambda$getLocationAsString$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.xml.transform.TransformerException$$Lambda$lambda$getLocationAsString$0",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	fieldInfos,
	methodInfos
};
$Class* TransformerException$$Lambda$lambda$getLocationAsString$0::load$($String* name, bool initialize) {
	$loadClass(TransformerException$$Lambda$lambda$getLocationAsString$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TransformerException$$Lambda$lambda$getLocationAsString$0::class$ = nullptr;

$FieldInfo _TransformerException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(TransformerException, serialVersionUID)},
	{"locator", "Ljavax/xml/transform/SourceLocator;", nullptr, 0, $field(TransformerException, locator)},
	{"containedException", "Ljava/lang/Throwable;", nullptr, 0, $field(TransformerException, containedException)},
	{}
};

$MethodInfo _TransformerException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(TransformerException, init$, void, $String*)},
	{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(TransformerException, init$, void, $Throwable*)},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(TransformerException, init$, void, $String*, $Throwable*)},
	{"<init>", "(Ljava/lang/String;Ljavax/xml/transform/SourceLocator;)V", nullptr, $PUBLIC, $method(TransformerException, init$, void, $String*, $SourceLocator*)},
	{"<init>", "(Ljava/lang/String;Ljavax/xml/transform/SourceLocator;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(TransformerException, init$, void, $String*, $SourceLocator*, $Throwable*)},
	{"getCause", "()Ljava/lang/Throwable;", nullptr, $PUBLIC, $virtualMethod(TransformerException, getCause, $Throwable*)},
	{"getException", "()Ljava/lang/Throwable;", nullptr, $PUBLIC, $virtualMethod(TransformerException, getException, $Throwable*)},
	{"getLocationAsString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(TransformerException, getLocationAsString, $String*)},
	{"getLocationString", "()Ljava/lang/String;", nullptr, $PRIVATE, $method(TransformerException, getLocationString, $String*)},
	{"getLocator", "()Ljavax/xml/transform/SourceLocator;", nullptr, $PUBLIC, $virtualMethod(TransformerException, getLocator, $SourceLocator*)},
	{"getMessageAndLocation", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(TransformerException, getMessageAndLocation, $String*)},
	{"getNonPrivDomain", "()Ljava/security/ProtectionDomain;", nullptr, $PRIVATE, $method(TransformerException, getNonPrivDomain, $ProtectionDomain*)},
	{"initCause", "(Ljava/lang/Throwable;)Ljava/lang/Throwable;", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(TransformerException, initCause, $Throwable*, $Throwable*)},
	{"lambda$getLocationAsString$0", "()Ljava/lang/String;", nullptr, $PRIVATE | $SYNTHETIC, $method(TransformerException, lambda$getLocationAsString$0, $String*)},
	{"printStackTrace", "()V", nullptr, $PUBLIC, $virtualMethod(TransformerException, printStackTrace, void)},
	{"printStackTrace", "(Ljava/io/PrintStream;)V", nullptr, $PUBLIC, $virtualMethod(TransformerException, printStackTrace, void, $PrintStream*)},
	{"printStackTrace", "(Ljava/io/PrintWriter;)V", nullptr, $PUBLIC, $virtualMethod(TransformerException, printStackTrace, void, $PrintWriter*)},
	{"setLocator", "(Ljavax/xml/transform/SourceLocator;)V", nullptr, $PUBLIC, $virtualMethod(TransformerException, setLocator, void, $SourceLocator*)},
	{}
};

$ClassInfo _TransformerException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.xml.transform.TransformerException",
	"java.lang.Exception",
	nullptr,
	_TransformerException_FieldInfo_,
	_TransformerException_MethodInfo_
};

$Object* allocate$TransformerException($Class* clazz) {
	return $of($alloc(TransformerException));
}

$SourceLocator* TransformerException::getLocator() {
	return this->locator;
}

void TransformerException::setLocator($SourceLocator* location) {
	$set(this, locator, location);
}

$Throwable* TransformerException::getException() {
	return this->containedException;
}

$Throwable* TransformerException::getCause() {
	return (($equals(this->containedException, this)) ? ($Throwable*)nullptr : this->containedException);
}

$Throwable* TransformerException::initCause($Throwable* cause) {
	$synchronized(this) {
		if (this->containedException != nullptr) {
			$throwNew($IllegalStateException, "Can\'t overwrite cause"_s);
		}
		if ($equals(cause, this)) {
			$throwNew($IllegalArgumentException, "Self-causation not permitted"_s);
		}
		$set(this, containedException, cause);
		return this;
	}
}

void TransformerException::init$($String* message) {
	TransformerException::init$(message, nullptr, nullptr);
}

void TransformerException::init$($Throwable* e) {
	TransformerException::init$(nullptr, nullptr, e);
}

void TransformerException::init$($String* message, $Throwable* e) {
	TransformerException::init$(message, nullptr, e);
}

void TransformerException::init$($String* message, $SourceLocator* locator) {
	TransformerException::init$(message, locator, nullptr);
}

void TransformerException::init$($String* message, $SourceLocator* locator, $Throwable* e) {
	$Exception::init$(((message == nullptr) || ($nc(message)->length() == 0)) ? ((e == nullptr) ? ""_s : $($nc(e)->toString())) : message);
	$set(this, containedException, e);
	$set(this, locator, locator);
}

$String* TransformerException::getMessageAndLocation() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, sbuffer, $new($StringBuilder));
	sbuffer->append($($Objects::toString($($Exception::getMessage()), ""_s)));
	sbuffer->append($($Objects::toString($(getLocationAsString()), ""_s)));
	return sbuffer->toString();
}

$String* TransformerException::getLocationAsString() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	if (this->locator == nullptr) {
		return nullptr;
	}
	if ($System::getSecurityManager() == nullptr) {
		return getLocationString();
	} else {
		$var($PrivilegedAction, var$0, static_cast<$PrivilegedAction*>($new(TransformerException$$Lambda$lambda$getLocationAsString$0, this)));
		return $cast($String, $AccessController::doPrivileged(var$0, $$new($AccessControlContext, $$new($ProtectionDomainArray, {$(getNonPrivDomain())}))));
	}
}

$String* TransformerException::getLocationString() {
	$useLocalCurrentObjectStackCache();
	if (this->locator == nullptr) {
		return nullptr;
	}
	$var($StringBuilder, sbuffer, $new($StringBuilder));
	$var($String, systemID, $nc(this->locator)->getSystemId());
	int32_t line = $nc(this->locator)->getLineNumber();
	int32_t column = $nc(this->locator)->getColumnNumber();
	if (nullptr != systemID) {
		sbuffer->append("; SystemID: "_s);
		sbuffer->append(systemID);
	}
	if (0 != line) {
		sbuffer->append("; Line#: "_s);
		sbuffer->append(line);
	}
	if (0 != column) {
		sbuffer->append("; Column#: "_s);
		sbuffer->append(column);
	}
	return sbuffer->toString();
}

void TransformerException::printStackTrace() {
	printStackTrace($$new($PrintWriter, static_cast<$OutputStream*>($System::err), true));
}

void TransformerException::printStackTrace($PrintStream* s) {
	printStackTrace($$new($PrintWriter, static_cast<$OutputStream*>(s)));
}

void TransformerException::printStackTrace($PrintWriter* s$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($PrintWriter, s, s$renamed);
	$beforeCallerSensitive();
	if (s == nullptr) {
		$assign(s, $new($PrintWriter, static_cast<$OutputStream*>($System::err), true));
	}
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				$var($String, locInfo, getLocationAsString());
				if (nullptr != locInfo) {
					$nc(s)->println(locInfo);
				}
				$Exception::printStackTrace(s);
			} catch ($Throwable& e) {
			}
			$var($Throwable, exception, getException());
			for (int32_t i = 0; (i < 10) && (nullptr != exception); ++i) {
				$nc(s)->println("---------"_s);
				try {
					exception->printStackTrace(s);
					if ($instanceOf(TransformerException, exception)) {
						break;
					}
				} catch ($Throwable& e) {
					s->println("Could not print stack trace..."_s);
				}
				try {
					$var($Method, meth, $of(exception)->getClass()->getMethod("getException"_s, $$new($ClassArray, 0)));
					if (nullptr != meth) {
						$var($Throwable, prev, exception);
						$assign(exception, $cast($Throwable, meth->invoke(exception, ($ObjectArray*)nullptr)));
						if (prev == exception) {
							break;
						}
					} else {
						$assign(exception, nullptr);
					}
				} catch ($InvocationTargetException& e) {
					$assign(exception, nullptr);
				} catch ($IllegalAccessException& e) {
					$assign(exception, nullptr);
				} catch ($NoSuchMethodException& e) {
					$assign(exception, nullptr);
				}
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc(s)->flush();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

$ProtectionDomain* TransformerException::getNonPrivDomain() {
	$useLocalCurrentObjectStackCache();
	$var($CodeSource, nullSource, $new($CodeSource, ($URL*)nullptr, ($CodeSignerArray*)nullptr));
	$var($PermissionCollection, noPermission, $new($Permissions));
	return $new($ProtectionDomain, nullSource, noPermission);
}

$String* TransformerException::lambda$getLocationAsString$0() {
	return getLocationString();
}

TransformerException::TransformerException() {
}

TransformerException::TransformerException(const TransformerException& e) : $Exception(e) {
}

void TransformerException::throw$() {
	throw *this;
}

$Class* TransformerException::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(TransformerException$$Lambda$lambda$getLocationAsString$0::classInfo$.name)) {
			return TransformerException$$Lambda$lambda$getLocationAsString$0::load$(name, initialize);
		}
	}
	$loadClass(TransformerException, name, initialize, &_TransformerException_ClassInfo_, allocate$TransformerException);
	return class$;
}

$Class* TransformerException::class$ = nullptr;

		} // transform
	} // xml
} // javax