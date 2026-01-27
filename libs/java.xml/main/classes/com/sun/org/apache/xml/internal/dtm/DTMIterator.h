#ifndef _com_sun_org_apache_xml_internal_dtm_DTMIterator_h_
#define _com_sun_org_apache_xml_internal_dtm_DTMIterator_h_
//$ interface com.sun.org.apache.xml.internal.dtm.DTMIterator
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("FILTER_ACCEPT")
#undef FILTER_ACCEPT
#pragma push_macro("FILTER_REJECT")
#undef FILTER_REJECT
#pragma push_macro("FILTER_SKIP")
#undef FILTER_SKIP

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace dtm {
							class DTM;
							class DTMManager;
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
						namespace dtm {

class $export DTMIterator : public ::java::lang::Object {
	$interface(DTMIterator, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void allowDetachToRelease(bool allowRelease) {}
	virtual $Object* clone() override;
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMIterator* cloneWithReset() {return nullptr;}
	virtual void detach() {}
	virtual int32_t getAxis() {return 0;}
	virtual int32_t getCurrentNode() {return 0;}
	virtual int32_t getCurrentPos() {return 0;}
	virtual ::com::sun::org::apache::xml::internal::dtm::DTM* getDTM(int32_t nodeHandle) {return nullptr;}
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMManager* getDTMManager() {return nullptr;}
	virtual bool getExpandEntityReferences() {return false;}
	virtual int32_t getLength() {return 0;}
	virtual int32_t getRoot() {return 0;}
	virtual int32_t getWhatToShow() {return 0;}
	virtual bool isDocOrdered() {return false;}
	virtual bool isFresh() {return false;}
	virtual bool isMutable() {return false;}
	virtual int32_t item(int32_t index) {return 0;}
	virtual int32_t nextNode() {return 0;}
	virtual int32_t previousNode() {return 0;}
	virtual void reset() {}
	virtual void runTo(int32_t index) {}
	virtual void setCurrentPos(int32_t i) {}
	virtual void setItem(int32_t node, int32_t index) {}
	virtual void setRoot(int32_t nodeHandle, Object$* environment) {}
	virtual void setShouldCacheNodes(bool b) {}
	static const int16_t FILTER_ACCEPT = 1;
	static const int16_t FILTER_REJECT = 2;
	static const int16_t FILTER_SKIP = 3;
};

						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("FILTER_ACCEPT")
#pragma pop_macro("FILTER_REJECT")
#pragma pop_macro("FILTER_SKIP")

#endif // _com_sun_org_apache_xml_internal_dtm_DTMIterator_h_