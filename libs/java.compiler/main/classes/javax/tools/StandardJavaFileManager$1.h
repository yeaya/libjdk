#ifndef _javax_tools_StandardJavaFileManager$1_h_
#define _javax_tools_StandardJavaFileManager$1_h_
//$ class javax.tools.StandardJavaFileManager$1
//$ extends java.util.Iterator

#include <java/util/Iterator.h>

namespace java {
	namespace lang {
		class Iterable;
	}
}

namespace javax {
	namespace tools {

class StandardJavaFileManager$1 : public ::java::util::Iterator {
	$class(StandardJavaFileManager$1, $NO_CLASS_INIT, ::java::util::Iterator)
public:
	StandardJavaFileManager$1();
	void init$(::java::lang::Iterable* val$files);
	virtual bool hasNext() override;
	virtual $Object* next() override;
	::java::lang::Iterable* val$files = nullptr;
	::java::util::Iterator* iter = nullptr;
};

	} // tools
} // javax

#endif // _javax_tools_StandardJavaFileManager$1_h_