#ifndef _com_sun_org_apache_xerces_internal_util_URI_h_
#define _com_sun_org_apache_xerces_internal_util_URI_h_
//$ class com.sun.org.apache.xerces.internal.util.URI
//$ extends java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>

#pragma push_macro("ASCII_ALPHA_CHARACTERS")
#undef ASCII_ALPHA_CHARACTERS
#pragma push_macro("ASCII_DIGIT_CHARACTERS")
#undef ASCII_DIGIT_CHARACTERS
#pragma push_macro("ASCII_HEX_CHARACTERS")
#undef ASCII_HEX_CHARACTERS
#pragma push_macro("DEBUG")
#undef DEBUG
#pragma push_macro("MARK_CHARACTERS")
#undef MARK_CHARACTERS
#pragma push_macro("MASK_ALPHA_NUMERIC")
#undef MASK_ALPHA_NUMERIC
#pragma push_macro("MASK_PATH_CHARACTER")
#undef MASK_PATH_CHARACTER
#pragma push_macro("MASK_SCHEME_CHARACTER")
#undef MASK_SCHEME_CHARACTER
#pragma push_macro("MASK_UNRESERVED_MASK")
#undef MASK_UNRESERVED_MASK
#pragma push_macro("MASK_URI_CHARACTER")
#undef MASK_URI_CHARACTER
#pragma push_macro("MASK_USERINFO_CHARACTER")
#undef MASK_USERINFO_CHARACTER
#pragma push_macro("PATH_CHARACTERS")
#undef PATH_CHARACTERS
#pragma push_macro("RESERVED_CHARACTERS")
#undef RESERVED_CHARACTERS
#pragma push_macro("SCHEME_CHARACTERS")
#undef SCHEME_CHARACTERS
#pragma push_macro("URI")
#undef URI
#pragma push_macro("USERINFO_CHARACTERS")
#undef USERINFO_CHARACTERS

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace util {

class URI : public ::java::io::Serializable {
	$class(URI, 0, ::java::io::Serializable)
public:
	URI();
	void init$();
	void init$(::com::sun::org::apache::xerces::internal::util::URI* p_other);
	void init$($String* p_uriSpec);
	void init$($String* p_uriSpec, bool allowNonAbsoluteURI);
	void init$(::com::sun::org::apache::xerces::internal::util::URI* p_base, $String* p_uriSpec);
	void init$(::com::sun::org::apache::xerces::internal::util::URI* p_base, $String* p_uriSpec, bool allowNonAbsoluteURI);
	void init$($String* p_scheme, $String* p_schemeSpecificPart);
	void init$($String* p_scheme, $String* p_host, $String* p_path, $String* p_queryString, $String* p_fragment);
	void init$($String* p_scheme, $String* p_userinfo, $String* p_host, int32_t p_port, $String* p_path, $String* p_queryString, $String* p_fragment);
	virtual void absolutize(::com::sun::org::apache::xerces::internal::util::URI* p_base);
	virtual void appendPath($String* p_addToPath);
	virtual bool equals(Object$* p_test) override;
	virtual $String* getAuthority();
	virtual $String* getFragment();
	virtual $String* getHost();
	virtual $String* getPath(bool p_includeQueryString, bool p_includeFragment);
	virtual $String* getPath();
	virtual int32_t getPort();
	virtual $String* getQueryString();
	virtual $String* getRegBasedAuthority();
	virtual $String* getScheme();
	virtual $String* getSchemeSpecificPart();
	virtual $String* getUserinfo();
	virtual int32_t hashCode() override;
	void initialize(::com::sun::org::apache::xerces::internal::util::URI* p_other);
	void initialize(::com::sun::org::apache::xerces::internal::util::URI* p_base, $String* p_uriSpec, bool allowNonAbsoluteURI);
	void initialize(::com::sun::org::apache::xerces::internal::util::URI* p_base, $String* p_uriSpec);
	bool initializeAuthority($String* p_uriSpec);
	void initializePath($String* p_uriSpec, int32_t p_nStartIndex);
	void initializeScheme($String* p_uriSpec);
	virtual bool isAbsoluteURI();
	static bool isAlpha(char16_t p_char);
	static bool isAlphanum(char16_t p_char);
	static bool isConformantSchemeName($String* p_scheme);
	static bool isDigit(char16_t p_char);
	virtual bool isGenericURI();
	static bool isHex(char16_t p_char);
	static bool isPathCharacter(char16_t p_char);
	static bool isReservedCharacter(char16_t p_char);
	static bool isSchemeCharacter(char16_t p_char);
	static bool isURICharacter(char16_t p_char);
	static bool isURIString($String* p_uric);
	static bool isUnreservedCharacter(char16_t p_char);
	static bool isUserinfoCharacter(char16_t p_char);
	bool isValidRegistryBasedAuthority($String* authority);
	bool isValidServerBasedAuthority($String* host, int32_t port, $String* userinfo);
	static bool isWellFormedAddress($String* address);
	static bool isWellFormedIPv4Address($String* address);
	static bool isWellFormedIPv6Reference($String* address);
	static int32_t scanHexSequence($String* address, int32_t index, int32_t end, $ints* counter);
	virtual void setFragment($String* p_fragment);
	virtual void setHost($String* p_host);
	virtual void setPath($String* p_path);
	virtual void setPort(int32_t p_port);
	virtual void setQueryString($String* p_queryString);
	virtual void setRegBasedAuthority($String* authority);
	virtual void setScheme($String* p_scheme);
	virtual void setUserinfo($String* p_userinfo);
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0x163B2B5DE215849E;
	static $bytes* fgLookupTable;
	static const int32_t RESERVED_CHARACTERS = 1;
	static const int32_t MARK_CHARACTERS = 2;
	static const int32_t SCHEME_CHARACTERS = 4;
	static const int32_t USERINFO_CHARACTERS = 8;
	static const int32_t ASCII_ALPHA_CHARACTERS = 16;
	static const int32_t ASCII_DIGIT_CHARACTERS = 32;
	static const int32_t ASCII_HEX_CHARACTERS = 64;
	static const int32_t PATH_CHARACTERS = 128;
	static const int32_t MASK_ALPHA_NUMERIC = 48; // ASCII_ALPHA_CHARACTERS | ASCII_DIGIT_CHARACTERS
	static const int32_t MASK_UNRESERVED_MASK = 50; // MASK_ALPHA_NUMERIC | MARK_CHARACTERS
	static const int32_t MASK_URI_CHARACTER = 51; // MASK_UNRESERVED_MASK | RESERVED_CHARACTERS
	static const int32_t MASK_SCHEME_CHARACTER = 52; // MASK_ALPHA_NUMERIC | SCHEME_CHARACTERS
	static const int32_t MASK_USERINFO_CHARACTER = 58; // MASK_UNRESERVED_MASK | USERINFO_CHARACTERS
	static const int32_t MASK_PATH_CHARACTER = 178; // MASK_UNRESERVED_MASK | PATH_CHARACTERS
	$String* m_scheme = nullptr;
	$String* m_userinfo = nullptr;
	$String* m_host = nullptr;
	int32_t m_port = 0;
	$String* m_regAuthority = nullptr;
	$String* m_path = nullptr;
	$String* m_queryString = nullptr;
	$String* m_fragment = nullptr;
	static bool DEBUG;
};

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("ASCII_ALPHA_CHARACTERS")
#pragma pop_macro("ASCII_DIGIT_CHARACTERS")
#pragma pop_macro("ASCII_HEX_CHARACTERS")
#pragma pop_macro("DEBUG")
#pragma pop_macro("MARK_CHARACTERS")
#pragma pop_macro("MASK_ALPHA_NUMERIC")
#pragma pop_macro("MASK_PATH_CHARACTER")
#pragma pop_macro("MASK_SCHEME_CHARACTER")
#pragma pop_macro("MASK_UNRESERVED_MASK")
#pragma pop_macro("MASK_URI_CHARACTER")
#pragma pop_macro("MASK_USERINFO_CHARACTER")
#pragma pop_macro("PATH_CHARACTERS")
#pragma pop_macro("RESERVED_CHARACTERS")
#pragma pop_macro("SCHEME_CHARACTERS")
#pragma pop_macro("URI")
#pragma pop_macro("USERINFO_CHARACTERS")

#endif // _com_sun_org_apache_xerces_internal_util_URI_h_