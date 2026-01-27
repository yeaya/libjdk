#ifndef _com_sun_org_apache_xpath_internal_compiler_OpMap_h_
#define _com_sun_org_apache_xpath_internal_compiler_OpMap_h_
//$ class com.sun.org.apache.xpath.internal.compiler.OpMap
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("BLOCKTOKENQUEUESIZE")
#undef BLOCKTOKENQUEUESIZE
#pragma push_macro("MAPINDEX_LENGTH")
#undef MAPINDEX_LENGTH
#pragma push_macro("MAXTOKENQUEUESIZE")
#undef MAXTOKENQUEUESIZE

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace utils {
							class ObjectVector;
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
				namespace xpath {
					namespace internal {
						namespace compiler {
							class OpMapVector;
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
				namespace xpath {
					namespace internal {
						namespace compiler {

class $import OpMap : public ::java::lang::Object {
	$class(OpMap, $NO_CLASS_INIT, ::java::lang::Object)
public:
	OpMap();
	void init$();
	virtual void error($String* msg, $ObjectArray* args);
	virtual int32_t getArgLength(int32_t opPos);
	virtual int32_t getArgLengthOfStep(int32_t opPos);
	static int32_t getFirstChildPos(int32_t opPos);
	static int32_t getFirstChildPosOfStep(int32_t opPos);
	virtual int32_t getFirstPredicateOpPos(int32_t opPos);
	virtual int32_t getNextOpPos(int32_t opPos);
	static int32_t getNextOpPos($ints* opMap, int32_t opPos);
	virtual int32_t getNextStepPos(int32_t opPos);
	virtual int32_t getOp(int32_t opPos);
	virtual ::com::sun::org::apache::xpath::internal::compiler::OpMapVector* getOpMap();
	virtual $String* getPatternString();
	virtual $String* getStepLocalName(int32_t opPosOfStep);
	virtual $String* getStepNS(int32_t opPosOfStep);
	virtual int32_t getStepTestType(int32_t opPosOfStep);
	virtual $Object* getToken(int32_t pos);
	virtual ::com::sun::org::apache::xml::internal::utils::ObjectVector* getTokenQueue();
	virtual int32_t getTokenQueueSize();
	virtual void setOp(int32_t opPos, int32_t value);
	virtual void shrink();
	virtual $String* toString() override;
	$String* m_currentPattern = nullptr;
	static const int32_t MAXTOKENQUEUESIZE = 500;
	static const int32_t BLOCKTOKENQUEUESIZE = 500;
	::com::sun::org::apache::xml::internal::utils::ObjectVector* m_tokenQueue = nullptr;
	::com::sun::org::apache::xpath::internal::compiler::OpMapVector* m_opMap = nullptr;
	static const int32_t MAPINDEX_LENGTH = 1;
};

						} // compiler
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("BLOCKTOKENQUEUESIZE")
#pragma pop_macro("MAPINDEX_LENGTH")
#pragma pop_macro("MAXTOKENQUEUESIZE")

#endif // _com_sun_org_apache_xpath_internal_compiler_OpMap_h_