#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator$Chunk.h>

#include <com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator.h>
#include <jcpp.h>

using $InstructionHandle = ::com::sun::org::apache::bcel::internal::generic::InstructionHandle;
using $MethodGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {
								namespace util {

$FieldInfo _MethodGenerator$Chunk_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;", nullptr, $FINAL | $SYNTHETIC, $field(MethodGenerator$Chunk, this$0)},
	{"m_start", "Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;", nullptr, $PRIVATE, $field(MethodGenerator$Chunk, m_start)},
	{"m_end", "Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;", nullptr, $PRIVATE, $field(MethodGenerator$Chunk, m_end)},
	{"m_size", "I", nullptr, $PRIVATE, $field(MethodGenerator$Chunk, m_size)},
	{}
};

$MethodInfo _MethodGenerator$Chunk_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;)V", nullptr, 0, $method(MethodGenerator$Chunk, init$, void, $MethodGenerator*, $InstructionHandle*, $InstructionHandle*)},
	{"compareTo", "(Ljava/lang/Object;)I", nullptr, $PUBLIC, $virtualMethod(MethodGenerator$Chunk, compareTo, int32_t, Object$*)},
	{"getChunkEnd", "()Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;", nullptr, 0, $virtualMethod(MethodGenerator$Chunk, getChunkEnd, $InstructionHandle*)},
	{"getChunkSize", "()I", nullptr, 0, $virtualMethod(MethodGenerator$Chunk, getChunkSize, int32_t)},
	{"getChunkStart", "()Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;", nullptr, 0, $virtualMethod(MethodGenerator$Chunk, getChunkStart, $InstructionHandle*)},
	{"isAdjacentTo", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator$Chunk;)Z", nullptr, 0, $virtualMethod(MethodGenerator$Chunk, isAdjacentTo, bool, MethodGenerator$Chunk*)},
	{}
};

$InnerClassInfo _MethodGenerator$Chunk_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xalan.internal.xsltc.compiler.util.MethodGenerator$Chunk", "com.sun.org.apache.xalan.internal.xsltc.compiler.util.MethodGenerator", "Chunk", $PRIVATE},
	{}
};

$ClassInfo _MethodGenerator$Chunk_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.util.MethodGenerator$Chunk",
	"java.lang.Object",
	"java.lang.Comparable",
	_MethodGenerator$Chunk_FieldInfo_,
	_MethodGenerator$Chunk_MethodInfo_,
	"Ljava/lang/Object;Ljava/lang/Comparable<Ljava/lang/Object;>;",
	nullptr,
	_MethodGenerator$Chunk_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.util.MethodGenerator"
};

$Object* allocate$MethodGenerator$Chunk($Class* clazz) {
	return $of($alloc(MethodGenerator$Chunk));
}

void MethodGenerator$Chunk::init$($MethodGenerator* this$0, $InstructionHandle* start, $InstructionHandle* end) {
	$set(this, this$0, this$0);
	$set(this, m_start, start);
	$set(this, m_end, end);
	int32_t var$0 = $nc(end)->getPosition();
	this->m_size = var$0 - $nc(start)->getPosition();
}

bool MethodGenerator$Chunk::isAdjacentTo(MethodGenerator$Chunk* neighbour) {
	return $nc($(getChunkEnd()))->getNext() == $nc(neighbour)->getChunkStart();
}

$InstructionHandle* MethodGenerator$Chunk::getChunkStart() {
	return this->m_start;
}

$InstructionHandle* MethodGenerator$Chunk::getChunkEnd() {
	return this->m_end;
}

int32_t MethodGenerator$Chunk::getChunkSize() {
	return this->m_size;
}

int32_t MethodGenerator$Chunk::compareTo(Object$* comparand) {
	int32_t var$0 = getChunkSize();
	return var$0 - $nc(($cast(MethodGenerator$Chunk, comparand)))->getChunkSize();
}

MethodGenerator$Chunk::MethodGenerator$Chunk() {
}

$Class* MethodGenerator$Chunk::load$($String* name, bool initialize) {
	$loadClass(MethodGenerator$Chunk, name, initialize, &_MethodGenerator$Chunk_ClassInfo_, allocate$MethodGenerator$Chunk);
	return class$;
}

$Class* MethodGenerator$Chunk::class$ = nullptr;

								} // util
							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com