#pragma once

#include "dll.h"
#include "core/types.h"
#include "graphics/pipeline.h"
#include "graphics/shader.h"
#include "math/vec3.h"
#include "math/mat44.h"

class APP_COMMON_DLL ImGuiPipeline : public Graphics::Pipeline
{
public:
	ImGuiPipeline();
	virtual ~ImGuiPipeline() {}

	void Setup(Graphics::RenderGraph& renderGraph) override;
	bool HaveExecuteErrors() const override { return false; }
};
