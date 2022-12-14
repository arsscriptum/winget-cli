// Copyright (c) Microsoft Corporation.
// Licensed under the MIT License.
#pragma once
#include "pch.h"

namespace AppInstaller::Archive
{
    HRESULT TryExtractArchive(const std::filesystem::path& archivePath, const std::filesystem::path& destPath);
}