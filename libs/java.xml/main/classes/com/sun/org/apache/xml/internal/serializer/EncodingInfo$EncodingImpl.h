#ifndef _com_sun_org_apache_xml_internal_serializer_EncodingInfo$EncodingImpl_h_
#define _com_sun_org_apache_xml_internal_serializer_EncodingInfo$EncodingImpl_h_
//$ class com.sun.org.apache.xml.internal.serializer.EncodingInfo$EncodingImpl
//$ extends com.sun.org.apache.xml.internal.serializer.EncodingInfo$InEncoding

#include <com/sun/org/apache/xml/internal/serializer/EncodingInfo$InEncoding.h>
#include <java/lang/Array.h>

#pragma push_macro("RANGE")
#undef RANGE

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {
							class EncodingInfo;
						}
					}
				}
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {

class EncodingInfo$EncodingImpl : public ::com::sun::org::apache::xml::internal::serializer::EncodingInfo$InEncoding {
	$class(EncodingInfo$EncodingImpl, $NO_CLASS_INIT, ::com::sun::org::apache::xml::internal::serializer::EncodingInfo$InEncoding)
public:
	EncodingInfo$EncodingImpl();
	void init$(::com::sun::org::apache::xml::internal::serializer::EncodingInfo* this$0);
	void init$(::com::sun::org::apache::xml::internal::serializer::EncodingInfo* this$0, $String* encoding, int32_t first, int32_t last, int32_t codePoint);
	virtual bool isInEncoding(char16_t ch1) override;
	virtual bool isInEncoding(char16_t high, char16_t low) override;
	::com::sun::org::apache::xml::internal::serializer::EncodingInfo* this$0 = nullptr;
	$String* m_encoding = nullptr;
	int32_t m_first = 0;
	int32_t m_explFirst = 0;
	int32_t m_explLast = 0;
	int32_t m_last = 0;
	::com::sun::org::apache::xml::internal::serializer::EncodingInfo$InEncoding* m_before = nullptr;
	::com::sun::org::apache::xml::internal::serializer::EncodingInfo$InEncoding* m_after = nullptr;
	static const int32_t RANGE = 128;
	$booleans* m_alreadyKnown = nullptr;
	$booleans* m_isInEncoding = nullptr;
};

						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("RANGE")

#endif // _com_sun_org_apache_xml_internal_serializer_EncodingInfo$EncodingImpl_h_