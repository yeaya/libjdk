#ifndef _com_sun_org_apache_xalan_internal_xsltc_dom_NodeCounter_h_
#define _com_sun_org_apache_xalan_internal_xsltc_dom_NodeCounter_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.dom.NodeCounter
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("END")
#undef END

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							class DOM;
							class Translet;
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
							class DTMAxisIterator;
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace lang {
		class StringBuilder;
	}
}
namespace java {
	namespace util {
		class List;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace dom {

class NodeCounter : public ::java::lang::Object {
	$class(NodeCounter, 0, ::java::lang::Object)
public:
	NodeCounter();
	void init$(::com::sun::org::apache::xalan::internal::xsltc::Translet* translet, ::com::sun::org::apache::xalan::internal::xsltc::DOM* document, ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* iterator);
	void init$(::com::sun::org::apache::xalan::internal::xsltc::Translet* translet, ::com::sun::org::apache::xalan::internal::xsltc::DOM* document, ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* iterator, bool hasFrom);
	$String* alphaValue(int32_t value, int32_t min, int32_t max);
	virtual $String* formatNumbers(int32_t value);
	virtual $String* formatNumbers($ints* values);
	void formatValue(int32_t value, $String* format, ::java::lang::StringBuilder* buffer);
	virtual $String* getCounter() {return nullptr;}
	virtual $String* getCounter($String* format, $String* lang, $String* letterValue, $String* groupSep, $String* groupSize);
	virtual bool matchesCount(int32_t node);
	virtual bool matchesFrom(int32_t node);
	int32_t parseStringToAnInt($String* s);
	$String* romanValue(int32_t n);
	virtual ::com::sun::org::apache::xalan::internal::xsltc::dom::NodeCounter* setDefaultFormatting();
	virtual void setFormatting($String* format, $String* lang, $String* letterValue, $String* groupSep, $String* groupSize);
	virtual ::com::sun::org::apache::xalan::internal::xsltc::dom::NodeCounter* setStartNode(int32_t node) {return nullptr;}
	void setTokens($String* format);
	virtual ::com::sun::org::apache::xalan::internal::xsltc::dom::NodeCounter* setValue(double value);
	static const int32_t END = -1; // DTM.NULL
	int32_t _node = 0;
	int32_t _nodeType = 0;
	double _value = 0.0;
	::com::sun::org::apache::xalan::internal::xsltc::DOM* _document = nullptr;
	::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* _iterator = nullptr;
	::com::sun::org::apache::xalan::internal::xsltc::Translet* _translet = nullptr;
	$String* _format = nullptr;
	$String* _lang = nullptr;
	$String* _letterValue = nullptr;
	$String* _groupSep = nullptr;
	int32_t _groupSize = 0;
	bool _separFirst = false;
	bool _separLast = false;
	::java::util::List* _separToks = nullptr;
	::java::util::List* _formatToks = nullptr;
	int32_t _nSepars = 0;
	int32_t _nFormats = 0;
	static $StringArray* Thousands;
	static $StringArray* Hundreds;
	static $StringArray* Tens;
	static $StringArray* Ones;
	::java::lang::StringBuilder* _tempBuffer = nullptr;
	bool _hasFrom = false;
};

							} // dom
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("END")

#endif // _com_sun_org_apache_xalan_internal_xsltc_dom_NodeCounter_h_