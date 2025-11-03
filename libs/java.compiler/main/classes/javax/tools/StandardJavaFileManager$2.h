#ifndef _javax_tools_StandardJavaFileManager$2_h_
#define _javax_tools_StandardJavaFileManager$2_h_
//$ class javax.tools.StandardJavaFileManager$2
//$ extends java.util.Iterator

#include <java/util/Iterator.h>

namespace java {
	namespace lang {
		class Iterable;
	}
}

namespace javax {
	namespace tools {

class StandardJavaFileManager$2 : public ::java::util::Iterator {
	$class(StandardJavaFileManager$2, $NO_CLASS_INIT, ::java::util::Iterator)
public:
	StandardJavaFileManager$2();
	void init$(::java::lang::Iterable* val$paths);
	virtual bool hasNext() override;
	virtual $Object* next() override;
	::java::lang::Iterable* val$paths = nullptr;
	::java::util::Iterator* iter = nullptr;
};

	} // tools
} // javax

#endif // _javax_tools_StandardJavaFileManager$2_h_