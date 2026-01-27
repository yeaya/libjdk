#ifndef _com_sun_org_apache_xml_internal_dtm_ref_sax2dtm_SAX2DTM2_h_
#define _com_sun_org_apache_xml_internal_dtm_ref_sax2dtm_SAX2DTM2_h_
//$ class com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2
//$ extends com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM

#include <com/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM.h>
#include <java/lang/Array.h>

#pragma push_macro("EMPTY_STR")
#undef EMPTY_STR
#pragma push_macro("EMPTY_XML_STR")
#undef EMPTY_XML_STR
#pragma push_macro("SAX2DTM2")
#undef SAX2DTM2
#pragma push_macro("TEXT_LENGTH_BITS")
#undef TEXT_LENGTH_BITS
#pragma push_macro("TEXT_LENGTH_MAX")
#undef TEXT_LENGTH_MAX
#pragma push_macro("TEXT_OFFSET_BITS")
#undef TEXT_OFFSET_BITS
#pragma push_macro("TEXT_OFFSET_MAX")
#undef TEXT_OFFSET_MAX

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace dtm {
							class DTMManager;
							class DTMWSFilter;
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
							namespace ref {
								class ExtendedType;
							}
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
							class SerializationHandler;
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
						namespace utils {
							class XMLString;
							class XMLStringFactory;
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class List;
	}
}
namespace javax {
	namespace xml {
		namespace transform {
			class Source;
		}
	}
}
namespace org {
	namespace xml {
		namespace sax {
			class Attributes;
			class ContentHandler;
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
							namespace ref {
								namespace sax2dtm {

class SAX2DTM2 : public ::com::sun::org::apache::xml::internal::dtm::ref::sax2dtm::SAX2DTM {
	$class(SAX2DTM2, 0, ::com::sun::org::apache::xml::internal::dtm::ref::sax2dtm::SAX2DTM)
public:
	SAX2DTM2();
	using ::com::sun::org::apache::xml::internal::dtm::ref::sax2dtm::SAX2DTM::error;
	void init$(::com::sun::org::apache::xml::internal::dtm::DTMManager* mgr, ::javax::xml::transform::Source* source, int32_t dtmIdentity, ::com::sun::org::apache::xml::internal::dtm::DTMWSFilter* whiteSpaceFilter, ::com::sun::org::apache::xml::internal::utils::XMLStringFactory* xstringfactory, bool doIndexing);
	void init$(::com::sun::org::apache::xml::internal::dtm::DTMManager* mgr, ::javax::xml::transform::Source* source, int32_t dtmIdentity, ::com::sun::org::apache::xml::internal::dtm::DTMWSFilter* whiteSpaceFilter, ::com::sun::org::apache::xml::internal::utils::XMLStringFactory* xstringfactory, bool doIndexing, int32_t blocksize, bool usePrevsib, bool buildIdIndex, bool newNameTable);
	virtual int32_t _exptype(int32_t identity) override;
	int32_t _exptype2(int32_t identity);
	int32_t _exptype2Type(int32_t exptype);
	int32_t _firstch2(int32_t identity);
	int32_t _nextsib2(int32_t identity);
	int32_t _parent2(int32_t identity);
	int32_t _type2(int32_t identity);
	virtual int32_t addNode(int32_t type, int32_t expandedTypeID, int32_t parentIndex, int32_t previousSibling, int32_t dataOrPrefix, bool canHaveFirstChild) override;
	virtual void charactersFlush() override;
	virtual void comment($chars* ch, int32_t start, int32_t length) override;
	void copyAttribute(int32_t nodeID, int32_t exptype, ::com::sun::org::apache::xml::internal::serializer::SerializationHandler* handler);
	void copyAttributes(int32_t nodeID, ::com::sun::org::apache::xml::internal::serializer::SerializationHandler* handler);
	$String* copyElement(int32_t nodeID, int32_t exptype, ::com::sun::org::apache::xml::internal::serializer::SerializationHandler* handler);
	void copyNS(int32_t nodeID, ::com::sun::org::apache::xml::internal::serializer::SerializationHandler* handler, bool inScope);
	void copyTextNode(int32_t nodeID, ::com::sun::org::apache::xml::internal::serializer::SerializationHandler* handler);
	virtual void dispatchCharactersEvents(int32_t nodeHandle, ::org::xml::sax::ContentHandler* ch, bool normalize) override;
	virtual void endDocument() override;
	virtual void endElement($String* uri, $String* localName, $String* qName) override;
	int32_t getExpandedTypeID2(int32_t nodeHandle);
	virtual int32_t getFirstAttribute(int32_t nodeHandle) override;
	virtual int32_t getFirstAttributeIdentity(int32_t identity) override;
	virtual int32_t getIdForNamespace($String* uri) override;
	virtual $String* getLocalName(int32_t nodeHandle) override;
	virtual int32_t getNextAttributeIdentity(int32_t identity) override;
	int32_t getNextNamespaceNode2(int32_t baseID);
	virtual $String* getNodeName(int32_t nodeHandle) override;
	virtual $String* getNodeNameX(int32_t nodeHandle) override;
	virtual $String* getNodeValue(int32_t nodeHandle) override;
	virtual ::com::sun::org::apache::xml::internal::utils::XMLString* getStringValue(int32_t nodeHandle) override;
	virtual $String* getStringValue();
	$String* getStringValueX(int32_t nodeHandle);
	virtual int32_t getTypedAttribute(int32_t nodeHandle, int32_t attType) override;
	virtual void processingInstruction($String* target, $String* data) override;
	virtual void startDocument() override;
	virtual void startElement($String* uri, $String* localName, $String* qName, ::org::xml::sax::Attributes* attributes) override;
	$ints* m_exptype_map0 = nullptr;
	$ints* m_nextsib_map0 = nullptr;
	$ints* m_firstch_map0 = nullptr;
	$ints* m_parent_map0 = nullptr;
	$Array<int32_t, 2>* m_exptype_map = nullptr;
	$Array<int32_t, 2>* m_nextsib_map = nullptr;
	$Array<int32_t, 2>* m_firstch_map = nullptr;
	$Array<int32_t, 2>* m_parent_map = nullptr;
	$Array<::com::sun::org::apache::xml::internal::dtm::ref::ExtendedType>* m_extendedTypes = nullptr;
	::java::util::List* m_values = nullptr;
	int32_t m_valueIndex = 0;
	int32_t m_maxNodeIndex = 0;
	int32_t m_SHIFT = 0;
	int32_t m_MASK = 0;
	int32_t m_blocksize = 0;
	static const int32_t TEXT_LENGTH_BITS = 10;
	static const int32_t TEXT_OFFSET_BITS = 21;
	static const int32_t TEXT_LENGTH_MAX = 1023; // (1 << TEXT_LENGTH_BITS) - 1
	static const int32_t TEXT_OFFSET_MAX = 2097151; // (1 << TEXT_OFFSET_BITS) - 1
	bool m_buildIdIndex = false;
	static $String* EMPTY_STR;
	static ::com::sun::org::apache::xml::internal::utils::XMLString* EMPTY_XML_STR;
};

								} // sax2dtm
							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("EMPTY_STR")
#pragma pop_macro("EMPTY_XML_STR")
#pragma pop_macro("SAX2DTM2")
#pragma pop_macro("TEXT_LENGTH_BITS")
#pragma pop_macro("TEXT_LENGTH_MAX")
#pragma pop_macro("TEXT_OFFSET_BITS")
#pragma pop_macro("TEXT_OFFSET_MAX")

#endif // _com_sun_org_apache_xml_internal_dtm_ref_sax2dtm_SAX2DTM2_h_