#ifndef _com_sun_org_apache_xml_internal_serializer_ToStream$CharacterBuffer$1_h_
#define _com_sun_org_apache_xml_internal_serializer_ToStream$CharacterBuffer$1_h_
//$ class com.sun.org.apache.xml.internal.serializer.ToStream$CharacterBuffer$1
//$ extends com.sun.org.apache.xml.internal.serializer.ToStream$CharacterBuffer$GenericCharacters

#include <com/sun/org/apache/xml/internal/serializer/ToStream$CharacterBuffer$GenericCharacters.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {
							class ToStream$CharacterBuffer;
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

class ToStream$CharacterBuffer$1 : public ::com::sun::org::apache::xml::internal::serializer::ToStream$CharacterBuffer$GenericCharacters {
	$class(ToStream$CharacterBuffer$1, $NO_CLASS_INIT, ::com::sun::org::apache::xml::internal::serializer::ToStream$CharacterBuffer$GenericCharacters)
public:
	ToStream$CharacterBuffer$1();
	void init$(::com::sun::org::apache::xml::internal::serializer::ToStream$CharacterBuffer* this$1, $chars* val$chars, int32_t val$start, int32_t val$length);
	virtual bool flush(bool skipBeginningNewlines) override;
	virtual $chars* toChars() override;
	::com::sun::org::apache::xml::internal::serializer::ToStream$CharacterBuffer* this$1 = nullptr;
	int32_t val$length = 0;
	int32_t val$start = 0;
	$chars* val$chars = nullptr;
	$chars* text = nullptr;
};

						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_serializer_ToStream$CharacterBuffer$1_h_