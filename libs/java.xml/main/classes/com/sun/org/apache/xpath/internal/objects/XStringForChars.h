#ifndef _com_sun_org_apache_xpath_internal_objects_XStringForChars_h_
#define _com_sun_org_apache_xpath_internal_objects_XStringForChars_h_
//$ class com.sun.org.apache.xpath.internal.objects.XStringForChars
//$ extends com.sun.org.apache.xpath.internal.objects.XString

#include <com/sun/org/apache/xpath/internal/objects/XString.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace utils {
							class FastStringBuffer;
						}
					}
				}
			}
		}
	}
}
namespace org {
	namespace xml {
		namespace sax {
			class ContentHandler;
		}
	}
}
namespace org {
	namespace xml {
		namespace sax {
			namespace ext {
				class LexicalHandler;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace objects {

class $export XStringForChars : public ::com::sun::org::apache::xpath::internal::objects::XString {
	$class(XStringForChars, $NO_CLASS_INIT, ::com::sun::org::apache::xpath::internal::objects::XString)
public:
	XStringForChars();
	using ::com::sun::org::apache::xpath::internal::objects::XString::bool$;
	using ::com::sun::org::apache::xpath::internal::objects::XString::execute;
	using ::com::sun::org::apache::xpath::internal::objects::XString::error;
	void init$($chars* val, int32_t start, int32_t length);
	void init$($String* val);
	virtual void appendToFsb(::com::sun::org::apache::xml::internal::utils::FastStringBuffer* fsb) override;
	virtual char16_t charAt(int32_t index) override;
	virtual void dispatchAsComment(::org::xml::sax::ext::LexicalHandler* lh) override;
	virtual void dispatchCharactersEvents(::org::xml::sax::ContentHandler* ch) override;
	virtual ::com::sun::org::apache::xml::internal::utils::FastStringBuffer* fsb();
	virtual void getChars(int32_t srcBegin, int32_t srcEnd, $chars* dst, int32_t dstBegin) override;
	virtual bool hasString() override;
	virtual int32_t length() override;
	using ::com::sun::org::apache::xpath::internal::objects::XString::num;
	virtual $Object* object() override;
	using ::com::sun::org::apache::xpath::internal::objects::XString::rtf;
	virtual $String* str() override;
	using ::com::sun::org::apache::xpath::internal::objects::XString::xstr;
	static const int64_t serialVersionUID = (int64_t)0xE0FACCFADC9D30DD;
	int32_t m_start = 0;
	int32_t m_length = 0;
	$String* m_strCache = nullptr;
};

						} // objects
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xpath_internal_objects_XStringForChars_h_