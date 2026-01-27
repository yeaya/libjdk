#ifndef _com_sun_org_apache_xerces_internal_xpointer_ElementSchemePointer_h_
#define _com_sun_org_apache_xerces_internal_xpointer_ElementSchemePointer_h_
//$ class com.sun.org.apache.xerces.internal.xpointer.ElementSchemePointer
//$ extends com.sun.org.apache.xerces.internal.xpointer.XPointerPart

#include <com/sun/org/apache/xerces/internal/xpointer/XPointerPart.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							class XMLErrorReporter;
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
				namespace xerces {
					namespace internal {
						namespace util {
							class SymbolTable;
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
				namespace xerces {
					namespace internal {
						namespace xni {
							class Augmentations;
							class QName;
							class XMLAttributes;
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
				namespace xerces {
					namespace internal {
						namespace xni {
							namespace parser {
								class XMLErrorHandler;
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
				namespace xerces {
					namespace internal {
						namespace xpointer {
							class ShortHandPointer;
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
				namespace xerces {
					namespace internal {
						namespace xpointer {

class ElementSchemePointer : public ::com::sun::org::apache::xerces::internal::xpointer::XPointerPart {
	$class(ElementSchemePointer, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::xpointer::XPointerPart)
public:
	ElementSchemePointer();
	void init$();
	void init$(::com::sun::org::apache::xerces::internal::util::SymbolTable* symbolTable);
	void init$(::com::sun::org::apache::xerces::internal::util::SymbolTable* symbolTable, ::com::sun::org::apache::xerces::internal::impl::XMLErrorReporter* errorReporter);
	bool checkMatch();
	virtual $String* getSchemeData() override;
	virtual $String* getSchemeName() override;
	void init();
	void initErrorReporter();
	virtual bool isChildFragmentResolved() override;
	virtual bool isFragmentResolved() override;
	bool matchChildSequence(::com::sun::org::apache::xerces::internal::xni::QName* element, int32_t event);
	virtual void parseXPointer($String* xpointer) override;
	void reportError($String* key, $ObjectArray* arguments);
	virtual bool resolveXPointer(::com::sun::org::apache::xerces::internal::xni::QName* element, ::com::sun::org::apache::xerces::internal::xni::XMLAttributes* attributes, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs, int32_t event) override;
	virtual void setSchemeData($String* schemeData) override;
	virtual void setSchemeName($String* schemeName) override;
	$String* fSchemeName = nullptr;
	$String* fSchemeData = nullptr;
	$String* fShortHandPointerName = nullptr;
	bool fIsResolveElement = false;
	bool fIsElementFound = false;
	bool fWasOnlyEmptyElementFound = false;
	bool fIsShortHand = false;
	int32_t fFoundDepth = 0;
	$ints* fChildSequence = nullptr;
	int32_t fCurrentChildPosition = 0;
	int32_t fCurrentChildDepth = 0;
	$ints* fCurrentChildSequence = nullptr;
	bool fIsFragmentResolved = false;
	::com::sun::org::apache::xerces::internal::xpointer::ShortHandPointer* fShortHandPointer = nullptr;
	::com::sun::org::apache::xerces::internal::impl::XMLErrorReporter* fErrorReporter = nullptr;
	::com::sun::org::apache::xerces::internal::xni::parser::XMLErrorHandler* fErrorHandler = nullptr;
	::com::sun::org::apache::xerces::internal::util::SymbolTable* fSymbolTable = nullptr;
};

						} // xpointer
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_xpointer_ElementSchemePointer_h_