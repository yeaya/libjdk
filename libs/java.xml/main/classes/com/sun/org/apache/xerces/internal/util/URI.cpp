#include <com/sun/org/apache/xerces/internal/util/URI.h>

#include <com/sun/org/apache/xerces/internal/util/URI$MalformedURIException.h>
#include <java/lang/NumberFormatException.h>
#include <java/util/Objects.h>
#include <jcpp.h>

#undef ASCII_ALPHA_CHARACTERS
#undef ASCII_DIGIT_CHARACTERS
#undef ASCII_HEX_CHARACTERS
#undef DEBUG
#undef MARK_CHARACTERS
#undef MASK_ALPHA_NUMERIC
#undef MASK_PATH_CHARACTER
#undef MASK_SCHEME_CHARACTER
#undef MASK_UNRESERVED_MASK
#undef MASK_URI_CHARACTER
#undef MASK_USERINFO_CHARACTER
#undef PATH_CHARACTERS
#undef RESERVED_CHARACTERS
#undef SCHEME_CHARACTERS
#undef URI
#undef USERINFO_CHARACTERS

using $URI$MalformedURIException = ::com::sun::org::apache::xerces::internal::util::URI$MalformedURIException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $Objects = ::java::util::Objects;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace util {

$FieldInfo _URI_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(URI, serialVersionUID)},
	{"fgLookupTable", "[B", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(URI, fgLookupTable)},
	{"RESERVED_CHARACTERS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(URI, RESERVED_CHARACTERS)},
	{"MARK_CHARACTERS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(URI, MARK_CHARACTERS)},
	{"SCHEME_CHARACTERS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(URI, SCHEME_CHARACTERS)},
	{"USERINFO_CHARACTERS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(URI, USERINFO_CHARACTERS)},
	{"ASCII_ALPHA_CHARACTERS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(URI, ASCII_ALPHA_CHARACTERS)},
	{"ASCII_DIGIT_CHARACTERS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(URI, ASCII_DIGIT_CHARACTERS)},
	{"ASCII_HEX_CHARACTERS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(URI, ASCII_HEX_CHARACTERS)},
	{"PATH_CHARACTERS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(URI, PATH_CHARACTERS)},
	{"MASK_ALPHA_NUMERIC", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(URI, MASK_ALPHA_NUMERIC)},
	{"MASK_UNRESERVED_MASK", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(URI, MASK_UNRESERVED_MASK)},
	{"MASK_URI_CHARACTER", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(URI, MASK_URI_CHARACTER)},
	{"MASK_SCHEME_CHARACTER", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(URI, MASK_SCHEME_CHARACTER)},
	{"MASK_USERINFO_CHARACTER", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(URI, MASK_USERINFO_CHARACTER)},
	{"MASK_PATH_CHARACTER", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(URI, MASK_PATH_CHARACTER)},
	{"m_scheme", "Ljava/lang/String;", nullptr, $PRIVATE, $field(URI, m_scheme)},
	{"m_userinfo", "Ljava/lang/String;", nullptr, $PRIVATE, $field(URI, m_userinfo)},
	{"m_host", "Ljava/lang/String;", nullptr, $PRIVATE, $field(URI, m_host)},
	{"m_port", "I", nullptr, $PRIVATE, $field(URI, m_port)},
	{"m_regAuthority", "Ljava/lang/String;", nullptr, $PRIVATE, $field(URI, m_regAuthority)},
	{"m_path", "Ljava/lang/String;", nullptr, $PRIVATE, $field(URI, m_path)},
	{"m_queryString", "Ljava/lang/String;", nullptr, $PRIVATE, $field(URI, m_queryString)},
	{"m_fragment", "Ljava/lang/String;", nullptr, $PRIVATE, $field(URI, m_fragment)},
	{"DEBUG", "Z", nullptr, $PRIVATE | $STATIC, $staticField(URI, DEBUG)},
	{}
};

$MethodInfo _URI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(URI, init$, void)},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/util/URI;)V", nullptr, $PUBLIC, $method(URI, init$, void, URI*)},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(URI, init$, void, $String*), "com.sun.org.apache.xerces.internal.util.URI$MalformedURIException"},
	{"<init>", "(Ljava/lang/String;Z)V", nullptr, $PUBLIC, $method(URI, init$, void, $String*, bool), "com.sun.org.apache.xerces.internal.util.URI$MalformedURIException"},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/util/URI;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(URI, init$, void, URI*, $String*), "com.sun.org.apache.xerces.internal.util.URI$MalformedURIException"},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/util/URI;Ljava/lang/String;Z)V", nullptr, $PUBLIC, $method(URI, init$, void, URI*, $String*, bool), "com.sun.org.apache.xerces.internal.util.URI$MalformedURIException"},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(URI, init$, void, $String*, $String*), "com.sun.org.apache.xerces.internal.util.URI$MalformedURIException"},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(URI, init$, void, $String*, $String*, $String*, $String*, $String*), "com.sun.org.apache.xerces.internal.util.URI$MalformedURIException"},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(URI, init$, void, $String*, $String*, $String*, int32_t, $String*, $String*, $String*), "com.sun.org.apache.xerces.internal.util.URI$MalformedURIException"},
	{"absolutize", "(Lcom/sun/org/apache/xerces/internal/util/URI;)V", nullptr, $PUBLIC, $virtualMethod(URI, absolutize, void, URI*)},
	{"appendPath", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(URI, appendPath, void, $String*), "com.sun.org.apache.xerces.internal.util.URI$MalformedURIException"},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(URI, equals, bool, Object$*)},
	{"getAuthority", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(URI, getAuthority, $String*)},
	{"getFragment", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(URI, getFragment, $String*)},
	{"getHost", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(URI, getHost, $String*)},
	{"getPath", "(ZZ)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(URI, getPath, $String*, bool, bool)},
	{"getPath", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(URI, getPath, $String*)},
	{"getPort", "()I", nullptr, $PUBLIC, $virtualMethod(URI, getPort, int32_t)},
	{"getQueryString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(URI, getQueryString, $String*)},
	{"getRegBasedAuthority", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(URI, getRegBasedAuthority, $String*)},
	{"getScheme", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(URI, getScheme, $String*)},
	{"getSchemeSpecificPart", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(URI, getSchemeSpecificPart, $String*)},
	{"getUserinfo", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(URI, getUserinfo, $String*)},
	{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(URI, hashCode, int32_t)},
	{"initialize", "(Lcom/sun/org/apache/xerces/internal/util/URI;)V", nullptr, $PRIVATE, $method(URI, initialize, void, URI*)},
	{"initialize", "(Lcom/sun/org/apache/xerces/internal/util/URI;Ljava/lang/String;Z)V", nullptr, $PRIVATE, $method(URI, initialize, void, URI*, $String*, bool), "com.sun.org.apache.xerces.internal.util.URI$MalformedURIException"},
	{"initialize", "(Lcom/sun/org/apache/xerces/internal/util/URI;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(URI, initialize, void, URI*, $String*), "com.sun.org.apache.xerces.internal.util.URI$MalformedURIException"},
	{"initializeAuthority", "(Ljava/lang/String;)Z", nullptr, $PRIVATE, $method(URI, initializeAuthority, bool, $String*)},
	{"initializePath", "(Ljava/lang/String;I)V", nullptr, $PRIVATE, $method(URI, initializePath, void, $String*, int32_t), "com.sun.org.apache.xerces.internal.util.URI$MalformedURIException"},
	{"initializeScheme", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(URI, initializeScheme, void, $String*), "com.sun.org.apache.xerces.internal.util.URI$MalformedURIException"},
	{"isAbsoluteURI", "()Z", nullptr, $PUBLIC, $virtualMethod(URI, isAbsoluteURI, bool)},
	{"isAlpha", "(C)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(URI, isAlpha, bool, char16_t)},
	{"isAlphanum", "(C)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(URI, isAlphanum, bool, char16_t)},
	{"isConformantSchemeName", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(URI, isConformantSchemeName, bool, $String*)},
	{"isDigit", "(C)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(URI, isDigit, bool, char16_t)},
	{"isGenericURI", "()Z", nullptr, $PUBLIC, $virtualMethod(URI, isGenericURI, bool)},
	{"isHex", "(C)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(URI, isHex, bool, char16_t)},
	{"isPathCharacter", "(C)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(URI, isPathCharacter, bool, char16_t)},
	{"isReservedCharacter", "(C)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(URI, isReservedCharacter, bool, char16_t)},
	{"isSchemeCharacter", "(C)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(URI, isSchemeCharacter, bool, char16_t)},
	{"isURICharacter", "(C)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(URI, isURICharacter, bool, char16_t)},
	{"isURIString", "(Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(URI, isURIString, bool, $String*)},
	{"isUnreservedCharacter", "(C)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(URI, isUnreservedCharacter, bool, char16_t)},
	{"isUserinfoCharacter", "(C)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(URI, isUserinfoCharacter, bool, char16_t)},
	{"isValidRegistryBasedAuthority", "(Ljava/lang/String;)Z", nullptr, $PRIVATE, $method(URI, isValidRegistryBasedAuthority, bool, $String*)},
	{"isValidServerBasedAuthority", "(Ljava/lang/String;ILjava/lang/String;)Z", nullptr, $PRIVATE, $method(URI, isValidServerBasedAuthority, bool, $String*, int32_t, $String*)},
	{"isWellFormedAddress", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(URI, isWellFormedAddress, bool, $String*)},
	{"isWellFormedIPv4Address", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(URI, isWellFormedIPv4Address, bool, $String*)},
	{"isWellFormedIPv6Reference", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(URI, isWellFormedIPv6Reference, bool, $String*)},
	{"scanHexSequence", "(Ljava/lang/String;II[I)I", nullptr, $PRIVATE | $STATIC, $staticMethod(URI, scanHexSequence, int32_t, $String*, int32_t, int32_t, $ints*)},
	{"setFragment", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(URI, setFragment, void, $String*), "com.sun.org.apache.xerces.internal.util.URI$MalformedURIException"},
	{"setHost", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(URI, setHost, void, $String*), "com.sun.org.apache.xerces.internal.util.URI$MalformedURIException"},
	{"setPath", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(URI, setPath, void, $String*), "com.sun.org.apache.xerces.internal.util.URI$MalformedURIException"},
	{"setPort", "(I)V", nullptr, $PUBLIC, $virtualMethod(URI, setPort, void, int32_t), "com.sun.org.apache.xerces.internal.util.URI$MalformedURIException"},
	{"setQueryString", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(URI, setQueryString, void, $String*), "com.sun.org.apache.xerces.internal.util.URI$MalformedURIException"},
	{"setRegBasedAuthority", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(URI, setRegBasedAuthority, void, $String*), "com.sun.org.apache.xerces.internal.util.URI$MalformedURIException"},
	{"setScheme", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(URI, setScheme, void, $String*), "com.sun.org.apache.xerces.internal.util.URI$MalformedURIException"},
	{"setUserinfo", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(URI, setUserinfo, void, $String*), "com.sun.org.apache.xerces.internal.util.URI$MalformedURIException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(URI, toString, $String*)},
	{}
};

$InnerClassInfo _URI_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.util.URI$MalformedURIException", "com.sun.org.apache.xerces.internal.util.URI", "MalformedURIException", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _URI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.util.URI",
	"java.lang.Object",
	"java.io.Serializable",
	_URI_FieldInfo_,
	_URI_MethodInfo_,
	nullptr,
	nullptr,
	_URI_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.util.URI$MalformedURIException"
};

$Object* allocate$URI($Class* clazz) {
	return $of($alloc(URI));
}

$bytes* URI::fgLookupTable = nullptr;
bool URI::DEBUG = false;

void URI::init$() {
	$set(this, m_scheme, nullptr);
	$set(this, m_userinfo, nullptr);
	$set(this, m_host, nullptr);
	this->m_port = -1;
	$set(this, m_regAuthority, nullptr);
	$set(this, m_path, nullptr);
	$set(this, m_queryString, nullptr);
	$set(this, m_fragment, nullptr);
}

void URI::init$(URI* p_other) {
	$set(this, m_scheme, nullptr);
	$set(this, m_userinfo, nullptr);
	$set(this, m_host, nullptr);
	this->m_port = -1;
	$set(this, m_regAuthority, nullptr);
	$set(this, m_path, nullptr);
	$set(this, m_queryString, nullptr);
	$set(this, m_fragment, nullptr);
	initialize(p_other);
}

void URI::init$($String* p_uriSpec) {
	URI::init$((URI*)nullptr, p_uriSpec);
}

void URI::init$($String* p_uriSpec, bool allowNonAbsoluteURI) {
	URI::init$((URI*)nullptr, p_uriSpec, allowNonAbsoluteURI);
}

void URI::init$(URI* p_base, $String* p_uriSpec) {
	$set(this, m_scheme, nullptr);
	$set(this, m_userinfo, nullptr);
	$set(this, m_host, nullptr);
	this->m_port = -1;
	$set(this, m_regAuthority, nullptr);
	$set(this, m_path, nullptr);
	$set(this, m_queryString, nullptr);
	$set(this, m_fragment, nullptr);
	initialize(p_base, p_uriSpec);
}

void URI::init$(URI* p_base, $String* p_uriSpec, bool allowNonAbsoluteURI) {
	$set(this, m_scheme, nullptr);
	$set(this, m_userinfo, nullptr);
	$set(this, m_host, nullptr);
	this->m_port = -1;
	$set(this, m_regAuthority, nullptr);
	$set(this, m_path, nullptr);
	$set(this, m_queryString, nullptr);
	$set(this, m_fragment, nullptr);
	initialize(p_base, p_uriSpec, allowNonAbsoluteURI);
}

void URI::init$($String* p_scheme, $String* p_schemeSpecificPart) {
	$useLocalCurrentObjectStackCache();
	$set(this, m_scheme, nullptr);
	$set(this, m_userinfo, nullptr);
	$set(this, m_host, nullptr);
	this->m_port = -1;
	$set(this, m_regAuthority, nullptr);
	$set(this, m_path, nullptr);
	$set(this, m_queryString, nullptr);
	$set(this, m_fragment, nullptr);
	if (p_scheme == nullptr || $($nc(p_scheme)->trim())->length() == 0) {
		$throwNew($URI$MalformedURIException, "Cannot construct URI with null/empty scheme!"_s);
	}
	if (p_schemeSpecificPart == nullptr || $($nc(p_schemeSpecificPart)->trim())->length() == 0) {
		$throwNew($URI$MalformedURIException, "Cannot construct URI with null/empty scheme-specific part!"_s);
	}
	setScheme(p_scheme);
	setPath(p_schemeSpecificPart);
}

void URI::init$($String* p_scheme, $String* p_host, $String* p_path, $String* p_queryString, $String* p_fragment) {
	URI::init$(p_scheme, nullptr, p_host, -1, p_path, p_queryString, p_fragment);
}

void URI::init$($String* p_scheme, $String* p_userinfo, $String* p_host, int32_t p_port, $String* p_path, $String* p_queryString, $String* p_fragment) {
	$set(this, m_scheme, nullptr);
	$set(this, m_userinfo, nullptr);
	$set(this, m_host, nullptr);
	this->m_port = -1;
	$set(this, m_regAuthority, nullptr);
	$set(this, m_path, nullptr);
	$set(this, m_queryString, nullptr);
	$set(this, m_fragment, nullptr);
	if (p_scheme == nullptr || $($nc(p_scheme)->trim())->length() == 0) {
		$throwNew($URI$MalformedURIException, "Scheme is required!"_s);
	}
	if (p_host == nullptr) {
		if (p_userinfo != nullptr) {
			$throwNew($URI$MalformedURIException, "Userinfo may not be specified if host is not specified!"_s);
		}
		if (p_port != -1) {
			$throwNew($URI$MalformedURIException, "Port may not be specified if host is not specified!"_s);
		}
	}
	if (p_path != nullptr) {
		if (p_path->indexOf((int32_t)u'?') != -1 && p_queryString != nullptr) {
			$throwNew($URI$MalformedURIException, "Query string cannot be specified in path and query string!"_s);
		}
		if (p_path->indexOf((int32_t)u'#') != -1 && p_fragment != nullptr) {
			$throwNew($URI$MalformedURIException, "Fragment cannot be specified in both the path and fragment!"_s);
		}
	}
	setScheme(p_scheme);
	setHost(p_host);
	setPort(p_port);
	setUserinfo(p_userinfo);
	setPath(p_path);
	setQueryString(p_queryString);
	setFragment(p_fragment);
}

void URI::initialize(URI* p_other) {
	$set(this, m_scheme, $nc(p_other)->getScheme());
	$set(this, m_userinfo, p_other->getUserinfo());
	$set(this, m_host, p_other->getHost());
	this->m_port = p_other->getPort();
	$set(this, m_regAuthority, p_other->getRegBasedAuthority());
	$set(this, m_path, p_other->getPath());
	$set(this, m_queryString, p_other->getQueryString());
	$set(this, m_fragment, p_other->getFragment());
}

void URI::initialize(URI* p_base, $String* p_uriSpec, bool allowNonAbsoluteURI) {
	$useLocalCurrentObjectStackCache();
	$var($String, uriSpec, p_uriSpec);
	int32_t uriSpecLen = (uriSpec != nullptr) ? $nc(uriSpec)->length() : 0;
	if (p_base == nullptr && uriSpecLen == 0) {
		if (allowNonAbsoluteURI) {
			$set(this, m_path, ""_s);
			return;
		}
		$throwNew($URI$MalformedURIException, "Cannot initialize URI with empty parameters."_s);
	}
	if (uriSpecLen == 0) {
		initialize(p_base);
		return;
	}
	int32_t index = 0;
	int32_t colonIdx = uriSpec->indexOf((int32_t)u':');
	if (colonIdx != -1) {
		int32_t searchFrom = colonIdx - 1;
		int32_t slashIdx = uriSpec->lastIndexOf((int32_t)u'/', searchFrom);
		int32_t queryIdx = uriSpec->lastIndexOf((int32_t)u'?', searchFrom);
		int32_t fragmentIdx = uriSpec->lastIndexOf((int32_t)u'#', searchFrom);
		if (colonIdx == 0 || slashIdx != -1 || queryIdx != -1 || fragmentIdx != -1) {
			if (colonIdx == 0 || (p_base == nullptr && fragmentIdx != 0 && !allowNonAbsoluteURI)) {
				$throwNew($URI$MalformedURIException, "No scheme found in URI."_s);
			}
		} else {
			initializeScheme(uriSpec);
			index = $nc(this->m_scheme)->length() + 1;
			if (colonIdx == uriSpecLen - 1 || uriSpec->charAt(colonIdx + 1) == u'#') {
				$throwNew($URI$MalformedURIException, "Scheme specific part cannot be empty."_s);
			}
		}
	} else if (p_base == nullptr && uriSpec->indexOf((int32_t)u'#') != 0 && !allowNonAbsoluteURI) {
		$throwNew($URI$MalformedURIException, "No scheme found in URI."_s);
	}
	bool var$0 = ((index + 1) < uriSpecLen);
	if (var$0) {
		bool var$1 = uriSpec->charAt(index) == u'/';
		var$0 = (var$1 && uriSpec->charAt(index + 1) == u'/');
	}
	if (var$0) {
		index += 2;
		int32_t startPos = index;
		char16_t testChar = u'\0';
		while (index < uriSpecLen) {
			testChar = uriSpec->charAt(index);
			if (testChar == u'/' || testChar == u'?' || testChar == u'#') {
				break;
			}
			++index;
		}
		if (index > startPos) {
			if (!initializeAuthority($(uriSpec->substring(startPos, index)))) {
				index = startPos - 2;
			}
		} else {
			$set(this, m_host, ""_s);
		}
	}
	initializePath(uriSpec, index);
	if (p_base != nullptr) {
		absolutize(p_base);
	}
}

void URI::initialize(URI* p_base, $String* p_uriSpec) {
	$useLocalCurrentObjectStackCache();
	$var($String, uriSpec, p_uriSpec);
	int32_t uriSpecLen = (uriSpec != nullptr) ? $nc(uriSpec)->length() : 0;
	if (p_base == nullptr && uriSpecLen == 0) {
		$throwNew($URI$MalformedURIException, "Cannot initialize URI with empty parameters."_s);
	}
	if (uriSpecLen == 0) {
		initialize(p_base);
		return;
	}
	int32_t index = 0;
	int32_t colonIdx = uriSpec->indexOf((int32_t)u':');
	if (colonIdx != -1) {
		int32_t searchFrom = colonIdx - 1;
		int32_t slashIdx = uriSpec->lastIndexOf((int32_t)u'/', searchFrom);
		int32_t queryIdx = uriSpec->lastIndexOf((int32_t)u'?', searchFrom);
		int32_t fragmentIdx = uriSpec->lastIndexOf((int32_t)u'#', searchFrom);
		if (colonIdx == 0 || slashIdx != -1 || queryIdx != -1 || fragmentIdx != -1) {
			if (colonIdx == 0 || (p_base == nullptr && fragmentIdx != 0)) {
				$throwNew($URI$MalformedURIException, "No scheme found in URI."_s);
			}
		} else {
			initializeScheme(uriSpec);
			index = $nc(this->m_scheme)->length() + 1;
			if (colonIdx == uriSpecLen - 1 || uriSpec->charAt(colonIdx + 1) == u'#') {
				$throwNew($URI$MalformedURIException, "Scheme specific part cannot be empty."_s);
			}
		}
	} else if (p_base == nullptr && uriSpec->indexOf((int32_t)u'#') != 0) {
		$throwNew($URI$MalformedURIException, "No scheme found in URI."_s);
	}
	bool var$0 = ((index + 1) < uriSpecLen);
	if (var$0) {
		bool var$1 = uriSpec->charAt(index) == u'/';
		var$0 = (var$1 && uriSpec->charAt(index + 1) == u'/');
	}
	if (var$0) {
		index += 2;
		int32_t startPos = index;
		char16_t testChar = u'\0';
		while (index < uriSpecLen) {
			testChar = uriSpec->charAt(index);
			if (testChar == u'/' || testChar == u'?' || testChar == u'#') {
				break;
			}
			++index;
		}
		if (index > startPos) {
			if (!initializeAuthority($(uriSpec->substring(startPos, index)))) {
				index = startPos - 2;
			}
		} else if (index < uriSpecLen) {
			$set(this, m_host, ""_s);
		} else {
			$throwNew($URI$MalformedURIException, "Expected authority."_s);
		}
	}
	initializePath(uriSpec, index);
	if (p_base != nullptr) {
		absolutize(p_base);
	}
}

void URI::absolutize(URI* p_base) {
	$useLocalCurrentObjectStackCache();
	if ($nc(this->m_path)->length() == 0 && this->m_scheme == nullptr && this->m_host == nullptr && this->m_regAuthority == nullptr) {
		$set(this, m_scheme, $nc(p_base)->getScheme());
		$set(this, m_userinfo, p_base->getUserinfo());
		$set(this, m_host, p_base->getHost());
		this->m_port = p_base->getPort();
		$set(this, m_regAuthority, p_base->getRegBasedAuthority());
		$set(this, m_path, p_base->getPath());
		if (this->m_queryString == nullptr) {
			$set(this, m_queryString, p_base->getQueryString());
			if (this->m_fragment == nullptr) {
				$set(this, m_fragment, p_base->getFragment());
			}
		}
		return;
	}
	if (this->m_scheme == nullptr) {
		$set(this, m_scheme, $nc(p_base)->getScheme());
	} else {
		return;
	}
	if (this->m_host == nullptr && this->m_regAuthority == nullptr) {
		$set(this, m_userinfo, $nc(p_base)->getUserinfo());
		$set(this, m_host, p_base->getHost());
		this->m_port = p_base->getPort();
		$set(this, m_regAuthority, p_base->getRegBasedAuthority());
	} else {
		return;
	}
	bool var$0 = $nc(this->m_path)->length() > 0;
	if (var$0 && $nc(this->m_path)->startsWith("/"_s)) {
		return;
	}
	$var($String, path, ""_s);
	$var($String, basePath, $nc(p_base)->getPath());
	if (basePath != nullptr && basePath->length() > 0) {
		int32_t lastSlash = basePath->lastIndexOf((int32_t)u'/');
		if (lastSlash != -1) {
			$assign(path, basePath->substring(0, lastSlash + 1));
		}
	} else if ($nc(this->m_path)->length() > 0) {
		$assign(path, "/"_s);
	}
	$assign(path, path->concat(this->m_path));
	int32_t index = -1;
	while ((index = path->indexOf("/./"_s)) != -1) {
		$assign(path, $(path->substring(0, index + 1))->concat($(path->substring(index + 3))));
	}
	if (path->endsWith("/."_s)) {
		$assign(path, path->substring(0, path->length() - 1));
	}
	index = 1;
	int32_t segIndex = -1;
	$var($String, tempString, nullptr);
	while ((index = path->indexOf("/../"_s, index)) > 0) {
		$assign(tempString, path->substring(0, path->indexOf("/../"_s)));
		segIndex = tempString->lastIndexOf((int32_t)u'/');
		if (segIndex != -1) {
			if (!$(tempString->substring(segIndex))->equals(".."_s)) {
				$assign(path, $(path->substring(0, segIndex + 1))->concat($(path->substring(index + 4))));
				index = segIndex;
			} else {
				index += 4;
			}
		} else {
			index += 4;
		}
	}
	if (path->endsWith("/.."_s)) {
		$assign(tempString, path->substring(0, path->length() - 3));
		segIndex = tempString->lastIndexOf((int32_t)u'/');
		if (segIndex != -1) {
			$assign(path, path->substring(0, segIndex + 1));
		}
	}
	$set(this, m_path, path);
}

void URI::initializeScheme($String* p_uriSpec) {
	int32_t uriSpecLen = $nc(p_uriSpec)->length();
	int32_t index = 0;
	$var($String, scheme, nullptr);
	char16_t testChar = u'\0';
	while (index < uriSpecLen) {
		testChar = p_uriSpec->charAt(index);
		if (testChar == u':' || testChar == u'/' || testChar == u'?' || testChar == u'#') {
			break;
		}
		++index;
	}
	$assign(scheme, p_uriSpec->substring(0, index));
	if (scheme->length() == 0) {
		$throwNew($URI$MalformedURIException, "No scheme found in URI."_s);
	} else {
		setScheme(scheme);
	}
}

bool URI::initializeAuthority($String* p_uriSpec) {
	$useLocalCurrentObjectStackCache();
	int32_t index = 0;
	int32_t start = 0;
	int32_t end = $nc(p_uriSpec)->length();
	char16_t testChar = u'\0';
	$var($String, userinfo, nullptr);
	if (p_uriSpec->indexOf((int32_t)u'@', start) != -1) {
		while (index < end) {
			testChar = p_uriSpec->charAt(index);
			if (testChar == u'@') {
				break;
			}
			++index;
		}
		$assign(userinfo, p_uriSpec->substring(start, index));
		++index;
	}
	$var($String, host, nullptr);
	start = index;
	bool hasPort = false;
	if (index < end) {
		if (p_uriSpec->charAt(start) == u'[') {
			int32_t bracketIndex = p_uriSpec->indexOf((int32_t)u']', start);
			index = (bracketIndex != -1) ? bracketIndex : end;
			if (index + 1 < end && p_uriSpec->charAt(index + 1) == u':') {
				++index;
				hasPort = true;
			} else {
				index = end;
			}
		} else {
			int32_t colonIndex = p_uriSpec->lastIndexOf((int32_t)u':', end);
			index = (colonIndex > start) ? colonIndex : end;
			hasPort = (index != end);
		}
	}
	$assign(host, p_uriSpec->substring(start, index));
	int32_t port = -1;
	if (host->length() > 0) {
		if (hasPort) {
			++index;
			start = index;
			while (index < end) {
				++index;
			}
			$var($String, portStr, p_uriSpec->substring(start, index));
			if (portStr->length() > 0) {
				try {
					port = $Integer::parseInt(portStr);
					if (port == -1) {
						--port;
					}
				} catch ($NumberFormatException& nfe) {
					port = -2;
				}
			}
		}
	}
	if (isValidServerBasedAuthority(host, port, userinfo)) {
		$set(this, m_host, host);
		this->m_port = port;
		$set(this, m_userinfo, userinfo);
		return true;
	} else if (isValidRegistryBasedAuthority(p_uriSpec)) {
		$set(this, m_regAuthority, p_uriSpec);
		return true;
	}
	return false;
}

bool URI::isValidServerBasedAuthority($String* host, int32_t port, $String* userinfo) {
	if (!isWellFormedAddress(host)) {
		return false;
	}
	if (port < -1 || port > 0x0000FFFF) {
		return false;
	}
	if (userinfo != nullptr) {
		int32_t index = 0;
		int32_t end = userinfo->length();
		char16_t testChar = u'\0';
		while (index < end) {
			testChar = userinfo->charAt(index);
			if (testChar == u'%') {
				bool var$0 = index + 2 >= end || !isHex(userinfo->charAt(index + 1));
				if (var$0 || !isHex(userinfo->charAt(index + 2))) {
					return false;
				}
				index += 2;
			} else if (!isUserinfoCharacter(testChar)) {
				return false;
			}
			++index;
		}
	}
	return true;
}

bool URI::isValidRegistryBasedAuthority($String* authority) {
	int32_t index = 0;
	int32_t end = $nc(authority)->length();
	char16_t testChar = 0;
	while (index < end) {
		testChar = authority->charAt(index);
		if (testChar == u'%') {
			bool var$0 = index + 2 >= end || !isHex(authority->charAt(index + 1));
			if (var$0 || !isHex(authority->charAt(index + 2))) {
				return false;
			}
			index += 2;
		} else if (!isPathCharacter(testChar)) {
			return false;
		}
		++index;
	}
	return true;
}

void URI::initializePath($String* p_uriSpec, int32_t p_nStartIndex) {
	$useLocalCurrentObjectStackCache();
	if (p_uriSpec == nullptr) {
		$throwNew($URI$MalformedURIException, "Cannot initialize path from null string!"_s);
	}
	int32_t index = p_nStartIndex;
	int32_t start = p_nStartIndex;
	int32_t end = $nc(p_uriSpec)->length();
	char16_t testChar = u'\0';
	if (start < end) {
		bool var$0 = getScheme() == nullptr;
		if (var$0 || p_uriSpec->charAt(start) == u'/') {
			while (index < end) {
				testChar = p_uriSpec->charAt(index);
				if (testChar == u'%') {
					bool var$1 = index + 2 >= end || !isHex(p_uriSpec->charAt(index + 1));
					if (var$1 || !isHex(p_uriSpec->charAt(index + 2))) {
						$throwNew($URI$MalformedURIException, "Path contains invalid escape sequence!"_s);
					}
					index += 2;
				} else if (!isPathCharacter(testChar)) {
					if (testChar == u'?' || testChar == u'#') {
						break;
					}
					$throwNew($URI$MalformedURIException, $$str({"Path contains invalid character: "_s, $$str(testChar)}));
				}
				++index;
			}
		} else {
			while (index < end) {
				testChar = p_uriSpec->charAt(index);
				if (testChar == u'?' || testChar == u'#') {
					break;
				}
				if (testChar == u'%') {
					bool var$2 = index + 2 >= end || !isHex(p_uriSpec->charAt(index + 1));
					if (var$2 || !isHex(p_uriSpec->charAt(index + 2))) {
						$throwNew($URI$MalformedURIException, "Opaque part contains invalid escape sequence!"_s);
					}
					index += 2;
				} else if (!isURICharacter(testChar)) {
					$throwNew($URI$MalformedURIException, $$str({"Opaque part contains invalid character: "_s, $$str(testChar)}));
				}
				++index;
			}
		}
	}
	$set(this, m_path, p_uriSpec->substring(start, index));
	if (testChar == u'?') {
		++index;
		start = index;
		while (index < end) {
			testChar = p_uriSpec->charAt(index);
			if (testChar == u'#') {
				break;
			}
			if (testChar == u'%') {
				bool var$3 = index + 2 >= end || !isHex(p_uriSpec->charAt(index + 1));
				if (var$3 || !isHex(p_uriSpec->charAt(index + 2))) {
					$throwNew($URI$MalformedURIException, "Query string contains invalid escape sequence!"_s);
				}
				index += 2;
			} else if (!isURICharacter(testChar)) {
				$throwNew($URI$MalformedURIException, $$str({"Query string contains invalid character: "_s, $$str(testChar)}));
			}
			++index;
		}
		$set(this, m_queryString, p_uriSpec->substring(start, index));
	}
	if (testChar == u'#') {
		++index;
		start = index;
		while (index < end) {
			testChar = p_uriSpec->charAt(index);
			if (testChar == u'%') {
				bool var$4 = index + 2 >= end || !isHex(p_uriSpec->charAt(index + 1));
				if (var$4 || !isHex(p_uriSpec->charAt(index + 2))) {
					$throwNew($URI$MalformedURIException, "Fragment contains invalid escape sequence!"_s);
				}
				index += 2;
			} else if (!isURICharacter(testChar)) {
				$throwNew($URI$MalformedURIException, $$str({"Fragment contains invalid character: "_s, $$str(testChar)}));
			}
			++index;
		}
		$set(this, m_fragment, p_uriSpec->substring(start, index));
	}
}

$String* URI::getScheme() {
	return this->m_scheme;
}

$String* URI::getSchemeSpecificPart() {
	$var($StringBuilder, schemespec, $new($StringBuilder));
	if (this->m_host != nullptr || this->m_regAuthority != nullptr) {
		schemespec->append("//"_s);
		if (this->m_host != nullptr) {
			if (this->m_userinfo != nullptr) {
				schemespec->append(this->m_userinfo);
				schemespec->append(u'@');
			}
			schemespec->append(this->m_host);
			if (this->m_port != -1) {
				schemespec->append(u':');
				schemespec->append(this->m_port);
			}
		} else {
			schemespec->append(this->m_regAuthority);
		}
	}
	if (this->m_path != nullptr) {
		schemespec->append((this->m_path));
	}
	if (this->m_queryString != nullptr) {
		schemespec->append(u'?');
		schemespec->append(this->m_queryString);
	}
	if (this->m_fragment != nullptr) {
		schemespec->append(u'#');
		schemespec->append(this->m_fragment);
	}
	return schemespec->toString();
}

$String* URI::getUserinfo() {
	return this->m_userinfo;
}

$String* URI::getHost() {
	return this->m_host;
}

int32_t URI::getPort() {
	return this->m_port;
}

$String* URI::getRegBasedAuthority() {
	return this->m_regAuthority;
}

$String* URI::getAuthority() {
	$var($StringBuilder, authority, $new($StringBuilder));
	if (this->m_host != nullptr || this->m_regAuthority != nullptr) {
		authority->append("//"_s);
		if (this->m_host != nullptr) {
			if (this->m_userinfo != nullptr) {
				authority->append(this->m_userinfo);
				authority->append(u'@');
			}
			authority->append(this->m_host);
			if (this->m_port != -1) {
				authority->append(u':');
				authority->append(this->m_port);
			}
		} else {
			authority->append(this->m_regAuthority);
		}
	}
	return authority->toString();
}

$String* URI::getPath(bool p_includeQueryString, bool p_includeFragment) {
	$var($StringBuilder, pathString, $new($StringBuilder, this->m_path));
	if (p_includeQueryString && this->m_queryString != nullptr) {
		pathString->append(u'?');
		pathString->append(this->m_queryString);
	}
	if (p_includeFragment && this->m_fragment != nullptr) {
		pathString->append(u'#');
		pathString->append(this->m_fragment);
	}
	return pathString->toString();
}

$String* URI::getPath() {
	return this->m_path;
}

$String* URI::getQueryString() {
	return this->m_queryString;
}

$String* URI::getFragment() {
	return this->m_fragment;
}

void URI::setScheme($String* p_scheme) {
	if (p_scheme == nullptr) {
		$throwNew($URI$MalformedURIException, "Cannot set scheme from null string!"_s);
	}
	if (!isConformantSchemeName(p_scheme)) {
		$throwNew($URI$MalformedURIException, "The scheme is not conformant."_s);
	}
	$set(this, m_scheme, $nc(p_scheme)->toLowerCase());
}

void URI::setUserinfo($String* p_userinfo) {
	$useLocalCurrentObjectStackCache();
	if (p_userinfo == nullptr) {
		$set(this, m_userinfo, nullptr);
		return;
	} else {
		if (this->m_host == nullptr) {
			$throwNew($URI$MalformedURIException, "Userinfo cannot be set when host is null!"_s);
		}
		int32_t index = 0;
		int32_t end = $nc(p_userinfo)->length();
		char16_t testChar = u'\0';
		while (index < end) {
			testChar = p_userinfo->charAt(index);
			if (testChar == u'%') {
				bool var$0 = index + 2 >= end || !isHex(p_userinfo->charAt(index + 1));
				if (var$0 || !isHex(p_userinfo->charAt(index + 2))) {
					$throwNew($URI$MalformedURIException, "Userinfo contains invalid escape sequence!"_s);
				}
			} else if (!isUserinfoCharacter(testChar)) {
				$throwNew($URI$MalformedURIException, $$str({"Userinfo contains invalid character:"_s, $$str(testChar)}));
			}
			++index;
		}
	}
	$set(this, m_userinfo, p_userinfo);
}

void URI::setHost($String* p_host) {
	if (p_host == nullptr || $nc(p_host)->length() == 0) {
		if (p_host != nullptr) {
			$set(this, m_regAuthority, nullptr);
		}
		$set(this, m_host, p_host);
		$set(this, m_userinfo, nullptr);
		this->m_port = -1;
		return;
	} else if (!isWellFormedAddress(p_host)) {
		$throwNew($URI$MalformedURIException, "Host is not a well formed address!"_s);
	}
	$set(this, m_host, p_host);
	$set(this, m_regAuthority, nullptr);
}

void URI::setPort(int32_t p_port) {
	if (p_port >= 0 && p_port <= 0x0000FFFF) {
		if (this->m_host == nullptr) {
			$throwNew($URI$MalformedURIException, "Port cannot be set when host is null!"_s);
		}
	} else if (p_port != -1) {
		$throwNew($URI$MalformedURIException, "Invalid port number!"_s);
	}
	this->m_port = p_port;
}

void URI::setRegBasedAuthority($String* authority) {
	if (authority == nullptr) {
		$set(this, m_regAuthority, nullptr);
		return;
	} else {
		bool var$3 = $nc(authority)->length() < 1;
		bool var$2 = var$3 || !isValidRegistryBasedAuthority(authority);
		if (var$2 || $nc(authority)->indexOf((int32_t)u'/') != -1) {
			$throwNew($URI$MalformedURIException, "Registry based authority is not well formed."_s);
		}
	}
	$set(this, m_regAuthority, authority);
	$set(this, m_host, nullptr);
	$set(this, m_userinfo, nullptr);
	this->m_port = -1;
}

void URI::setPath($String* p_path) {
	if (p_path == nullptr) {
		$set(this, m_path, nullptr);
		$set(this, m_queryString, nullptr);
		$set(this, m_fragment, nullptr);
	} else {
		initializePath(p_path, 0);
	}
}

void URI::appendPath($String* p_addToPath) {
	$useLocalCurrentObjectStackCache();
	if (p_addToPath == nullptr || $($nc(p_addToPath)->trim())->length() == 0) {
		return;
	}
	if (!isURIString(p_addToPath)) {
		$throwNew($URI$MalformedURIException, "Path contains invalid character!"_s);
	}
	if (this->m_path == nullptr || $($nc(this->m_path)->trim())->length() == 0) {
		if ($nc(p_addToPath)->startsWith("/"_s)) {
			$set(this, m_path, p_addToPath);
		} else {
			$set(this, m_path, $str({"/"_s, p_addToPath}));
		}
	} else if ($nc(this->m_path)->endsWith("/"_s)) {
		if ($nc(p_addToPath)->startsWith("/"_s)) {
			$set(this, m_path, $nc(this->m_path)->concat($(p_addToPath->substring(1))));
		} else {
			$set(this, m_path, $nc(this->m_path)->concat(p_addToPath));
		}
	} else if ($nc(p_addToPath)->startsWith("/"_s)) {
		$set(this, m_path, $nc(this->m_path)->concat(p_addToPath));
	} else {
		$set(this, m_path, $nc(this->m_path)->concat($$str({"/"_s, p_addToPath})));
	}
}

void URI::setQueryString($String* p_queryString) {
	if (p_queryString == nullptr) {
		$set(this, m_queryString, nullptr);
	} else if (!isGenericURI()) {
		$throwNew($URI$MalformedURIException, "Query string can only be set for a generic URI!"_s);
	} else if (getPath() == nullptr) {
		$throwNew($URI$MalformedURIException, "Query string cannot be set when path is null!"_s);
	} else if (!isURIString(p_queryString)) {
		$throwNew($URI$MalformedURIException, "Query string contains invalid character!"_s);
	} else {
		$set(this, m_queryString, p_queryString);
	}
}

void URI::setFragment($String* p_fragment) {
	if (p_fragment == nullptr) {
		$set(this, m_fragment, nullptr);
	} else if (!isGenericURI()) {
		$throwNew($URI$MalformedURIException, "Fragment can only be set for a generic URI!"_s);
	} else if (getPath() == nullptr) {
		$throwNew($URI$MalformedURIException, "Fragment cannot be set when path is null!"_s);
	} else if (!isURIString(p_fragment)) {
		$throwNew($URI$MalformedURIException, "Fragment contains invalid character!"_s);
	} else {
		$set(this, m_fragment, p_fragment);
	}
}

bool URI::equals(Object$* p_test) {
	if ($instanceOf(URI, p_test)) {
		$var(URI, testURI, $cast(URI, p_test));
		bool var$4 = ((this->m_scheme == nullptr && $nc(testURI)->m_scheme == nullptr) || (this->m_scheme != nullptr && $nc(testURI)->m_scheme != nullptr && $nc(this->m_scheme)->equals(testURI->m_scheme)));
		bool var$3 = var$4 && ((this->m_userinfo == nullptr && testURI->m_userinfo == nullptr) || (this->m_userinfo != nullptr && $nc(testURI)->m_userinfo != nullptr && $nc(this->m_userinfo)->equals(testURI->m_userinfo)));
		bool var$2 = var$3 && ((this->m_host == nullptr && testURI->m_host == nullptr) || (this->m_host != nullptr && $nc(testURI)->m_host != nullptr && $nc(this->m_host)->equals(testURI->m_host))) && this->m_port == testURI->m_port;
		bool var$1 = var$2 && ((this->m_path == nullptr && testURI->m_path == nullptr) || (this->m_path != nullptr && $nc(testURI)->m_path != nullptr && $nc(this->m_path)->equals(testURI->m_path)));
		bool var$0 = var$1 && ((this->m_queryString == nullptr && testURI->m_queryString == nullptr) || (this->m_queryString != nullptr && $nc(testURI)->m_queryString != nullptr && $nc(this->m_queryString)->equals(testURI->m_queryString)));
		if (var$0 && ((this->m_fragment == nullptr && testURI->m_fragment == nullptr) || (this->m_fragment != nullptr && $nc(testURI)->m_fragment != nullptr && $nc(this->m_fragment)->equals(testURI->m_fragment)))) {
			return true;
		}
	}
	return false;
}

int32_t URI::hashCode() {
	int32_t hash = 5;
	hash = 47 * hash + $Objects::hashCode(this->m_scheme);
	hash = 47 * hash + $Objects::hashCode(this->m_userinfo);
	hash = 47 * hash + $Objects::hashCode(this->m_host);
	hash = 47 * hash + this->m_port;
	hash = 47 * hash + $Objects::hashCode(this->m_path);
	hash = 47 * hash + $Objects::hashCode(this->m_queryString);
	hash = 47 * hash + $Objects::hashCode(this->m_fragment);
	return hash;
}

$String* URI::toString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, uriSpecString, $new($StringBuilder));
	if (this->m_scheme != nullptr) {
		uriSpecString->append(this->m_scheme);
		uriSpecString->append(u':');
	}
	uriSpecString->append($(getSchemeSpecificPart()));
	return uriSpecString->toString();
}

bool URI::isGenericURI() {
	return (this->m_host != nullptr);
}

bool URI::isAbsoluteURI() {
	return (this->m_scheme != nullptr);
}

bool URI::isConformantSchemeName($String* p_scheme) {
	$init(URI);
	if (p_scheme == nullptr || $($nc(p_scheme)->trim())->length() == 0) {
		return false;
	}
	if (!isAlpha($nc(p_scheme)->charAt(0))) {
		return false;
	}
	char16_t testChar = 0;
	int32_t schemeLength = $nc(p_scheme)->length();
	for (int32_t i = 1; i < schemeLength; ++i) {
		testChar = p_scheme->charAt(i);
		if (!isSchemeCharacter(testChar)) {
			return false;
		}
	}
	return true;
}

bool URI::isWellFormedAddress($String* address) {
	$init(URI);
	if (address == nullptr) {
		return false;
	}
	int32_t addrLength = $nc(address)->length();
	if (addrLength == 0) {
		return false;
	}
	if (address->startsWith("["_s)) {
		return isWellFormedIPv6Reference(address);
	}
	bool var$1 = address->startsWith("."_s);
	bool var$0 = var$1 || address->startsWith("-"_s);
	if (var$0 || address->endsWith("-"_s)) {
		return false;
	}
	int32_t index = address->lastIndexOf((int32_t)u'.');
	if (address->endsWith("."_s)) {
		index = $(address->substring(0, index))->lastIndexOf((int32_t)u'.');
	}
	if (index + 1 < addrLength && isDigit(address->charAt(index + 1))) {
		return isWellFormedIPv4Address(address);
	} else {
		if (addrLength > 255) {
			return false;
		}
		char16_t testChar = 0;
		int32_t labelCharCount = 0;
		for (int32_t i = 0; i < addrLength; ++i) {
			testChar = address->charAt(i);
			if (testChar == u'.') {
				if (!isAlphanum(address->charAt(i - 1))) {
					return false;
				}
				if (i + 1 < addrLength && !isAlphanum(address->charAt(i + 1))) {
					return false;
				}
				labelCharCount = 0;
			} else if (!isAlphanum(testChar) && testChar != u'-') {
				return false;
			} else if (++labelCharCount > 63) {
				return false;
			}
		}
	}
	return true;
}

bool URI::isWellFormedIPv4Address($String* address) {
	$init(URI);
	int32_t addrLength = $nc(address)->length();
	char16_t testChar = 0;
	int32_t numDots = 0;
	int32_t numDigits = 0;
	for (int32_t i = 0; i < addrLength; ++i) {
		testChar = address->charAt(i);
		if (testChar == u'.') {
			bool var$0 = (i > 0 && !isDigit(address->charAt(i - 1)));
			if (var$0 || (i + 1 < addrLength && !isDigit(address->charAt(i + 1)))) {
				return false;
			}
			numDigits = 0;
			if (++numDots > 3) {
				return false;
			}
		} else if (!isDigit(testChar)) {
			return false;
		} else if (++numDigits > 3) {
			return false;
		} else if (numDigits == 3) {
			char16_t first = address->charAt(i - 2);
			char16_t second = address->charAt(i - 1);
			if (!(first < u'2' || (first == u'2' && (second < u'5' || (second == u'5' && testChar <= u'5'))))) {
				return false;
			}
		}
	}
	return (numDots == 3);
}

bool URI::isWellFormedIPv6Reference($String* address) {
	$init(URI);
	$useLocalCurrentObjectStackCache();
	int32_t addrLength = $nc(address)->length();
	int32_t index = 1;
	int32_t end = addrLength - 1;
	bool var$0 = addrLength > 2 && address->charAt(0) == u'[';
	if (!(var$0 && address->charAt(end) == u']')) {
		return false;
	}
	$var($ints, counter, $new($ints, 1));
	index = scanHexSequence(address, index, end, counter);
	if (index == -1) {
		return false;
	} else if (index == end) {
		return (counter->get(0) == 8);
	}
	if (index + 1 < end && address->charAt(index) == u':') {
		if (address->charAt(index + 1) == u':') {
			if (++(*counter)[0] > 8) {
				return false;
			}
			index += 2;
			if (index == end) {
				return true;
			}
		} else {
			return (counter->get(0) == 6) && isWellFormedIPv4Address($(address->substring(index + 1, end)));
		}
	} else {
		return false;
	}
	int32_t prevCount = counter->get(0);
	index = scanHexSequence(address, index, end, counter);
	return (index == end) || (index != -1 && isWellFormedIPv4Address($(address->substring((counter->get(0) > prevCount) ? index + 1 : index, end))));
}

int32_t URI::scanHexSequence($String* address, int32_t index, int32_t end, $ints* counter) {
	$init(URI);
	char16_t testChar = 0;
	int32_t numDigits = 0;
	int32_t start = index;
	for (; index < end; ++index) {
		testChar = $nc(address)->charAt(index);
		if (testChar == u':') {
			if (numDigits > 0 && ++(*$nc(counter))[0] > 8) {
				return -1;
			}
			if (numDigits == 0 || ((index + 1 < end) && address->charAt(index + 1) == u':')) {
				return index;
			}
			numDigits = 0;
		} else if (!isHex(testChar)) {
			if (testChar == u'.' && numDigits < 4 && numDigits > 0 && $nc(counter)->get(0) <= 6) {
				int32_t back = index - numDigits - 1;
				return (back >= start) ? back : (back + 1);
			}
			return -1;
		} else if (++numDigits > 4) {
			return -1;
		}
	}
	return (numDigits > 0 && ++(*$nc(counter))[0] <= 8) ? end : -1;
}

bool URI::isDigit(char16_t p_char) {
	$init(URI);
	return p_char >= u'0' && p_char <= u'9';
}

bool URI::isHex(char16_t p_char) {
	$init(URI);
	return (p_char <= u'f' && ((int32_t)($nc(URI::fgLookupTable)->get(p_char) & (uint32_t)URI::ASCII_HEX_CHARACTERS)) != 0);
}

bool URI::isAlpha(char16_t p_char) {
	$init(URI);
	return ((p_char >= u'a' && p_char <= u'z') || (p_char >= u'A' && p_char <= u'Z'));
}

bool URI::isAlphanum(char16_t p_char) {
	$init(URI);
	return (p_char <= u'z' && ((int32_t)($nc(URI::fgLookupTable)->get(p_char) & (uint32_t)URI::MASK_ALPHA_NUMERIC)) != 0);
}

bool URI::isReservedCharacter(char16_t p_char) {
	$init(URI);
	return (p_char <= u']' && ((int32_t)($nc(URI::fgLookupTable)->get(p_char) & (uint32_t)URI::RESERVED_CHARACTERS)) != 0);
}

bool URI::isUnreservedCharacter(char16_t p_char) {
	$init(URI);
	return (p_char <= u'~' && ((int32_t)($nc(URI::fgLookupTable)->get(p_char) & (uint32_t)URI::MASK_UNRESERVED_MASK)) != 0);
}

bool URI::isURICharacter(char16_t p_char) {
	$init(URI);
	return (p_char <= u'~' && ((int32_t)($nc(URI::fgLookupTable)->get(p_char) & (uint32_t)URI::MASK_URI_CHARACTER)) != 0);
}

bool URI::isSchemeCharacter(char16_t p_char) {
	$init(URI);
	return (p_char <= u'z' && ((int32_t)($nc(URI::fgLookupTable)->get(p_char) & (uint32_t)URI::MASK_SCHEME_CHARACTER)) != 0);
}

bool URI::isUserinfoCharacter(char16_t p_char) {
	$init(URI);
	return (p_char <= u'z' && ((int32_t)($nc(URI::fgLookupTable)->get(p_char) & (uint32_t)URI::MASK_USERINFO_CHARACTER)) != 0);
}

bool URI::isPathCharacter(char16_t p_char) {
	$init(URI);
	return (p_char <= u'~' && ((int32_t)($nc(URI::fgLookupTable)->get(p_char) & (uint32_t)URI::MASK_PATH_CHARACTER)) != 0);
}

bool URI::isURIString($String* p_uric) {
	$init(URI);
	if (p_uric == nullptr) {
		return false;
	}
	int32_t end = $nc(p_uric)->length();
	char16_t testChar = u'\0';
	for (int32_t i = 0; i < end; ++i) {
		testChar = p_uric->charAt(i);
		if (testChar == u'%') {
			bool var$0 = i + 2 >= end || !isHex(p_uric->charAt(i + 1));
			if (var$0 || !isHex(p_uric->charAt(i + 2))) {
				return false;
			} else {
				i += 2;
				continue;
			}
		}
		if (isURICharacter(testChar)) {
			continue;
		} else {
			return false;
		}
	}
	return true;
}

void clinit$URI($Class* class$) {
	$assignStatic(URI::fgLookupTable, $new($bytes, 128));
	{
		for (int32_t i = u'0'; i <= u'9'; ++i) {
			(*$nc(URI::fgLookupTable))[i] |= URI::ASCII_DIGIT_CHARACTERS | URI::ASCII_HEX_CHARACTERS;
		}
		for (int32_t i = u'A'; i <= u'F'; ++i) {
			(*$nc(URI::fgLookupTable))[i] |= URI::ASCII_ALPHA_CHARACTERS | URI::ASCII_HEX_CHARACTERS;
			(*$nc(URI::fgLookupTable))[i + 32] |= URI::ASCII_ALPHA_CHARACTERS | URI::ASCII_HEX_CHARACTERS;
		}
		for (int32_t i = u'G'; i <= u'Z'; ++i) {
			(*$nc(URI::fgLookupTable))[i] |= URI::ASCII_ALPHA_CHARACTERS;
			(*$nc(URI::fgLookupTable))[i + 32] |= URI::ASCII_ALPHA_CHARACTERS;
		}
		(*$nc(URI::fgLookupTable))[u';'] |= URI::RESERVED_CHARACTERS;
		(*$nc(URI::fgLookupTable))[u'/'] |= URI::RESERVED_CHARACTERS;
		(*$nc(URI::fgLookupTable))[u'?'] |= URI::RESERVED_CHARACTERS;
		(*$nc(URI::fgLookupTable))[u':'] |= URI::RESERVED_CHARACTERS;
		(*$nc(URI::fgLookupTable))[u'@'] |= URI::RESERVED_CHARACTERS;
		(*$nc(URI::fgLookupTable))[u'&'] |= URI::RESERVED_CHARACTERS;
		(*$nc(URI::fgLookupTable))[u'='] |= URI::RESERVED_CHARACTERS;
		(*$nc(URI::fgLookupTable))[u'+'] |= URI::RESERVED_CHARACTERS;
		(*$nc(URI::fgLookupTable))[u'$'] |= URI::RESERVED_CHARACTERS;
		(*$nc(URI::fgLookupTable))[u','] |= URI::RESERVED_CHARACTERS;
		(*$nc(URI::fgLookupTable))[u'['] |= URI::RESERVED_CHARACTERS;
		(*$nc(URI::fgLookupTable))[u']'] |= URI::RESERVED_CHARACTERS;
		(*$nc(URI::fgLookupTable))[u'-'] |= URI::MARK_CHARACTERS;
		(*$nc(URI::fgLookupTable))[u'_'] |= URI::MARK_CHARACTERS;
		(*$nc(URI::fgLookupTable))[u'.'] |= URI::MARK_CHARACTERS;
		(*$nc(URI::fgLookupTable))[u'!'] |= URI::MARK_CHARACTERS;
		(*$nc(URI::fgLookupTable))[u'~'] |= URI::MARK_CHARACTERS;
		(*$nc(URI::fgLookupTable))[u'*'] |= URI::MARK_CHARACTERS;
		(*$nc(URI::fgLookupTable))[u'\''] |= URI::MARK_CHARACTERS;
		(*$nc(URI::fgLookupTable))[u'('] |= URI::MARK_CHARACTERS;
		(*$nc(URI::fgLookupTable))[u')'] |= URI::MARK_CHARACTERS;
		(*$nc(URI::fgLookupTable))[u'+'] |= URI::SCHEME_CHARACTERS;
		(*$nc(URI::fgLookupTable))[u'-'] |= URI::SCHEME_CHARACTERS;
		(*$nc(URI::fgLookupTable))[u'.'] |= URI::SCHEME_CHARACTERS;
		(*$nc(URI::fgLookupTable))[u';'] |= URI::USERINFO_CHARACTERS;
		(*$nc(URI::fgLookupTable))[u':'] |= URI::USERINFO_CHARACTERS;
		(*$nc(URI::fgLookupTable))[u'&'] |= URI::USERINFO_CHARACTERS;
		(*$nc(URI::fgLookupTable))[u'='] |= URI::USERINFO_CHARACTERS;
		(*$nc(URI::fgLookupTable))[u'+'] |= URI::USERINFO_CHARACTERS;
		(*$nc(URI::fgLookupTable))[u'$'] |= URI::USERINFO_CHARACTERS;
		(*$nc(URI::fgLookupTable))[u','] |= URI::USERINFO_CHARACTERS;
		(*$nc(URI::fgLookupTable))[u';'] |= URI::PATH_CHARACTERS;
		(*$nc(URI::fgLookupTable))[u'/'] |= URI::PATH_CHARACTERS;
		(*$nc(URI::fgLookupTable))[u':'] |= URI::PATH_CHARACTERS;
		(*$nc(URI::fgLookupTable))[u'@'] |= URI::PATH_CHARACTERS;
		(*$nc(URI::fgLookupTable))[u'&'] |= URI::PATH_CHARACTERS;
		(*$nc(URI::fgLookupTable))[u'='] |= URI::PATH_CHARACTERS;
		(*$nc(URI::fgLookupTable))[u'+'] |= URI::PATH_CHARACTERS;
		(*$nc(URI::fgLookupTable))[u'$'] |= URI::PATH_CHARACTERS;
		(*$nc(URI::fgLookupTable))[u','] |= URI::PATH_CHARACTERS;
	}
	URI::DEBUG = false;
}

URI::URI() {
}

$Class* URI::load$($String* name, bool initialize) {
	$loadClass(URI, name, initialize, &_URI_ClassInfo_, clinit$URI, allocate$URI);
	return class$;
}

$Class* URI::class$ = nullptr;

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com