#ifndef _com_sun_org_apache_xerces_internal_impl_xpath_regex_Op_h_
#define _com_sun_org_apache_xerces_internal_impl_xpath_regex_Op_h_
//$ class com.sun.org.apache.xerces.internal.impl.xpath.regex.Op
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("ANCHOR")
#undef ANCHOR
#pragma push_macro("BACKREFERENCE")
#undef BACKREFERENCE
#pragma push_macro("CAPTURE")
#undef CAPTURE
#pragma push_macro("CHAR")
#undef CHAR
#pragma push_macro("CLOSURE")
#undef CLOSURE
#pragma push_macro("CONDITION")
#undef CONDITION
#pragma push_macro("COUNT")
#undef COUNT
#pragma push_macro("DOT")
#undef DOT
#pragma push_macro("INDEPENDENT")
#undef INDEPENDENT
#pragma push_macro("LOOKAHEAD")
#undef LOOKAHEAD
#pragma push_macro("LOOKBEHIND")
#undef LOOKBEHIND
#pragma push_macro("MODIFIER")
#undef MODIFIER
#pragma push_macro("NEGATIVELOOKAHEAD")
#undef NEGATIVELOOKAHEAD
#pragma push_macro("NEGATIVELOOKBEHIND")
#undef NEGATIVELOOKBEHIND
#pragma push_macro("NONGREEDYCLOSURE")
#undef NONGREEDYCLOSURE
#pragma push_macro("NONGREEDYQUESTION")
#undef NONGREEDYQUESTION
#pragma push_macro("NRANGE")
#undef NRANGE
#pragma push_macro("QUESTION")
#undef QUESTION
#pragma push_macro("RANGE")
#undef RANGE
#pragma push_macro("STRING")
#undef STRING
#pragma push_macro("UNION")
#undef UNION

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xpath {
								namespace regex {
									class Op$CharOp;
									class Op$ChildOp;
									class Op$ConditionOp;
									class Op$ModifierOp;
									class Op$RangeOp;
									class Op$StringOp;
									class Op$UnionOp;
									class RangeToken;
									class Token;
								}
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
						namespace impl {
							namespace xpath {
								namespace regex {

class Op : public ::java::lang::Object {
	$class(Op, 0, ::java::lang::Object)
public:
	Op();
	void init$(int32_t type);
	static ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Op$CharOp* createAnchor(int32_t data);
	static ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Op$CharOp* createBackReference(int32_t refno);
	static ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Op$CharOp* createCapture(int32_t number, ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Op* next);
	static ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Op$CharOp* createChar(int32_t data);
	static ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Op$ChildOp* createClosure(int32_t id);
	static ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Op$ConditionOp* createCondition(::com::sun::org::apache::xerces::internal::impl::xpath::regex::Op* next, int32_t ref, ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Op* conditionflow, ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Op* yesflow, ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Op* noflow);
	static ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Op* createDot();
	static ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Op$ChildOp* createIndependent(::com::sun::org::apache::xerces::internal::impl::xpath::regex::Op* next, ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Op* branch);
	static ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Op$ChildOp* createLook(int32_t type, ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Op* next, ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Op* branch);
	static ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Op$ModifierOp* createModifier(::com::sun::org::apache::xerces::internal::impl::xpath::regex::Op* next, ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Op* branch, int32_t add, int32_t mask);
	static ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Op$ChildOp* createNonGreedyClosure();
	static ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Op$ChildOp* createQuestion(bool nongreedy);
	static ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Op$RangeOp* createRange(::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* tok);
	static ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Op$StringOp* createString($String* literal);
	static ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Op$UnionOp* createUnion(int32_t size);
	virtual ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Op* elementAt(int32_t index);
	virtual ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Op* getChild();
	virtual int32_t getData();
	virtual int32_t getData2();
	virtual $String* getString();
	virtual ::com::sun::org::apache::xerces::internal::impl::xpath::regex::RangeToken* getToken();
	virtual int32_t size();
	static const int32_t DOT = 0;
	static const int32_t CHAR = 1;
	static const int32_t RANGE = 3;
	static const int32_t NRANGE = 4;
	static const int32_t ANCHOR = 5;
	static const int32_t STRING = 6;
	static const int32_t CLOSURE = 7;
	static const int32_t NONGREEDYCLOSURE = 8;
	static const int32_t QUESTION = 9;
	static const int32_t NONGREEDYQUESTION = 10;
	static const int32_t UNION = 11;
	static const int32_t CAPTURE = 15;
	static const int32_t BACKREFERENCE = 16;
	static const int32_t LOOKAHEAD = 20;
	static const int32_t NEGATIVELOOKAHEAD = 21;
	static const int32_t LOOKBEHIND = 22;
	static const int32_t NEGATIVELOOKBEHIND = 23;
	static const int32_t INDEPENDENT = 24;
	static const int32_t MODIFIER = 25;
	static const int32_t CONDITION = 26;
	static int32_t nofinstances;
	static const bool COUNT = false;
	int32_t type = 0;
	::com::sun::org::apache::xerces::internal::impl::xpath::regex::Op* next = nullptr;
};

								} // regex
							} // xpath
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("ANCHOR")
#pragma pop_macro("BACKREFERENCE")
#pragma pop_macro("CAPTURE")
#pragma pop_macro("CHAR")
#pragma pop_macro("CLOSURE")
#pragma pop_macro("CONDITION")
#pragma pop_macro("COUNT")
#pragma pop_macro("DOT")
#pragma pop_macro("INDEPENDENT")
#pragma pop_macro("LOOKAHEAD")
#pragma pop_macro("LOOKBEHIND")
#pragma pop_macro("MODIFIER")
#pragma pop_macro("NEGATIVELOOKAHEAD")
#pragma pop_macro("NEGATIVELOOKBEHIND")
#pragma pop_macro("NONGREEDYCLOSURE")
#pragma pop_macro("NONGREEDYQUESTION")
#pragma pop_macro("NRANGE")
#pragma pop_macro("QUESTION")
#pragma pop_macro("RANGE")
#pragma pop_macro("STRING")
#pragma pop_macro("UNION")

#endif // _com_sun_org_apache_xerces_internal_impl_xpath_regex_Op_h_