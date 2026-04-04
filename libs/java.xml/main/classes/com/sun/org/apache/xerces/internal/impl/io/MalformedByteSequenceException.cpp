#include <com/sun/org/apache/xerces/internal/impl/io/MalformedByteSequenceException.h>
#include <com/sun/org/apache/xerces/internal/util/MessageFormatter.h>
#include <java/io/CharConversionException.h>
#include <java/util/Locale.h>
#include <jcpp.h>

using $MessageFormatter = ::com::sun::org::apache::xerces::internal::util::MessageFormatter;
using $CharConversionException = ::java::io::CharConversionException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace io {

void MalformedByteSequenceException::init$($MessageFormatter* formatter, $Locale* locale, $String* domain, $String* key, $ObjectArray* arguments) {
	$CharConversionException::init$();
	$set(this, fFormatter, formatter);
	$set(this, fLocale, locale);
	$set(this, fDomain, domain);
	$set(this, fKey, key);
	$set(this, fArguments, arguments);
}

$String* MalformedByteSequenceException::getDomain() {
	return this->fDomain;
}

$String* MalformedByteSequenceException::getKey() {
	return this->fKey;
}

$ObjectArray* MalformedByteSequenceException::getArguments() {
	return this->fArguments;
}

$String* MalformedByteSequenceException::getMessage() {
	if (this->fMessage == nullptr) {
		$set(this, fMessage, $nc(this->fFormatter)->formatMessage(this->fLocale, this->fKey, this->fArguments));
		$set(this, fFormatter, nullptr);
		$set(this, fLocale, nullptr);
	}
	return this->fMessage;
}

MalformedByteSequenceException::MalformedByteSequenceException() {
}

MalformedByteSequenceException::MalformedByteSequenceException(const MalformedByteSequenceException& e) : $CharConversionException(e) {
}

void MalformedByteSequenceException::throw$() {
	throw *this;
}

$Class* MalformedByteSequenceException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(MalformedByteSequenceException, serialVersionUID)},
		{"fFormatter", "Lcom/sun/org/apache/xerces/internal/util/MessageFormatter;", nullptr, $PRIVATE, $field(MalformedByteSequenceException, fFormatter)},
		{"fLocale", "Ljava/util/Locale;", nullptr, $PRIVATE, $field(MalformedByteSequenceException, fLocale)},
		{"fDomain", "Ljava/lang/String;", nullptr, $PRIVATE, $field(MalformedByteSequenceException, fDomain)},
		{"fKey", "Ljava/lang/String;", nullptr, $PRIVATE, $field(MalformedByteSequenceException, fKey)},
		{"fArguments", "[Ljava/lang/Object;", nullptr, $PRIVATE, $field(MalformedByteSequenceException, fArguments)},
		{"fMessage", "Ljava/lang/String;", nullptr, $PRIVATE, $field(MalformedByteSequenceException, fMessage)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/org/apache/xerces/internal/util/MessageFormatter;Ljava/util/Locale;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(MalformedByteSequenceException, init$, void, $MessageFormatter*, $Locale*, $String*, $String*, $ObjectArray*)},
		{"getArguments", "()[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(MalformedByteSequenceException, getArguments, $ObjectArray*)},
		{"getDomain", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(MalformedByteSequenceException, getDomain, $String*)},
		{"getKey", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(MalformedByteSequenceException, getKey, $String*)},
		{"getMessage", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(MalformedByteSequenceException, getMessage, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xerces.internal.impl.io.MalformedByteSequenceException",
		"java.io.CharConversionException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(MalformedByteSequenceException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MalformedByteSequenceException);
	});
	return class$;
}

$Class* MalformedByteSequenceException::class$ = nullptr;

							} // io
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com