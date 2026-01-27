#ifndef _com_sun_org_apache_xpath_internal_axes_WalkerFactory_h_
#define _com_sun_org_apache_xpath_internal_axes_WalkerFactory_h_
//$ class com.sun.org.apache.xpath.internal.axes.WalkerFactory
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("BITMASK_TRAVERSES_OUTSIDE_SUBTREE")
#undef BITMASK_TRAVERSES_OUTSIDE_SUBTREE
#pragma push_macro("BITS_COUNT")
#undef BITS_COUNT
#pragma push_macro("BITS_RESERVED")
#undef BITS_RESERVED
#pragma push_macro("BIT_ANCESTOR")
#undef BIT_ANCESTOR
#pragma push_macro("BIT_ANCESTOR_OR_SELF")
#undef BIT_ANCESTOR_OR_SELF
#pragma push_macro("BIT_ANY_DESCENDANT_FROM_ROOT")
#undef BIT_ANY_DESCENDANT_FROM_ROOT
#pragma push_macro("BIT_ATTRIBUTE")
#undef BIT_ATTRIBUTE
#pragma push_macro("BIT_BACKWARDS_SELF")
#undef BIT_BACKWARDS_SELF
#pragma push_macro("BIT_CHILD")
#undef BIT_CHILD
#pragma push_macro("BIT_DESCENDANT")
#undef BIT_DESCENDANT
#pragma push_macro("BIT_DESCENDANT_OR_SELF")
#undef BIT_DESCENDANT_OR_SELF
#pragma push_macro("BIT_FILTER")
#undef BIT_FILTER
#pragma push_macro("BIT_FOLLOWING")
#undef BIT_FOLLOWING
#pragma push_macro("BIT_FOLLOWING_SIBLING")
#undef BIT_FOLLOWING_SIBLING
#pragma push_macro("BIT_MATCH_PATTERN")
#undef BIT_MATCH_PATTERN
#pragma push_macro("BIT_NAMESPACE")
#undef BIT_NAMESPACE
#pragma push_macro("BIT_NODETEST_ANY")
#undef BIT_NODETEST_ANY
#pragma push_macro("BIT_PARENT")
#undef BIT_PARENT
#pragma push_macro("BIT_PRECEDING")
#undef BIT_PRECEDING
#pragma push_macro("BIT_PRECEDING_SIBLING")
#undef BIT_PRECEDING_SIBLING
#pragma push_macro("BIT_PREDICATE")
#undef BIT_PREDICATE
#pragma push_macro("BIT_ROOT")
#undef BIT_ROOT
#pragma push_macro("BIT_SELF")
#undef BIT_SELF
#pragma push_macro("DEBUG_ITERATOR_CREATION")
#undef DEBUG_ITERATOR_CREATION
#pragma push_macro("DEBUG_PATTERN_CREATION")
#undef DEBUG_PATTERN_CREATION
#pragma push_macro("DEBUG_WALKER_CREATION")
#undef DEBUG_WALKER_CREATION

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace dtm {
							class DTMIterator;
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
						namespace axes {
							class AxesWalker;
							class MatchPatternIterator;
							class WalkingIterator;
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
							class Compiler;
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
						namespace patterns {
							class StepPattern;
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
						namespace axes {

class WalkerFactory : public ::java::lang::Object {
	$class(WalkerFactory, $NO_CLASS_INIT, ::java::lang::Object)
public:
	WalkerFactory();
	void init$();
	static int32_t analyze(::com::sun::org::apache::xpath::internal::compiler::Compiler* compiler, int32_t stepOpCodePos, int32_t stepIndex);
	static bool analyzePredicate(::com::sun::org::apache::xpath::internal::compiler::Compiler* compiler, int32_t opPos, int32_t stepType);
	static bool canCrissCross(int32_t analysis);
	static bool canSkipSubtrees(int32_t analysis);
	static ::com::sun::org::apache::xpath::internal::patterns::StepPattern* createDefaultStepPattern(::com::sun::org::apache::xpath::internal::compiler::Compiler* compiler, int32_t opPos, ::com::sun::org::apache::xpath::internal::axes::MatchPatternIterator* mpi, int32_t analysis, ::com::sun::org::apache::xpath::internal::patterns::StepPattern* tail, ::com::sun::org::apache::xpath::internal::patterns::StepPattern* head);
	static ::com::sun::org::apache::xpath::internal::axes::AxesWalker* createDefaultWalker(::com::sun::org::apache::xpath::internal::compiler::Compiler* compiler, int32_t opPos, ::com::sun::org::apache::xpath::internal::axes::WalkingIterator* lpi, int32_t analysis);
	static void diagnoseIterator($String* name, int32_t analysis, ::com::sun::org::apache::xpath::internal::compiler::Compiler* compiler);
	static bool functionProximateOrContainsProximate(::com::sun::org::apache::xpath::internal::compiler::Compiler* compiler, int32_t opPos);
	static int32_t getAnalysisBitFromAxes(int32_t axis);
	static $String* getAnalysisString(int32_t analysis);
	static int32_t getAxisFromStep(::com::sun::org::apache::xpath::internal::compiler::Compiler* compiler, int32_t stepOpCodePos);
	static int32_t getStepCount(int32_t analysis);
	static bool hasPredicate(int32_t analysis);
	static bool isAbsolute(int32_t analysis);
	static bool isDownwardAxisOfMany(int32_t axis);
	static bool isNaturalDocOrder(int32_t analysis);
	static bool isNaturalDocOrder(::com::sun::org::apache::xpath::internal::compiler::Compiler* compiler, int32_t stepOpCodePos, int32_t stepIndex, int32_t analysis);
	static bool isOneStep(int32_t analysis);
	static bool isOptimizableForDescendantIterator(::com::sun::org::apache::xpath::internal::compiler::Compiler* compiler, int32_t stepOpCodePos, int32_t stepIndex);
	static bool isProximateInnerExpr(::com::sun::org::apache::xpath::internal::compiler::Compiler* compiler, int32_t opPos);
	static bool isSet(int32_t analysis, int32_t bits);
	static bool isWild(int32_t analysis);
	static ::com::sun::org::apache::xpath::internal::axes::AxesWalker* loadOneWalker(::com::sun::org::apache::xpath::internal::axes::WalkingIterator* lpi, ::com::sun::org::apache::xpath::internal::compiler::Compiler* compiler, int32_t stepOpCodePos);
	static ::com::sun::org::apache::xpath::internal::patterns::StepPattern* loadSteps(::com::sun::org::apache::xpath::internal::axes::MatchPatternIterator* mpi, ::com::sun::org::apache::xpath::internal::compiler::Compiler* compiler, int32_t stepOpCodePos, int32_t stepIndex);
	static ::com::sun::org::apache::xpath::internal::axes::AxesWalker* loadWalkers(::com::sun::org::apache::xpath::internal::axes::WalkingIterator* lpi, ::com::sun::org::apache::xpath::internal::compiler::Compiler* compiler, int32_t stepOpCodePos, int32_t stepIndex);
	static bool mightBeProximate(::com::sun::org::apache::xpath::internal::compiler::Compiler* compiler, int32_t opPos, int32_t stepType);
	static ::com::sun::org::apache::xml::internal::dtm::DTMIterator* newDTMIterator(::com::sun::org::apache::xpath::internal::compiler::Compiler* compiler, int32_t opPos, bool isTopLevel);
	static bool walksAncestors(int32_t analysis);
	static bool walksAttributes(int32_t analysis);
	static bool walksChildren(int32_t analysis);
	static bool walksChildrenAndExtraAndSelfOnly(int32_t analysis);
	static bool walksChildrenOnly(int32_t analysis);
	static bool walksDescendants(int32_t analysis);
	static bool walksDescendantsAndExtraAndSelfOnly(int32_t analysis);
	static bool walksDownExtraOnly(int32_t analysis);
	static bool walksDownOnly(int32_t analysis);
	static bool walksExtraNodes(int32_t analysis);
	static bool walksExtraNodesOnly(int32_t analysis);
	static bool walksFilteredList(int32_t analysis);
	static bool walksFollowingOnlyMaybeAbsolute(int32_t analysis);
	static bool walksInDocOrder(int32_t analysis);
	static bool walksNamespaces(int32_t analysis);
	static bool walksSelfOnly(int32_t analysis);
	static bool walksSideways(int32_t analysis);
	static bool walksSubtree(int32_t analysis);
	static bool walksSubtreeOnly(int32_t analysis);
	static bool walksSubtreeOnlyFromRootOrContext(int32_t analysis);
	static bool walksSubtreeOnlyMaybeAbsolute(int32_t analysis);
	static bool walksUp(int32_t analysis);
	static bool walksUpOnly(int32_t analysis);
	static const bool DEBUG_PATTERN_CREATION = false;
	static const bool DEBUG_WALKER_CREATION = false;
	static const bool DEBUG_ITERATOR_CREATION = false;
	static const int32_t BITS_COUNT = 255;
	static const int32_t BITS_RESERVED = 3840;
	static const int32_t BIT_PREDICATE = (4096);
	static const int32_t BIT_ANCESTOR = 8192; // (4096 << 1)
	static const int32_t BIT_ANCESTOR_OR_SELF = 16384; // (4096 << 2)
	static const int32_t BIT_ATTRIBUTE = 32768; // (4096 << 3)
	static const int32_t BIT_CHILD = 65536; // (4096 << 4)
	static const int32_t BIT_DESCENDANT = 131072; // (4096 << 5)
	static const int32_t BIT_DESCENDANT_OR_SELF = 262144; // (4096 << 6)
	static const int32_t BIT_FOLLOWING = 524288; // (4096 << 7)
	static const int32_t BIT_FOLLOWING_SIBLING = 1048576; // (4096 << 8)
	static const int32_t BIT_NAMESPACE = 2097152; // (4096 << 9)
	static const int32_t BIT_PARENT = 4194304; // (4096 << 10)
	static const int32_t BIT_PRECEDING = 8388608; // (4096 << 11)
	static const int32_t BIT_PRECEDING_SIBLING = 16777216; // (4096 << 12)
	static const int32_t BIT_SELF = 33554432; // (4096 << 13)
	static const int32_t BIT_FILTER = 67108864; // (4096 << 14)
	static const int32_t BIT_ROOT = 0x08000000; // (4096 << 15)
	static const int32_t BITMASK_TRAVERSES_OUTSIDE_SUBTREE = 0x0DF86000; // (BIT_NAMESPACE | BIT_PRECEDING_SIBLING | BIT_PRECEDING | BIT_FOLLOWING_SIBLING | BIT_FOLLOWING | BIT_PARENT | BIT_ANCESTOR_OR_SELF | BIT_ANCESTOR | BIT_FILTER | BIT_ROOT)
	static const int32_t BIT_BACKWARDS_SELF = 0x10000000; // (4096 << 16)
	static const int32_t BIT_ANY_DESCENDANT_FROM_ROOT = 0x20000000; // (4096 << 17)
	static const int32_t BIT_NODETEST_ANY = 0x40000000; // (4096 << 18)
	static const int32_t BIT_MATCH_PATTERN = 0x80000000; // (4096 << 19)
};

						} // axes
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("BITMASK_TRAVERSES_OUTSIDE_SUBTREE")
#pragma pop_macro("BITS_COUNT")
#pragma pop_macro("BITS_RESERVED")
#pragma pop_macro("BIT_ANCESTOR")
#pragma pop_macro("BIT_ANCESTOR_OR_SELF")
#pragma pop_macro("BIT_ANY_DESCENDANT_FROM_ROOT")
#pragma pop_macro("BIT_ATTRIBUTE")
#pragma pop_macro("BIT_BACKWARDS_SELF")
#pragma pop_macro("BIT_CHILD")
#pragma pop_macro("BIT_DESCENDANT")
#pragma pop_macro("BIT_DESCENDANT_OR_SELF")
#pragma pop_macro("BIT_FILTER")
#pragma pop_macro("BIT_FOLLOWING")
#pragma pop_macro("BIT_FOLLOWING_SIBLING")
#pragma pop_macro("BIT_MATCH_PATTERN")
#pragma pop_macro("BIT_NAMESPACE")
#pragma pop_macro("BIT_NODETEST_ANY")
#pragma pop_macro("BIT_PARENT")
#pragma pop_macro("BIT_PRECEDING")
#pragma pop_macro("BIT_PRECEDING_SIBLING")
#pragma pop_macro("BIT_PREDICATE")
#pragma pop_macro("BIT_ROOT")
#pragma pop_macro("BIT_SELF")
#pragma pop_macro("DEBUG_ITERATOR_CREATION")
#pragma pop_macro("DEBUG_PATTERN_CREATION")
#pragma pop_macro("DEBUG_WALKER_CREATION")

#endif // _com_sun_org_apache_xpath_internal_axes_WalkerFactory_h_