#ifndef _com_sun_org_apache_bcel_internal_util_InstructionFinder_h_
#define _com_sun_org_apache_bcel_internal_util_InstructionFinder_h_
//$ class com.sun.org.apache.bcel.internal.util.InstructionFinder
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("NO_OPCODES")
#undef NO_OPCODES
#pragma push_macro("OFFSET")
#undef OFFSET

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {
							class InstructionHandle;
							class InstructionList;
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
				namespace bcel {
					namespace internal {
						namespace util {
							class InstructionFinder$CodeConstraint;
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class Iterator;
		class Map;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace util {

class InstructionFinder : public ::java::lang::Object {
	$class(InstructionFinder, 0, ::java::lang::Object)
public:
	InstructionFinder();
	void init$(::com::sun::org::apache::bcel::internal::generic::InstructionList* il);
	static $String* compilePattern($String* pattern);
	::com::sun::org::apache::bcel::internal::generic::InstructionList* getInstructionList();
	$Array<::com::sun::org::apache::bcel::internal::generic::InstructionHandle>* getMatch(int32_t matched_from, int32_t match_length);
	static char16_t makeChar(int16_t opcode);
	static $String* mapName($String* pattern);
	static $String* precompile(int16_t from, int16_t to, int16_t extra);
	void reread();
	::java::util::Iterator* search($String* pattern, ::com::sun::org::apache::bcel::internal::generic::InstructionHandle* from, ::com::sun::org::apache::bcel::internal::util::InstructionFinder$CodeConstraint* constraint);
	::java::util::Iterator* search($String* pattern);
	::java::util::Iterator* search($String* pattern, ::com::sun::org::apache::bcel::internal::generic::InstructionHandle* from);
	::java::util::Iterator* search($String* pattern, ::com::sun::org::apache::bcel::internal::util::InstructionFinder$CodeConstraint* constraint);
	static const int32_t OFFSET = 32767;
	static const int32_t NO_OPCODES = 256;
	static ::java::util::Map* map;
	::com::sun::org::apache::bcel::internal::generic::InstructionList* il = nullptr;
	$String* ilString = nullptr;
	$Array<::com::sun::org::apache::bcel::internal::generic::InstructionHandle>* handles = nullptr;
};

						} // util
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("NO_OPCODES")
#pragma pop_macro("OFFSET")

#endif // _com_sun_org_apache_bcel_internal_util_InstructionFinder_h_