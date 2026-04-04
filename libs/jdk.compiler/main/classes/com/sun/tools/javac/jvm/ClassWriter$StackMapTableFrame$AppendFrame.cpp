#include <com/sun/tools/javac/jvm/ClassWriter$StackMapTableFrame$AppendFrame.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/jvm/ClassWriter$StackMapTableFrame.h>
#include <com/sun/tools/javac/jvm/ClassWriter.h>
#include <com/sun/tools/javac/util/ByteBuffer.h>
#include <jcpp.h>

using $TypeArray = $Array<::com::sun::tools::javac::code::Type>;
using $ClassWriter = ::com::sun::tools::javac::jvm::ClassWriter;
using $ClassWriter$StackMapTableFrame = ::com::sun::tools::javac::jvm::ClassWriter$StackMapTableFrame;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

void ClassWriter$StackMapTableFrame$AppendFrame::init$(int32_t frameType, int32_t offsetDelta, $TypeArray* locals) {
	$ClassWriter$StackMapTableFrame::init$();
	this->frameType = frameType;
	this->offsetDelta = offsetDelta;
	$set(this, locals, locals);
}

int32_t ClassWriter$StackMapTableFrame$AppendFrame::getFrameType() {
	return this->frameType;
}

void ClassWriter$StackMapTableFrame$AppendFrame::write($ClassWriter* writer) {
	$useLocalObjectStack();
	$ClassWriter$StackMapTableFrame::write(writer);
	$nc($nc(writer)->databuf)->appendChar(this->offsetDelta);
	if (writer->debugstackmap) {
		$nc($System::out)->print($$str({" offset_delta="_s, $$str(this->offsetDelta)}));
	}
	for (int32_t i = 0; i < $nc(this->locals)->length; ++i) {
		if (writer->debugstackmap) {
			$nc($System::out)->print($$str({" locals["_s, $$str(i), "]="_s}));
		}
		writer->writeStackMapType(this->locals->get(i));
	}
}

ClassWriter$StackMapTableFrame$AppendFrame::ClassWriter$StackMapTableFrame$AppendFrame() {
}

$Class* ClassWriter$StackMapTableFrame$AppendFrame::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"frameType", "I", nullptr, $FINAL, $field(ClassWriter$StackMapTableFrame$AppendFrame, frameType)},
		{"offsetDelta", "I", nullptr, $FINAL, $field(ClassWriter$StackMapTableFrame$AppendFrame, offsetDelta)},
		{"locals", "[Lcom/sun/tools/javac/code/Type;", nullptr, $FINAL, $field(ClassWriter$StackMapTableFrame$AppendFrame, locals)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(II[Lcom/sun/tools/javac/code/Type;)V", nullptr, 0, $method(ClassWriter$StackMapTableFrame$AppendFrame, init$, void, int32_t, int32_t, $TypeArray*)},
		{"getFrameType", "()I", nullptr, 0, $virtualMethod(ClassWriter$StackMapTableFrame$AppendFrame, getFrameType, int32_t)},
		{"write", "(Lcom/sun/tools/javac/jvm/ClassWriter;)V", nullptr, 0, $virtualMethod(ClassWriter$StackMapTableFrame$AppendFrame, write, void, $ClassWriter*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.jvm.ClassWriter$StackMapTableFrame", "com.sun.tools.javac.jvm.ClassWriter", "StackMapTableFrame", $STATIC | $ABSTRACT},
		{"com.sun.tools.javac.jvm.ClassWriter$StackMapTableFrame$AppendFrame", "com.sun.tools.javac.jvm.ClassWriter$StackMapTableFrame", "AppendFrame", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.jvm.ClassWriter$StackMapTableFrame$AppendFrame",
		"com.sun.tools.javac.jvm.ClassWriter$StackMapTableFrame",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.jvm.ClassWriter"
	};
	$loadClass(ClassWriter$StackMapTableFrame$AppendFrame, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ClassWriter$StackMapTableFrame$AppendFrame);
	});
	return class$;
}

$Class* ClassWriter$StackMapTableFrame$AppendFrame::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com