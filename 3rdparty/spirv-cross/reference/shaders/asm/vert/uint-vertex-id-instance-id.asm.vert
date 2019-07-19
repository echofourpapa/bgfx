#version 450

uniform int SPIRV_Cross_BaseInstance;

vec4 _main(uint vid, uint iid)
{
    return vec4(float(vid + iid));
}

void main()
{
    uint vid = uint(gl_VertexID);
    uint iid = uint((gl_InstanceID + SPIRV_Cross_BaseInstance));
    uint param = vid;
    uint param_1 = iid;
    gl_Position = _main(param, param_1);
}

